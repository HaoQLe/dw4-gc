"""Lift straight-line registration functions from the original instructions into the generated-source forms
metasrc.py translates (see its tr_* functions).

The generator (tools/unknowngen) never produced source for about 250 registration functions, although their
shapes are the ones it produced elsewhere. This module reads a function's original instructions
(build/GDJEB2/analysis/reg/allfns.json, written by funcindex.py), runs them symbolically and writes the
generated-source text for it:
- register: the meta_registerClass call, with its register and stack arguments, after an optional guard call;
- vtableRead: a plain temporary object (its stores in order, the vtable read through _arkCore+0x394 and an
  explicit destructor call), with a struct of the stored members;
- fieldInit: the field-setup calls and the member stores;
- getMeta: the fixed form.

Functions with branches (inline destructors, conditional field setup) or other instructions are not lifted
(Unliftable). The text is only an intermediate: metasrc.py turns it into readable source and verifies the
compiled result against the original."""
import re

class Unliftable(Exception): pass

# Values: ('c',n) constant, ('ha',sym) high half, ('a',sym,off) address, ('sp',off) stack address,
# ('ret',k) the result of call k, ('m',sym,off) a word loaded from a global, ('ld',v,off) a word loaded
# through another value, ('f',sym,off) a float loaded from a global, ('init',r) a register's value on entry.
ARGS=['r3','r4','r5','r6','r7','r8','r9','r10']
SAVE={'_savegpr_%d'%i for i in range(14,32)}|{'_restgpr_%d'%i for i in range(14,32)}

def num(s):
    return int(s,0)

def run(insns):
    """Symbolic execution. Returns (calls, stores, frame size), with every call's argument values and the
    stack arguments stored before it, and every store as (base value, offset, width, value)."""
    R={'r%d'%i:('init','r%d'%i) for i in range(32)};R['r0']=('init','r0')
    F={}
    calls=[];stores=[];frame=None;stack={};W=set()
    for ins in insns:
        op,_,rest=ins.partition(' ');a=[x.strip() for x in rest.split(',')] if rest else []
        if a and re.fullmatch(r'[rf]\d+',a[0]) and not op.startswith('st') and op not in ('cmplwi','cmpwi'): W.add(a[0])
        if op=='stwu' and a[0]=='r1': frame=-num(a[1].split('(')[0]);continue
        if op in ('mflr','mtlr','blr'): continue
        if op=='lis':
            m=re.fullmatch(r'(\w+)@ha',a[1])
            if m: R[a[0]]=('ha',m[1]);continue
            R[a[0]]=('c',(num(a[1])<<16)-((num(a[1])&0x8000)<<17));continue
        if op=='addi':
            d,s,imm=a
            m=re.fullmatch(r'(\w+)@l',imm)
            if m:
                if R[s]!=('ha',m[1]): raise Unliftable('addi @l')
                R[d]=('a',m[1],0);continue
            m=re.fullmatch(r'(\w+)@sda21',imm)
            if m: R[d]=('a',m[1],0);continue
            v=R[s];k=num(imm)
            if s=='r1': R[d]=('sp',k);continue
            if v[0]=='a': R[d]=('a',v[1],v[2]+k);continue
            if v[0]=='c': R[d]=('c',v[1]+k);continue
            if v[0] in ('ret','m','ld'): R[d]=('add',v,k);continue
            raise Unliftable('addi %s'%(v,))
        if op=='li':
            m=re.fullmatch(r'(\w+)@sda21',a[1])
            R[a[0]]=('a',m[1],0) if m else ('c',num(a[1]));continue
        if op=='mr': R[a[0]]=R[a[1]];continue
        if op=='ori' and R[a[1]][0]=='c': R[a[0]]=('c',R[a[1]][1]|num(a[2]));continue
        if op=='subi' and R[a[1]][0]=='c': R[a[0]]=('c',R[a[1]][1]-num(a[2]));continue
        if op in ('lwz','lfs'):
            m=re.fullmatch(r'(\w+)@sda21\(r0\)',a[1]);m2=re.fullmatch(r'(\w+)@l\((r\d+)\)',a[1])
            if m: base=('a',m[1],0);off=0
            elif m2:
                if R[m2[2]]!=('ha',m2[1]): raise Unliftable('@l load')
                base=('a',m2[1],0);off=0
            else:
                m=re.fullmatch(r'(-?0x[0-9a-f]+|\d+)\((r\d+)\)',a[1])
                if not m: raise Unliftable(ins)
                off=num(m[1]);base=R[m[2]]
                if m[2]=='r1':
                    if a[0]=='r0' or base==('init','r1') and off==frame+4: continue   # the saved LR
                    if off in stack: R[a[0]]=stack[off];continue
                    # restoring a saved register
                    continue
            if op=='lfs':
                if base[0]!='a': raise Unliftable('lfs')
                F[a[0]]=('f',base[1],base[2]+off);continue
            R[a[0]]=('m',base[1],base[2]+off) if base[0]=='a' else ('ld',base,off);continue
        if op=='lwzx':
            R[a[0]]=('lwzx',R[a[1]],R[a[2]]);continue
        if op in ('stw','stb','sth','stfs'):
            m=re.fullmatch(r'(-?0x[0-9a-f]+|\d+)\((r\d+)\)',a[1])
            if not m: raise Unliftable(ins)
            off=num(m[1]);v=F.get(a[0]) if op=='stfs' else R[a[0]]
            if v is None: raise Unliftable('float source')
            width={'stw':4,'stb':1,'sth':2,'stfs':'f'}[op]
            if m[2]=='r1':
                if v==('init',a[0]): continue                       # spill of a saved register or the LR
                if a[0]=='r0' and off==frame+4: continue
                stack[off]=v;stores.append((('sp',0),off,width,v));continue
            stores.append((R[m[2]],off,width,v));continue
        if op=='bl':
            t=a[0]
            if t in SAVE: continue
            calls.append((t,[R[r] for r in ARGS],dict(stack),len(stores),F.get('f1') if 'f1' in W else None,set(W)))
            W=set()
            k=len(calls)-1
            for r in ['r0']+ARGS+['r11','r12']: R[r]=('clobbered',k)
            R['r3']=('ret',k);continue
        if op=='rlwinm' or op.startswith('b') or op.startswith('cmp'): raise Unliftable('branch')
        raise Unliftable(op)
    return calls,stores,frame

