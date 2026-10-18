"""Lift straight-line registration functions from the original instructions into the generated-source forms
metasrc.py translates (see its tr_* functions).

The generator (tools/unknowngen) never produced source for about 500 registration functions, although their
shapes are the ones it produced elsewhere. This module reads a function's original instructions
(build/GDJEB2/analysis/reg/allfns.json, written by funcindex.py), runs them symbolically and writes the
generated-source text for it:
- register: the meta_registerClass call, with its register and stack arguments, after an optional guard call;
- vtableRead: a plain temporary object (its stores in order, the vtable read through _arkCore+0x394 and an
  explicit destructor call), with a struct of the stored members;
- fieldInit: the field-setup calls and the member stores;
- getMeta: the fixed form.

Destructor chains (lift_vtableread_chain) and the inline reference release are recognized; other branches
and instructions are not lifted (Unliftable). The text is only an intermediate: metasrc.py turns it into readable source and verifies the
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

RELEASE_RE=re.compile(r'lwz (r\d+), 0x4\((r\d+)\)\nsubi r0, \1, 0x1\nstw r0, 0x4\(\2\)\nlwz r0, 0x4\(\2\)\nclrlwi\. r0, r0, 9\nbne \S+\n(?:mr r3, \2\n)?bl fn_80066E1C')

def collapse_releases(insns):
    """The inline reference release (meta_release in include/meta/register.h) as one pseudo-instruction."""
    text='\n'.join(insns)
    return RELEASE_RE.sub(lambda m:'release %s'%m[2],text).split('\n')

def run(insns,state=None):
    """Symbolic execution. Returns (calls, stores, frame size), with every call's argument values and the
    stack arguments stored before it, and every store as (base value, offset, width, value). With state (a
    dict), the register values at the end are left in it."""
    R={'r%d'%i:('init','r%d'%i) for i in range(32)};R['r0']=('init','r0')
    F={}
    calls=[];stores=[];frame=None;stack={};W=set();CTR=None
    for ins in insns:
        op,_,rest=ins.partition(' ');a=[x.strip() for x in rest.split(',')] if rest else []
        if a and re.fullmatch(r'[rf]\d+',a[0]) and not op.startswith('st') and op not in ('cmplwi','cmpwi'): W.add(a[0])
        if op=='stwu' and a[0]=='r1': frame=-num(a[1].split('(')[0]);continue
        if op in ('mflr','mtlr','blr'): continue
        if op in ('stmw','lmw') and a[1].endswith('(r1)'): continue   # saving and restoring registers
        if op=='addic.' and a[1]=='r1': op='addi'           # the address of a member, tested for null
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
            if v[0]=='sp': R[d]=('sp',v[1]+k);continue
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
            b=R[m[2]]
            if b[0]=='sp': stores.append((('sp',0),b[1]+off,width,v));continue   # through a copy of the address
            stores.append((b,off,width,v));continue
        if op=='release':
            calls.append(('meta_release',[R[a[0]]]+[None]*7,dict(stack),len(stores),None,{'r3'}))
            k=len(calls)-1
            for r in ['r0']+ARGS+['r11','r12']: R[r]=('clobbered',k)
            W=set();continue
        if op=='mtctr': CTR=R[a[0]];continue
        if op=='bctrl':
            if not (CTR[0]=='ld' and CTR[1][0]=='ld' and CTR[1][2]==0 and CTR[1][1]==R['r3']): raise Unliftable('indirect call')
            calls.append(('VIRT%X'%CTR[2],[R[r] for r in ARGS],dict(stack),len(stores),None,set(W)))
            W=set();k=len(calls)-1
            for r in ['r0']+ARGS+['r11','r12']: R[r]=('clobbered',k)
            R['r3']=('ret',k);continue
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
    if state is not None: state.update(R)
    return calls,stores,frame

def lift_register(c,insns):
    calls,stores,frame=run(insns)
    if not calls or calls[-1][0]!='meta_registerClass': raise Unliftable('register call')
    pre=[x[0] for x in calls[:-1]]
    if len(pre)>1: raise Unliftable('register guard')
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
    """The plain-object form: returns (function text, {struct name: struct text}). sizes: vtable symbol -> the
    size of its class, for ordering the stores."""
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

# Read-only small strings a unit defines itself (written as literals): {symbol: text}; set by poolsrc.py.
STRINGS={}
USED_STRINGS=set()

# Returned types and argument counts of the field-replacement helpers (see lift_fieldinit): the registers
# written before a call do not always tell its arguments.
RETURNS={'fn_80053998':'int'}
ARITY={'fn_800658F8':2,'fn_80053998':2,'fn_8006588C':3}

def lift_fieldinit(c,insns,pool=None,name=None):
    """pool: {(base symbol, offset): name} for tables addressed from a pool (see poolsrc.py)."""
    calls,stores,frame=run(collapse_releases(insns))
    pool=pool or {}
    names={};out=[];n=[0]
    def var(v):
        if v not in names: raise Unliftable('fieldInit value %s'%(v,))
        return names[v]
    meta=('m',c+'_meta',0)
    def expr(v):
        if v in names: return names[v]
        if v==meta: return c+'_meta'
        if v[0]=='c': return str(v[1])
        if v[0]=='a' and (v[1],v[2]) in pool: return pool[(v[1],v[2])]
        if v[0]=='m' and v[2]==0 and v[1].endswith('_meta'): return v[1]     # a class's metaobject
        if v[0]=='a' and v[2]==0: return v[1]
        if v[0]=='f' and (v[1],v[2]) in pool: return '*reinterpret_cast<float *>(%s)'%pool[(v[1],v[2])]
        if v[0]=='f' and v[2]==0: return '*reinterpret_cast<float *>(%s)'%v[1]
        if v[0]=='f' : return '*reinterpret_cast<float *>((%s+%d))'%(v[1],v[2])
        if v[0]=='ld' and (v[1] in names or v[1]==meta):
            return '*reinterpret_cast<void **>(reinterpret_cast<char *>(%s)+%d)'%(expr(v[1]),v[2])
        raise Unliftable('fieldInit expr %s'%(v,))
    def new(v,text):
        k='v%d'%n[0];n[0]+=1;names[v]=k;out.append(text%k)
    decls=[];vtypes={}
    # The metaobject is loaded first; later loads of it are written as the global.
    si=0
    # Values built on the stack and passed by address (a field's default vector or matrix): one local float
    # array from r1+8, written as verbatim lines (' @@').
    sp=[s for s in stores if s[0][0]=='sp']
    if sp:
        lo=min(s[1] for s in sp);hi=max(s[1]+4 for s in sp)
        if lo!=8 or any(s[2] not in (4,'f') for s in sp): raise Unliftable('fieldInit stack layout')
        out.append(' @@    float local[%d];'%((hi-lo)//4))
    def flush(upto):
        nonlocal si
        # the stack stores before a call, in offset order (the source's; the stores are scheduled apart)
        for base,off,width,v in sorted((s for s in stores[si:upto] if s[0][0]=='sp'),key=lambda s:s[1]):
            i=(off-8)//4
            if width=='f': out.append(' @@    local[%d] = %s;'%(i,expr(v)))
            else: out.append(' @@    *reinterpret_cast<int *>(&local[%d]) = %s;'%(i,expr(v)))
        while si<upto:
            base,off,width,v=stores[si];si+=1
            if base[0]=='sp': continue
            typ={4:'void * *' if v[0] in ('a','ret','m') else 'int *',1:'unsigned char *',2:'short *','f':'float *'}[width]
            tgt=c+'_meta' if base==meta else var(base)
            if v[0]=='a' and v[2]==0 and v[1].startswith('fn_'): decls.append('void %s();'%v[1])   # a function's address
            out.append(' *reinterpret_cast<%s>(reinterpret_cast<char *>(%s)+%d)=%s;'%(typ,tgt,off,expr(v)))
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
        elif t=='meta_release':
            out.append(' meta_release(%s);'%expr(args[0]))
        elif t.startswith('VIRT'):
            # a virtual call on a field (slot 0x54 returns a copy of it)
            hi=max([ARGS.index(r) for r in wr if r in ARGS],default=0)
            a=[expr(x) for x in args[1:hi+1]]
            obj=args[0]
            def has(v,r): return v==r or (isinstance(v,tuple) and any(has(x,r) for x in v if isinstance(x,tuple)))
            later=any(has(x,obj) for c2 in calls[k+1:] for x in c2[1][:len(c2[5])+1]) or any(
                has(s[0],obj) or has(s[3],obj) for s in stores[ns:])
            if obj in names and not later:
                # the copy replaces the field in the same variable
                names[ret]=names[obj]
                out.append(' %s=reinterpret_cast<igMetaFieldVirtuals *>(%s)->virtual%s(%s);'%(names[obj],names[obj],t[4:],','.join(a)))
            else:
                new(ret,' void *%%s=reinterpret_cast<igMetaFieldVirtuals *>(%s)->virtual%s(%s);'%(expr(args[0]),t[4:],','.join(a)))
        else:
            # A class's metaObject or getMeta, or a call setting up a field (the field and its value, or a float
            # value in f1).
            # a register holding only an address's high half (lis for a float load) is not an argument
            hi=max([ARGS.index(r) for r in wr if r in ARGS and args[ARGS.index(r)][0]!='ha'],default=-1)
            if t in ARITY: hi=ARITY[t]-1
            if args[1][0]=='sp' and hi>1: hi=1   # (field, &local value): later registers are load temporaries
            if f1 is not None and hi<=0:
                if used(k) or f1[0]!='f': raise Unliftable('float argument')
                out.append(' %s(%s,%s);'%(t,expr(args[0]),expr(f1)));decls.append('void %s(void *, float);'%t)
                continue
            if hi<0:
                nxt=calls[k+1] if k+1<len(calls) else None
                once=nxt and sum(1 for x in nxt[1] if x==ret)==1 and ret not in nxt[1][:1] and not any(
                    ret in (s[0],s[3]) for s in stores) and not any(ret in c2[1] for c2 in calls[k+2:])
                if used(k) and once and nxt[0] not in ('meta_field','meta_fieldCount','meta_appendFields','meta_setupFields'):
                    # passed straight to the next call
                    names[ret]='%s()'%t;decls.append('void *%s();'%t);continue
                if used(k): new(ret,' void *%%s=%s();'%t);decls.append('void *%s();'%t)
                else: out.append(' %s();'%t);decls.append('void %s();'%t)
                continue
            if used(k):
                # a call whose result is used: the field-replacement helpers
                a=[expr(x) for x in args[:hi+1]]
                rt=RETURNS.get(t,'void *');vtypes[ret]=rt
                new(ret,' %s%%s=%s(%s);'%(rt if rt.endswith('*') else rt+' ',t,','.join(a)))
                decls.append('%s%s%s(%s);'%(rt,'' if rt.endswith('*') else ' ',t,', '.join('void *' for x in a)))
                continue
            a=[expr(args[0])];types=['void *']
            # r4 may hold the lis half of r5's value, a temporary
            tmp4='r4' in wr and args[1][0]=='c' and args[2][0]=='c' and args[1][1]&0xFFFF==0 and (args[1][1]^args[2][1])&0xFFFF0000==0
            if ('r4' not in wr or tmp4) and hi==3 and args[2][0]=='c' and args[3][0]=='c':
                v=((args[2][1]&0xFFFFFFFF)<<32)|(args[3][1]&0xFFFFFFFF)
                a.append('0x%XLL'%v if v else '0');types.append('long long')   # a 64-bit value in r5:r6
            else:
                for r in ARGS[1:hi+1]:
                    v=args[ARGS.index(r)]
                    if v[0]=='sp' and sp and v[1]>=8: a.append('&local[%d]'%((v[1]-8)//4));types.append('void *');continue
                    if v[0]!='c' and v not in names and v[0]!='a': raise Unliftable('call argument')
                    if v in names and names[v].endswith('()'): types.append('void *');a.append(names[v]);continue
                    e=expr(v)
                    if v[0]=='a' and v[2]==0 and v[1] in STRINGS:
                        e='(void *)"%s"'%STRINGS[v[1]].replace('\\','\\\\').replace('"','\\"');USED_STRINGS.add(v[1])
                    elif v[0]=='a' and re.fullmatch(r'\w+',e): e='(void *)'+e     # (read-only data is declared const)
                    a.append(e);types.append('int' if v[0]=='c' else vtypes.get(v,'void *'))
            out.append(' %s(%s);'%(t,','.join(a)));decls.append('void %s(%s);'%(t,', '.join(types)))
    flush(len(stores))
    return 'void %s(){\n%s\n}'%(name or c+'_fieldInit','\n'.join(out)),decls

VTOF=re.compile(r'lwzx (r\d+), r\d+, r\d+$')
RELEASE='internalRelease__Q33Gap4Core21igStringPoolContainerFPCQ33Gap4Core16igStringPoolItem'

def lift_vtableread_chain(c,insns,size,sizes,ctors=False):
    """The temporary instance as a chain of structs whose inline destructors restore each level's vtable and
    release its members. The members and their levels are read from the destructor code after the vtable
    read: each level's vtable store is followed by the releases of its own members (references, strings
    released inline, strings released through an out-of-line lookup of their pool item). Returns (function
    text, {struct name: text}, declarations)."""
    i=next((k for k,x in enumerate(insns) if VTOF.match(x)),None)
    if i is None: raise Unliftable('chain vtable read')
    R={}
    calls,stores,frame=run(insns[:i],R)
    obj=8
    if not calls or calls[0][1][0]!=('sp',obj): raise Unliftable('chain construct')
    root=calls[0][0]
    membercalls=[]
    for t,args,stack,ns,f1,wr in calls[1:]:
        if args[0][0]!='sp' or args[0][1]<=obj: raise Unliftable('chain call '+t)
        membercalls.append((ns,t,args[0][1]-obj))
    # destructor code
    post=insns[i+1:]
    vts=[];members={};this=None;level=None;kinds=[];explicit=None
    def addr(r):
        v=R.get(r)
        return v[1] if v and v[0]=='sp' else None
    for ins in insns[:i]:
        m=re.match(r'addic\. (r\d+), r1, (0x[0-9a-f]+)',ins)
        if m: this=num(m[2])
    cur=None
    for ins in post:
        op,_,rest=ins.partition(' ');a=[x.strip() for x in rest.split(',')] if rest else []
        if op=='lis':
            m=re.fullmatch(r'(\w+)@ha',a[1]);R[a[0]]=('ha',m[1]) if m else ('c',0);continue
        if op=='addi':
            m=re.fullmatch(r'(\w+)@l',a[2])
            if m and R.get(a[1])==('ha',m[1]): R[a[0]]=('a',m[1],0);continue
            if a[1]=='r1': R[a[0]]=('sp',num(a[2]));continue
            R[a[0]]=('?',);continue
        if op=='addic.':
            if a[1]!='r1': raise Unliftable('chain addic')
            R[a[0]]=('sp',num(a[2]));this=num(a[2]);continue
        if op=='stw' and re.fullmatch(r'0x8\(r1\)|0x0\(r31\)',a[1]) and R.get(a[0],('?',))[0]=='a':
            level=R[a[0]][1];vts.append(level);continue
        if op=='cmplwi' and addr(a[0]) is not None: this=addr(a[0]);continue
        if op=='beq' and this is not None:
            cur=this-obj;this=None
            if cur in members: raise Unliftable('chain member twice')
            members[cur]=[None,level];kinds.append(cur);continue
        if op=='bl' and a[0] in SAVE: continue
        if op=='bl' and cur is None and explicit is None and not members:
            explicit=a[0];continue                       # the class's out-of-line destructor, called explicitly
        if op=='bl':
            if cur is None: raise Unliftable('chain call outside a member')
            k={'fn_80066E1C':'ref',RELEASE:'string','fn_801ACC5C':'stringcall'}.get(a[0])
            if k is None: raise Unliftable('chain release '+a[0])
            if members[cur][0] is None or members[cur][0]=='string' and k=='stringcall': members[cur][0]=k
            elif k=='string' and members[cur][0]=='stringcall': pass
            else: raise Unliftable('chain member kinds')
            for r in ['r0','r3','r4','r5','r6','r7','r8','r9','r10','r11','r12']: R[r]=('?',)
            continue
        if op in ('lwz',):
            R[a[0]]=('?',);continue
        if op in ('mr',): R[a[0]]=R.get(a[1],('?',));continue
        if op in ('li','subi','subic.','clrlwi.','stw','cmplwi','bne','beq','mtlr','blr','mflr'): 
            if op in ('li','subi','subic.','clrlwi.'): R[a[0]]=('?',)
            continue
        if op=='addi' and a[0]=='r1': continue
        raise Unliftable('chain '+op)
    for o,(k,lv) in members.items():
        if k is None: raise Unliftable('chain member without release')
    # the level order, from the stores before the vtable read (the first store at the object is each level's)
    chain=[]
    for base,off,width,v in stores:
        if base==('sp',0) and off==obj and v[0]=='a' and v[1] not in chain: chain.append(v[1])
    if not chain or chain[-1]!=c+'_vtable': raise Unliftable('chain levels')
    for o,(k,lv) in members.items():
        if lv not in chain: raise Unliftable('chain member level')
    # plain members: the stores at other offsets, and the members set up by calls
    plain={}
    for base,off,width,v in stores:
        if base!=('sp',0) or off<obj: raise Unliftable('chain store')
        o=off-obj
        if o==0 or o in members: continue
        if width!=4: raise Unliftable('chain width')
        plain[o]='void *' if v[0]=='a' else 'int'
    for ns,t,o in membercalls:
        if o in members or o in plain: raise Unliftable('chain call member')
        plain[o]=('call',t)
    # a level's members are those below its class's size (or below the next level's released members)
    bound={}
    for j,vt in enumerate(chain):
        if vt in sizes: bound[vt]=sizes[vt]
    bound[chain[-1]]=max(size,max(list(members)+list(plain)+[0])+4)
    owner={}
    for o,(k,lv) in members.items(): owner[o]=lv
    allo=sorted(set(members)|set(plain))
    for o in allo:
        if o in owner: continue
        lv=None
        for vt in chain:
            if vt in bound and o<bound[vt]: lv=vt;break
        if lv is None: lv=chain[-1]
        owner[o]=lv
    if ctors=='asm order':
        # each plain member belongs to the level whose vtable was stored last before its store
        cur_vt=None
        for base,off,width,v in stores:
            o=off-obj
            if o==0 and v[0]=='a': cur_vt=v[1];continue
            if o in plain and o not in members and cur_vt: owner[o]=cur_vt
    # offsets must grow along the chain
    last=-1
    for vt in chain:
        os=[o for o in allo if owner[o]==vt]
        if os and min(os)<=last: raise Unliftable('chain order')
        if os: last=max(os)
    widths={}
    for k,o in enumerate(allo):
        nxt=allo[k+1] if k+1<len(allo) else bound[chain[-1]]
        widths[o]=4 if not isinstance(plain.get(o),tuple) else nxt-o
    rootname='UnknownGenRootL'+c
    structs={}
    rootctor='igObject_construct' if root=='igObject_construct' else root
    structs[rootname]='struct %s {\n void *unknown00;\n inline void operator delete(void *){}\n inline %s(){%s(this);}\n};'%(rootname,rootname,rootctor)
    parent=rootname;pos=4;names=[]
    for j,vt in enumerate(chain):
        nm='UnknownGenObjectL%s_%d'%(c,j)
        s=['struct %s : %s {'%(nm,parent)]
        for o in allo:
            if owner[o]!=vt: continue
            if o>pos: s.append(' char unknown%02X[%d];'%(pos,o-pos))
            if o in members:
                s.append(' %s unknown%02X;'%({'ref':'UnknownGenRefMember','string':'UnknownGenString','stringcall':'UnknownGenStringCall'}[members[o][0]],o))
            elif isinstance(plain[o],tuple): s.append(' char unknown%02X[%d];'%(o,widths[o]))
            else: s.append(' %sunknown%02X;'%(plain[o] if plain[o].endswith('*') else plain[o]+' ',o))
            pos=o+widths[o]
        end=bound.get(vt)
        if j==len(chain)-1 and end and end>pos: s.append(' char unknown%02X[%d];'%(pos,end-pos));pos=end
        if ctors=='top':
            # Only the most-derived level has a constructor, which builds every level in the original order
            # (the store order as scheduled is kept; calls between them by position).
            if j==len(chain)-1:
                ev=[]
                for si,(base,off,width,v) in enumerate(stores):
                    o=off-obj
                    val=str(v[1]) if v[0]=='c' else v[1] if v[0]=='a' and v[2]==0 else None
                    if val is None: raise Unliftable('chain value')
                    ev.append((si,1,'unknown%02X%s=%s;'%(o,'.value' if o in members else '',val)))
                for ns,tt,o in sorted(membercalls): ev.append((ns,0,'%s(&unknown%02X);'%(tt,o)))
                s.append(' inline %s(){%s}'%(nm,''.join(x[2] for x in sorted(ev))))
        elif ctors:
            # The level's constructor: its vtable, its members' initial values, then its members' setup calls.
            # (in their order: a member can be set after another's setup call)
            body=['unknown00=%s;'%vt];ev=[]
            for si,(base,off,width,v) in enumerate(stores):
                o=off-obj
                if o and owner.get(o)==vt:
                    val=str(v[1]) if v[0]=='c' else v[1] if v[0]=='a' and v[2]==0 else None
                    if val is None: raise Unliftable('chain value')
                    ev.append((si,1,'unknown%02X%s=%s;'%(o,'.value' if o in members else '',val)))
            for ns,tt,o in sorted(membercalls):
                if owner[o]==vt: ev.append((ns,0,'%s(&unknown%02X);'%(tt,o)))
            body+=[x[2] for x in (sorted(ev,key=lambda e:-e[1]) if ctors=='stores first' else sorted(ev))]
            s.append(' inline %s(){%s}'%(nm,''.join(body)))
        # Only levels whose destructor restores their vtable have one (the others' are trivial).
        if vt in vts: s.append(' inline ~%s(){unknown00=%s;}'%(nm,vt))
        s.append('};')
        structs[nm]='\n'.join(s);parent=nm;names.append(nm)
    # the body: the stores and member calls in order
    lines=[];ci=0
    mc=[] if ctors else sorted(membercalls)
    if ctors: stores=[]
    for si,(base,off,width,v) in enumerate(stores):
        while ci<len(mc) and mc[ci][0]<=si:
            lines.append(' %s(&object.unknown%02X);'%(mc[ci][1],mc[ci][2]));ci+=1
        o=off-obj
        val=str(v[1]) if v[0]=='c' else v[1] if v[0]=='a' and v[2]==0 else None
        if val is None: raise Unliftable('chain value')
        lines.append(' object.unknown%02X%s=%s;'%(o,'.value' if o in members else '',val))
    while ci<len(mc): lines.append(' %s(&object.unknown%02X);'%(mc[ci][1],mc[ci][2]));ci+=1
    if explicit:
        if not ctors: raise Unliftable('chain explicit destructor')
        lines.append(' void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);')
        lines.append(' %s(&object,-1);'%explicit)
        lines.append(' return result;')
    else:
        lines.append(' return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);')
    fn='void *%s_vtableRead(){\n %s object;\n%s\n}'%(c,names[-1],'\n'.join(lines))
    decls=['void %s(void *);'%t for t in sorted({t for ns,t,o in membercalls})]
    if explicit: decls.append('void %s(void *, int);'%explicit)
    if rootctor!='igObject_construct': decls.append('void %s(void *);'%rootctor)
    return fn,structs,decls