def lift_register(c,insns):
    calls,stores,frame=run(insns)
    if not calls or calls[-1][0]!='meta_registerClass': raise Unliftable('register call')
    pre=[x[0] for x in calls[:-1]]
    if len(pre)>1 or any(x[1][0][0]!='init' and False for x in calls[:-1]): raise Unliftable('register guard')
    t,args,stack=calls[-1][:3]
    vals=args+[stack.get(8),stack.get(0xc),stack.get(0x10)]
    def fmt(v):
        if v is None: raise Unliftable('register stack argument')
        if v[0]=='c': return str(v[1])
        if v[0]=='a' and v[2]==0: return '(int)&%s'%v[1] if v[1].endswith('_meta') else '(int)%s'%v[1]
        raise Unliftable('register argument %s'%(v,))
    body=' meta_registerClass(%s);'%','.join(fmt(v) for v in vals)
    return 'void %s_register(){\n%s%s\n}'%(c,''.join(' %s();\n'%p for p in pre),body)

def lift_getmeta(c,insns):
    t=[re.sub(r'\.L_\w+','L',i) for i in insns]
    want=['stwu r1, -0x10(r1)','mflr r0','lis r3, %s_meta@ha'%c,'stw r0, 0x14(r1)','addi r3, r3, %s_meta@l'%c,
          'lwz r3, 0x0(r3)','cmplwi r3, 0x0','beq L','lwz r0, 0x24(r3)','rlwinm. r0, r0, 0, 29, 29','bne L',
          'bl %s_arkRegister'%c,'lis r3, %s_meta@ha'%c,'addi r3, r3, %s_meta@l'%c,'lwz r3, 0x0(r3)',
          'lwz r0, 0x14(r1)','mtlr r0','addi r1, r1, 0x10','blr']
    if t!=want: raise Unliftable('getMeta')
    return ('void *%s_getMeta(){if(!%s_meta||!(reinterpret_cast<unsigned int *>(%s_meta)[0x24/4]&4))%s_arkRegister();'
            'return %s_meta;}')%((c,)*5)

def lift_vtableread(c,insns,size,sizes=None):
    """sizes: vtable symbol -> the size of its class, for ordering the stores."""
    """The plain-object form: returns (function text, {struct name: struct text})."""
    calls,stores,frame=run(insns)
    if not calls or calls[0][0]!='igObject_construct' or calls[0][1][0]!=('sp',8): raise Unliftable('vtableRead construct')
    obj=8
    lines=[' igObject_construct(&object);']
    members={}
    result=None
    ci=1
    def val(v):
        if v[0]=='c': return str(v[1])
        if v[0]=='a' and v[2]==0: return v[1]
        raise Unliftable('vtableRead value %s'%(v,))
    order=[]
    for i,(base,off,width,v) in enumerate(stores):
        while ci<len(calls) and calls[ci][3]<=i: order.append(('call',calls[ci]));ci+=1
        order.append(('store',(base,off,width,v)))
    while ci<len(calls): order.append(('call',calls[ci]));ci+=1
    if sizes:
        # Source order: each level of the class chain sets its vtable, then its own members (those below its
        # size and not below its parent's), as the inline constructors do; the stores are scheduled apart.
        pre=[x for x in order if x[0]=='store'];post=[x for x in order if x[0]=='call']
        vt=[x for x in pre if x[1][1]==obj];rest=[x for x in pre if x[1][1]!=obj]
        levels=[sizes.get(x[1][3][1]) for x in vt]
        for i in range(len(levels)-2,-1,-1):
            if levels[i] is None: levels[i]=levels[i+1]
        if len(vt) and None not in levels:
            out=[];lo=0
            for x,hi in zip(vt,levels):
                out.append(x)
                out+=sorted((y for y in rest if lo<=y[1][1]-obj<hi),key=lambda y:y[1][1]);lo=max(lo,hi)
            out+=sorted((y for y in rest if y[1][1]-obj>=lo),key=lambda y:y[1][1])
            if len(out)==len(pre): order=out+post
    rv=None
    for kind,x in order:
        if kind=='store':
            base,off,width,v=x
            if base!=('sp',0) or off<obj: raise Unliftable('vtableRead store')
            if width!=4: raise Unliftable('vtableRead width')
            o=off-obj
            members[o]='void *' if v[0]=='a' else members.get(o,'int')
            lines.append(' object.unknown%02X=%s;'%(o,val(v)))
        else:
            t,args,stack=x[:3]
            if args[0]!=('sp',obj) or args[1]!=('c',-1): raise Unliftable('vtableRead call '+t)
            lines.append(' void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);')
            lines.append(' %s(&object,-1);'%t)
            rv='result'
    if rv is None:
        lines.append(' return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);')
    else: lines.append(' return result;')
    members[0]='void *'
    name='UnknownGenLift%s'%c
    s=['struct %s {'%name];pos=0
    for o in sorted(members):
        if o>pos: s.append(' char unknown%02X[%d];'%(pos,o-pos))
        s.append(' %sunknown%02X;'%(members[o],o));pos=o+4
    if size>pos: s.append(' char unknown%02X[%d];'%(pos,size-pos))
    s.append('};')
    fn='void *%s_vtableRead(){\n %s object;\n%s\n}'%(c,name,'\n'.join(lines))
    return fn,{name:'\n'.join(s)}

def lift_fieldinit(c,insns):
    calls,stores,frame=run(insns)
    names={};out=[];n=[0]
    def var(v):
        if v not in names: raise Unliftable('fieldInit value %s'%(v,))
        return names[v]
    meta=('m',c+'_meta',0)
    def expr(v):
        if v in names: return names[v]
        if v==meta: return c+'_meta'
        if v[0]=='c': return str(v[1])
        if v[0]=='a' and v[2]==0: return v[1]
        if v[0]=='f' : return '*reinterpret_cast<float *>((%s+%d))'%(v[1],v[2])
        raise Unliftable('fieldInit expr %s'%(v,))
    def new(v,text):
        k='v%d'%n[0];n[0]+=1;names[v]=k;out.append(text%k)
    # The metaobject is loaded first; later loads of it are written as the global.
    si=0
    def flush(upto):
        nonlocal si
        while si<upto:
            base,off,width,v=stores[si];si+=1
            if base[0]=='sp': raise Unliftable('fieldInit stack store')
            typ={4:'void * *' if v[0] in ('a','ret','m') else 'int *',1:'unsigned char *',2:'short *','f':'float *'}[width]
            tgt=c+'_meta' if base==meta else var(base)
            out.append(' *reinterpret_cast<%s>(reinterpret_cast<char *>(%s)+%d)=%s;'%(typ,tgt,off,expr(v)))
    decls=[]
    def used(k):
        r=('ret',k)
        def has(v): return v==r or (isinstance(v,tuple) and any(has(x) for x in v if isinstance(x,tuple)))
        return any(has(a) for c in calls[k+1:] for a in c[1][:len(c[5])+1]) or any(has(s[0]) or has(s[3]) for s in stores[calls[k][3]:])
    first=True
    for k,(t,args,stack,ns,f1,wr) in enumerate(calls):
        flush(ns)
        if first:
            if args[0]!=meta: raise Unliftable('fieldInit meta')
            names[meta]='v_meta';out.append(' void *v_meta=%s_meta;'%c);first=False
        ret=('ret',k)
        if t=='meta_fieldCount':
            new(ret,' void *%%s=meta_fieldCount(%s);'%expr(args[0]))
        elif t=='meta_field':
            ix=args[1]
            if ix in names: ixs=names[ix]
            elif ix[0]=='add' and ix[1] in names: ixs='(reinterpret_cast<char *>(%s)+%d)'%(names[ix[1]],ix[2])
            else: raise Unliftable('field index')
            new(ret,' void *%%s=meta_field(%s,%s);'%(expr(args[0]),ixs))
        elif t=='meta_appendFields':
            out.append(' meta_appendFields(%s,%s,%s);'%(expr(args[0]),expr(args[1]),expr(args[2])))
        elif t=='meta_setupFields':
            out.append(' meta_setupFields(%s);'%','.join(expr(x) for x in args[:5]))
        else:
            # A class's metaObject or getMeta, or a call setting up a field (the field and its value).
            if f1 is not None: raise Unliftable('float argument')
            hi=max([ARGS.index(r) for r in wr if r in ARGS],default=-1)
            if hi<0:
                if used(k): new(ret,' void *%%s=%s();'%t);decls.append('void *%s();'%t)
                else: out.append(' %s();'%t);decls.append('void %s();'%t)
                continue
            if used(k): raise Unliftable('call result with arguments')
            a=[expr(args[0])];types=['void *']
            if 'r4' not in wr and hi==3 and args[2][0]=='c' and args[3][0]=='c':
                v=((args[2][1]&0xFFFFFFFF)<<32)|(args[3][1]&0xFFFFFFFF)
                a.append('0x%X'%v if v else '0');types.append('long long')   # a 64-bit value in r5:r6
            else:
                for r in ARGS[1:hi+1]:
                    v=args[ARGS.index(r)]
                    if v[0]!='c' and v not in names and v[0]!='a': raise Unliftable('call argument')
                    a.append(expr(v));types.append('int' if v[0]=='c' else 'void *')
            out.append(' %s(%s);'%(t,','.join(a)));decls.append('void %s(%s);'%(t,', '.join(types)))
    flush(len(stores))
    return 'void %s_fieldInit(){\n%s\n}'%(c,'\n'.join(out)),decls
