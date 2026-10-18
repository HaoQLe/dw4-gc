"""Field setup that addresses its tables from a pool: one unit holding the tables and the code using them.

MWCC addresses the data a translation unit defines from the start of the unit's .data (the pool: `lis rB,
.data@ha; addi rB, rB, .data@l`, then `addi rX, rB, offset`). About 300 fieldInit functions address their
field tables this way, so their original units defined the tables, and a file over external data cannot
reproduce them. This tool writes such a unit for a pool whose users (the functions addressing it) are known:
1. names each pooled class's field tables in symbols.txt (`<C>_fieldTypes`, `_fieldNames`, `_fieldStorage`,
   `_fieldOffsets`: the addresses its fieldInit passes, the field count from meta_appendFields), shrinking a
   symbol that covered a table;
2. writes the unit: the pool's data objects in address order (strings as char arrays, word tables as pointer
   arrays with their relocations, other objects as bytes), then the users' readable source (metasrc.py);
3. verifies the compiled unit: each function against the original split objects, and its .data against the
   executable (bytes and relocation targets);
4. with --apply, writes the unit and its splits (.text, .data, extab, extabindex).

A pool is handled only when its users are one class's consecutive functions (a single unit's code), and the
pool's data ends before the next pool. Run after a normal build and funcindex.py.

usage: /opt/homebrew/bin/python3 tools/alchemymeta/poolsrc.py [--apply] [--only lbl_XXXXXXXX,...] [--debug]"""
import bisect,collections,json,re,subprocess,sys,tempfile
from pathlib import Path
HERE=Path(__file__).resolve().parent
sys.path.insert(0,str(HERE));sys.path.insert(0,str(HERE.parent/'unknowngen'));sys.path.insert(0,str(HERE.parent))
from paths import CONFIG
import asmlift,compiler,dol,elf,hwdiff,metasrc

DEBUG='--debug' in sys.argv
DEFINED=set()

def pool_base(insns):
    """The symbol a function keeps in a register and adds offsets to, if any."""
    base={}
    for ins in insns:
        m=re.match(r'lis (r\d+), (\w+)@ha$',ins)
        if m: base[m[1]]=('ha',m[2]);continue
        m=re.match(r'addi (r\d+), (r\d+), (\w+)@l$',ins)
        if m and base.get(m[2])==('ha',m[3]): base[m[1]]=('a',m[3]);continue
        m=re.match(r'(?:addi r\d+, (r\d+), 0x|(?:lfs f\d+|lwz r\d+), 0x[0-9a-f]+\((r\d+)\))',ins)
        if m:
            r=m[1] or m[2]
            if base.get(r,(None,))[0]=='a' and not (m[2] and ins.startswith('lwz') and ', 0x0(' in ins): return base[r][1]
    return None

def load_data_relocs():
    """Absolute address -> (target, addend) for every relocation in the original .data split objects."""
    out={}
    for u in json.load(open('objdiff.json'))['units']:
        p=u.get('target_path')
        if not p or not Path(p).exists() or '_data' not in p: continue
        secs,rels,syms=elf.parse(p)
        m=re.search(r'_([0-9A-F]{8})_data\.o$',p)
        if not m: continue
        base=int(m[1],16)
        for r in rels:
            if r['section']=='.data':
                if r['type']!=1: out[base+r['offset']]=('?',r['type'])
                else: out[base+r['offset']]=(r['symbol']['name'],r['addend'])
    return out

def rd(a,n):
    return bytes(dol.callshape.rd(a,n)) if n else b''

def c_string(b):
    out=''
    for ch in b:
        c=chr(ch)
        if c=='"' or c=='\\': out+='\\'+c
        elif 32<=ch<127: out+=c
        else: out+='\\x%02X'%ch if ch else '\\0'
    return out

def segment(objs,relocs):
    """Splits objects that dtk's symbols merge into the original's pieces: strings (a printable run and its
    terminator, followed by padding to the next word) and word tables. A piece keeps the symbol's name when it
    starts there, otherwise it is named lbl_<address>."""
    out=[]
    for name,a,size in objs:
        b=rd(a,size);o=0;pieces=[]
        while o<size:
            # a string at a word boundary: printable, terminated, no relocation inside
            e=o
            while e<size and 32<=b[e]<127 and (a+e) not in relocs: e+=1
            if o%4==0 and e-o>=2 and e<size and b[e]==0 and not any((a+k) in relocs for k in range(o,e+1)):
                end=e+1
                pieces.append((a+o,end-o,'string'))
                o=end
                while o<size and o%4 and b[o]==0: o+=1      # padding to the next word
                continue
            if o%4: raise ValueError('unaligned data in %s at %08X'%(name,a+o))
            # words up to the next string
            w=o
            while w<size:
                e=w
                while e<size and 32<=b[e]<127 and (a+e) not in relocs: e+=1
                if w>o and e-w>=2 and e<size and b[e]==0 and (a+w) not in relocs: break
                w+=4
            pieces.append((a+o,min(w,size)-o,'words'));o=min(w,size)
        for pa,ps,k in pieces:
            out.append((name if pa==a else 'lbl_%08X'%pa,pa,ps,k))
    return out

def data_source(objs,relocs,defined):
    """C definitions for objects [(name, address, size)] in address order. Returns (definitions, the external
    names they refer to). Objects of 8 bytes or less are placed in .data explicitly (MWCC would put them in
    small data)."""
    out=[];refs=set();pos=None
    for name,a,size in objs:
        n0=len(out)
        _emit_one(name,a,size,relocs,out,refs)
        if size<=8: out[n0]='__declspec(section ".data") '+out[n0]
    return out,refs-defined

def _emit_one(name,a,size,relocs,out,refs):
    if True:
        b=rd(a,size)
        rs={o:relocs[a+o] for o in range(size) if a+o in relocs}
        if any(t=='?' for t,x in rs.values()): raise ValueError('unsupported relocation in '+name)
        if rs and (any(o%4 for o in rs) or a%4 or size%4): raise ValueError('unaligned relocation in '+name)
        printable=b and b[-1]==0 and all(32<=c<127 or c in (9,10,13) for c in b[:-1]) and 0 not in b[:-1]
        if not rs and printable and size>1:
            out.append('char %s[] = "%s";'%(name,c_string(b[:-1])));return
        if size%4==0 and a%4==0 and (rs or size>=4):
            items=[]
            for o in range(0,size,4):
                if o in rs:
                    t,add=rs[o];refs.add(t)
                    x=('&'+t) if t.endswith('_meta') else t    # a metaobject pointer variable: its address
                    items.append('(void *)%s'%x if not add else '(void *)((char *)%s + %d)'%(x,add))
                else:
                    w=int.from_bytes(b[o:o+4],'big')
                    items.append('0' if not w else '(void *)0x%X'%w)
            out.append('void *%s[%d] = {%s};'%(name,size//4,', '.join(items)));return
        if rs: raise ValueError('relocation in byte object '+name)
        out.append('unsigned char %s[%d] = {%s};'%(name,size,', '.join('0x%02X'%c for c in b)))

def main():
    apply='--apply' in sys.argv
    only=None
    for i,x in enumerate(sys.argv):
        if x=='--only': only=set(sys.argv[i+1].split(','))
    fns=json.load(open('build/GDJEB2/analysis/reg/allfns.json'))
    funcs,data,byaddr=metasrc.load_symbols()
    fstart=[f[0] for f in funcs];faddr={n:a for a,s,n in funcs}
    users=collections.defaultdict(list)
    for a,s,n in funcs:
        if n in fns:
            p=pool_base(fns[n])
            if p and p in data and data[p][0]=='.data': users[p].append((a,s,n))
    print('pools',len(users))
    relocs=load_data_relocs()
    classes={re.sub(r'@lbl_([0-9A-F]{8})$',r'_\1',k):v for k,v in json.load(open('build/GDJEB2/analysis/meta/classes.json')).items()}
    layouts=json.load(open(HERE/'layouts.json'))
    metasrc.SYMDATA=data
    metasrc.ORIG=hwdiff.original_objects()
    eti=metasrc.eti_entries(data);eti_fns={f for f,x in eti}
    results=[]
    for p,us in sorted(users.items()):
        if only and p not in only: continue
        try: results.append(build(p,sorted(us),fns,funcs,data,relocs,classes,layouts,eti,eti_fns))
        except (Skip,asmlift.Unliftable,metasrc.Untranslatable,ValueError) as e: print('skip',p,type(e).__name__,e)
    for r in results: print('ok' if not r['err'] else 'FAILED',r['pool'],r['err'] or '')
    if apply: apply_units([r for r in results if not r['err']],data)

class Skip(Exception): pass

def unit_rows():
    rows=[]
    for f,kind in (('generated_units.txt','generated'),('meta_units.txt','meta')):
        for l in open(CONFIG/f):
            q=l.rstrip('\n').split('\t')
            if len(q)>=3: rows.append((int(q[1],16),int(q[2],16),q[0],set(x for x in (q[3] if len(q)>3 else '-').split(',') if x!='-'),kind))
    rows.sort()
    return rows

def pooled_tables(c,fn,p,fns):
    """The field tables a pooled fieldInit passes: {table: offset}, and the field count."""
    calls,stores,frame=asmlift.run(asmlift.collapse_releases(fns[fn]))
    tables={};n=None
    for t,args,stack,ns,f1,wr in calls:
        if t=='meta_appendFields':
            if args[1][0]!='a' or args[1][1]!=p or args[2][0]!='c': raise Skip('appendFields of '+fn)
            n=args[2][1];tables['fieldTypes']=args[1][2]
        if t=='meta_setupFields':
            for k,x in zip(('fieldNames','fieldStorage','fieldOffsets'),args[1:4]):
                if x[0]!='a' or x[1]!=p: raise Skip('setupFields of '+fn)
                tables[k]=x[2]
    if len(tables)!=4: raise Skip('tables of '+fn)
    return tables,n

def build(p,us,fns,funcs,data,relocs,classes,layouts,eti,eti_fns):
    base=data[p][1]
    asmlift.NONSMALL.clear()   # per unit: only its own functions' addressing decides declarations
    rows=unit_rows()
    fstart=[f[0] for f in funcs]
    def fend(a):
        i=bisect.bisect_right(fstart,a)
        return funcs[i][0] if i<len(funcs) else a
    lo=min(a for a,s,n in us);hi=max(fend(a) for a,s,n in us)
    while True:
        ov=[r for r in rows if r[0]<hi and r[1]>lo]
        nlo=min([lo]+[r[0] for r in ov]);nhi=max([hi]+[r[1] for r in ov])
        if (nlo,nhi)==(lo,hi): break
        lo,hi=nlo,nhi
    inrange=[(a,s,n) for a,s,n in funcs if lo<=a<hi]
    ov=[r for r in rows if r[0]<hi and r[1]>lo]
    def row_of(a):
        for r in ov:
            if r[0]<=a<r[1]: return r
        return None
    # pieces in address order: the units, and the pooled fieldInits from original assembly (lifted)
    pieces=[];new={};pool={};seen=set()
    for a,s,n in inrange:
        r=row_of(a)
        if r:
            if r[2] not in seen:
                seen.add(r[2]);pieces.append(('unit',r[0],r[2],r[3],Path('src',r[2]).read_text()))
            continue
        if (HERE/'pieces'/(n+'.cpp')).exists():
            # written by hand (tools/alchemymeta/pieces)
            pieces.append(('hand',a,n,{'eh'} if a in eti_fns else set()));continue
        if not n.endswith('_fieldInit') or pool_base(fns[n])!=p:
            # a separate function replacing a class's inherited fields (field setup without tables)
            m=re.match(r'lwz r3, (\w+)_meta@sda21\(r0\)$',fns[n][5] if len(fns[n])>5 else '')
            if m and any(x=='bl fn_800658F8' for x in fns[n]) and not any('meta_appendFields' in x for x in fns[n]):
                pieces.append(('lift',a,n,{'eh'} if a in eti_fns else set(),m[1]));continue
            raise Skip('original assembly in range: '+n)
        c=n[:-len('_fieldInit')]
        tables,cnt=pooled_tables(c,n,p,fns)
        for k,off in tables.items():
            new['%s_%s'%(c,k)]=(base+off,cnt*4);pool[(p,off)]='%s_%s'%(c,k)
        pieces.append(('lift',a,n,{'eh'} if a in eti_fns else set(),c))
    if not new: raise Skip('nothing to lift')
    syms=resymbol(data,new)
    # the unit's data: from the pool's start to the end of the last table
    dhi=max([a+s for a,s in new.values()]+[base+data[p][2]])
    # objects hand-written pieces refer to by offset
    for pc in pieces:
        if pc[0]=='hand':
            for m in re.finditer(r'@POOL\((0x[0-9A-Fa-f]+)\)',(HERE/'pieces'/(pc[2]+'.cpp')).read_text()):
                at=base+int(m[1],16)
                obj=[(a,s) for nm,(sec,a,s) in syms.items() if sec=='.data' and a<=at<a+s]
                if not obj: raise Skip('no object at pool offset '+m[1])
                dhi=max(dhi,obj[0][0]+obj[0][1])
    objs=sorted((a,s,nm) for nm,(sec,a,s) in syms.items() if sec=='.data' and base<=a<dhi)
    if not objs or objs[0][0]!=base: raise Skip('no object at the pool start')
    if objs[-1][0]+objs[-1][1]<dhi: raise Skip('data ends inside an object')
    dhi=objs[-1][0]+objs[-1][1]
    dp=segment([(nm,a,s) for a,s,nm in objs],relocs)
    for (n1,a1,s1,k1),(n2,a2,s2,k2) in zip(dp,dp[1:]):
        gap=a2-(a1+s1)
        if gap<0 or gap>3 or any(rd(a1+s1,gap)): raise Skip('gap after %s'%n1)
    defined={nm for nm,a,s,k in dp}
    defs,refs=data_source([(nm,a,s) for nm,a,s,k in dp],relocs,defined)
    funcset={n for a,s,n in funcs}
    def ext_decl(r):
        if r in funcset: return 'void %s();'%r
        # declared as the units declare it, so small objects keep their small-data addressing
        if r.endswith('_meta'): return 'extern Meta::igMetaObject *%s;'%r
        sec,_,z=data.get(r,(None,None,0))
        small=sec in ('.sdata','.sbss','.sdata2','.sbss2') and z and r not in asmlift.NONSMALL
        return 'extern %schar %s[%s];'%('const ' if sec=='.sdata2' else '',r,z if small else '')
    ext=[ext_decl(r) for r in sorted(refs)]
    # the pool's other objects, by offset, for lifted code addressing them
    for nm,a,s,k in dp: pool.setdefault((p,a-base),nm)
    # small read-only strings: a lifted function passing one defines it (the unit owns it in .sdata2)
    asmlift.STRINGS={}
    asmlift.USED_STRINGS=set()
    for nm,(sec,a,s) in data.items():
        if sec=='.sdata2' and 0<s<=8:
            b=rd(a,s)
            if b[-1]==0 and all(32<=c<127 for c in b[:-1]): asmlift.STRINGS[nm]=b[:-1].decode()
    # lifted pieces' source
    texts=[]
    for pc in pieces:
        if pc[0]=='unit': texts.append((pc[1],pc[3],pc[4],re.sub(r'\W','_',Path(pc[2]).stem)));continue
        if pc[0]=='hand':
            _,a,n,tags=pc
            src=(HERE/'pieces'/(n+'.cpp')).read_text()
            def pname(m):
                k=(p,int(m[1],16))
                if k not in pool: raise Skip('no pool object at %s'%m[1])
                return pool[k]
            src=re.sub(r'@POOL\((0x[0-9A-Fa-f]+)\)',pname,src)
            texts.append((a,None,[(src,tags|set(e)) for e in ((),('speed',),('lmw',),('speed','lmw'))],n));continue
        _,a,n,tags,c=pc
        block=[(a,dict((x[2],x[1]) for x in funcs)[n],n,'fieldInit')]
        variants=[]
        for lf,lg in ((False,False),(False,True),(True,False)):
            text,decls=asmlift.lift_fieldinit(c,fns[n],pool,name=n,locals_first=lf,local_groups=lg)
            for extra in ((),('speed',),('lmw',),('speed','lmw')):
                src,fl=metasrc.class_file(c,block,{n:text},{n:{}},{n:decls},classes,layouts,syms,{n:tags|set(extra)})
                if (src,fl) not in variants: variants.append((src,fl))
        texts.append((a,None,variants,n))
    names=[n for a,s,n in inrange]
    expect=sum(1 for f,x in eti if lo<=f<hi)
    # A lifted piece's speed/lmw setting is unknown: when its function differs, its next setting is tried.
    piece_of={}
    for i,pc in enumerate(pieces):
        if pc[0] in ('lift','hand'): piece_of[pc[2]]=i
    err=None
    global DEFINED
    DEFINED=defined
    for mod_nosdata in (False,True,'sdata1','sdata1ro'):
        choice=[0 if x[1] is None else None for x in texts]
        while True:
            unit,flags=module_text(texts,choice,defined,ext,defs,mod_nosdata)
            strs=sorted((data[n][1],data[n][2],n) for n in asmlift.USED_STRINGS)
            err=check_module(unit,flags,names,base,dhi,relocs,expect,strs)
            if not err:
                return dict(pool=p,unit=unit,flags=flags,new=new,pieces=dp,data=(base,dhi),text=(lo,hi),strings=strs,
                            units=[x[2] for x in pieces if x[0]=='unit'],err=None,cls=None,
                            name=module_name(pieces,classes))
            m=re.match(r'code differs (\w+)',err)
            i=piece_of.get(m[1]) if m else None
            if i is None or choice[i]>=len(texts[i][2])-1: break
            choice[i]+=1
    return dict(pool=p,err=err,unit=unit)

def module_name(pieces,classes):
    # named after its first class
    for pc in pieces:
        n=pc[2] if pc[0]=='lift' else Path(pc[2]).stem
        k=re.sub(r'_\d+$','',n.rsplit('/',1)[-1])
        k=re.sub(r'_(fieldInit|fields)$','',k)
        if k in classes: return k
    return 'unknown%08X'%pieces[0][1]

def module_text(texts,choice,defined,ext,defs,nosdata):
    incl=[];bodies=[];eh=False
    for (a,tags,body,nm),ch in zip(texts,choice):
        if tags is None: body,tags=body[ch]
        tags=set(tags)
        eh|=('eh' in tags)
    names=set()
    for (a,tags,body,nm),ch in zip(texts,choice):
        if tags is None: body,tags=body[ch]
        tags=set(tags)
        lines=[]
        for l in body.split('\n'):
            if l.startswith('#include'):
                if l not in incl: incl.append(l)
                continue
            if any(re.fullmatch(r'extern char %s\[\d*\];'%re.escape(d),l.strip()) for d in defined): continue
            lines.append(l)
        pr=[]
        if 'speed' in tags: pr.append('#pragma optimize_for_size off')
        if 'lmw' in tags: pr.append('#pragma use_lmw_stmw on')
        if eh and 'eh' not in tags: pr.append('#pragma exceptions off')
        txt='\n'.join(lines).strip('\n')
        # each piece in its own namespace (the pieces' local types would collide), named after its file
        ns=nm if nm not in names else '%s_%08X'%(nm,a);names.add(ns)
        txt='namespace %s {\n%s\n}'%(ns,txt)
        if pr: txt='#pragma push\n%s\n%s\n#pragma pop'%('\n'.join(pr),txt)
        bodies.append(txt)
    unit=('// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.\n'+
          '\n'.join(incl)+'\n\n// The unit\'s data.\nextern "C" {\n'+''.join(x+'\n' for x in ext)+'\n'.join(defs)+'\n}\n\n'+
          '\n\n'.join(bodies)+'\n')
    flags=({'eh'} if eh else set())|({'nosdata1'} if nosdata=='sdata1' else {'nosdata1','rostr'} if nosdata=='sdata1ro' else {'nosdata'} if nosdata else set())
    return unit,flags

def resymbol(data,new):
    """The data symbols with the new tables: a symbol covering a table ends at its start (its remainder after
    the table becomes lbl_<address>), and symbols starting inside a table are dropped."""
    syms=dict(data)
    for nm,(a,s) in sorted(new.items(),key=lambda x:x[1]):
        for k,(sec,b,z) in list(syms.items()):
            if sec!='.data' or k==nm: continue
            if b<a<b+z:
                syms[k]=(sec,b,a-b)
                if b+z>a+s: syms['lbl_%08X'%(a+s)]=(sec,a+s,b+z-(a+s))
            elif a<=b<a+s:
                del syms[k]
                if b+z>a+s: syms['lbl_%08X'%(a+s)]=(sec,a+s,b+z-(a+s))
        syms[nm]=('.data',a,s)
    return syms

def check_module(unit,flags,names,lo,hi,relocs,expect,strs=()):
    d=Path(tempfile.mkdtemp());c=d/'a.cpp';c.write_text(unit);o=d/'a.o'
    cmd=compiler.command('eh' in flags,('sdata1ro' if 'rostr' in flags else 'sdata1') if 'nosdata1' in flags else 'nosdata' in flags,False,False)
    r=subprocess.run(cmd+['-c',str(c),'-o',str(o)],capture_output=True,text=True)
    if r.returncode:
        if DEBUG: print(r.stdout[-2500:])
        return 'compile: '+' / '.join(l.strip() for l in r.stdout.splitlines() if re.match(r'#\s+\d+:',l) or 'Error' in l)[:200]
    secs,rels,syms=elf.parse(o)
    order=[s['name'] for s in sorted(syms,key=lambda s:s['value']) if s['type']==2 and s['section']=='.text' and s['binding']!=2]
    if order!=names: return 'order: %s'%[x for x in order if x not in names][:3] if set(order)!=set(names) else 'order'
    # the original names the pool's first object; this unit addresses its .data
    pool_names=set(DEFINED)
    def norm(x): return [re.sub(r'\b(%s)(?=@)'%'|'.join(map(re.escape,pool_names)),'POOL',l) for l in x] if pool_names and x else x
    for fn in names:
        a=norm(hwdiff.disassemble(o,fn));b=norm(hwdiff.disassemble(metasrc.ORIG[fn],fn))
        if a!=b:
            if DEBUG:
                import difflib;print('--- '+fn);print('\n'.join(list(difflib.unified_diff(b,a,'orig','mine',lineterm='',n=1))[:40]))
            return 'code differs '+fn
    for n in ('.sbss','.bss','.rodata','.sdata'):
        if n in secs and secs[n]['size']: return 'emits %s'%n
    # the unit's own small strings: one contiguous run in .sdata2, as in the executable
    s2=secs.get('.sdata2');s2size=s2['size'] if s2 else 0
    if strs:
        lo2=strs[0][0];hi2=strs[-1][0]+strs[-1][1]
        if s2size!=hi2-lo2 or s2['data']!=rd(lo2,hi2-lo2): return '.sdata2 strings differ'
    elif s2size: return 'emits .sdata2'
    dsec=secs.get('.data')
    if not dsec or dsec['size']!=hi-lo: return '.data size %s, expected %d'%(dsec and dsec['size'],hi-lo)
    raw=dsec['data'];want=rd(lo,hi-lo)
    mine={x['offset']:(x['symbol']['name'],x['addend']) for x in rels if x['section']=='.data'}
    local={s['value']:s['name'] for s in syms if s['section']=='.data' and s['name'] and not s['name'].startswith('...')}
    covered=set(k+i for k in mine for i in range(4))
    for off in range(hi-lo):
        if lo+off in relocs:
            t,add=relocs[lo+off];m=mine.get(off)
            if not m: return '.data relocation missing at %08X'%(lo+off)
            name,madd=m
            if name.startswith('...data'): name=local.get(madd,name);madd=0
            if (name,madd)!=(t,add): return '.data relocation at %08X: %s+%d, expected %s+%d'%(lo+off,name,madd,t,add)
        elif off not in covered and raw[off]!=want[off]: return '.data byte at %08X'%(lo+off)
    for off in mine:
        if lo+off not in relocs: return 'extra .data relocation at %08X'%(lo+off)
    weak={s['name'] for s in syms if s['type']==2 and s['binding']==2}
    if any(x['section']=='extab' and x['symbol']['name'] in weak for x in rels): return 'extab keeps a weak copy'
    neti=sum(1 for x in rels if x['section']=='extabindex' and x['offset']%12==0 and x['symbol']['name'] in names)
    if neti!=expect: return 'extabindex %d, expected %d'%(neti,expect)
    return None

def apply_units(results,data):
    funcs,_,_=metasrc.load_symbols();fstart=[f[0] for f in funcs]
    symlines=open(CONFIG/'symbols.txt').read().split('\n')
    splits=(CONFIG/'splits.txt').read_text().rstrip('\n').split('\n\n')
    rows=[l.rstrip('\n').split('\t') for l in open(CONFIG/'meta_units.txt') if l.strip()]
    grows=[l.rstrip('\n').split('\t') for l in open(CONFIG/'generated_units.txt') if l.strip()]
    for r in results:
        # the units a module takes in go
        gone=set(r['units'])
        rows=[x for x in rows if x[0] not in gone];grows=[x for x in grows if x[0] not in gone]
        splits=[b for b in splits if b.split('\n')[0][:-1] not in gone]
        for u in gone: Path('src',u).unlink()
    used={r[0].lower() for r in rows}
    for r in results:
        lo,hi=r['data'];t0,t1=r['text']
        # symbols: the data symbols starting in the unit's range are replaced by its pieces
        keep=[];first=None
        for i,l in enumerate(symlines):
            m=re.match(r'(\S+) = \.data:0x([0-9A-F]+);',l)
            if m and lo<=int(m[2],16)<hi:
                if first is None: first=len(keep)
                continue
            keep.append(l)
        new=['%s = .data:0x%08X; // type:object size:0x%X%s'%(n,a,s,' data:string' if k=='string' else '')
             for n,a,s,k in r['pieces']]
        symlines=keep[:first]+new+keep[first:]
        # the unit's file and split
        # one class's field setup, or a unit with several classes' registration code (named after its first)
        rel='Meta/%s_%s.cpp'%(r['name'],'fields' if not r['units'] else 'module')
        if metasrc.ALCHEMY_LO<=t0<metasrc.ALCHEMY_HI: rel='Alchemy/src/'+rel
        k=2
        while rel.lower() in used: rel=re.sub(r'(_\d+)?\.cpp$','_%d.cpp'%k,rel);k+=1
        used.add(rel.lower())
        Path('src',rel).parent.mkdir(parents=True,exist_ok=True)
        Path('src',rel).write_text(r['unit'])
        end=t1   # the module's range ends at the next function after its last one
        rows.append([rel,'%08X'%t0,'%08X'%end,','.join(sorted(r['flags'])) or '-'])
        block=[rel+':']
        eh=metasrc.eh_ranges(t0,end,data)
        if eh:
            (xa,xb),(ia,ib)=eh
            block.append('\textab       start:0x%08X end:0x%08X'%(xa,xb))
            block.append('\textabindex  start:0x%08X end:0x%08X'%(ia,ib))
        block.append('\t.text       start:0x%08X end:0x%08X'%(t0,end))
        block.append('\t.data       start:0x%08X end:0x%08X'%(lo,hi))
        if r.get('strings'):
            s=r['strings'];block.append('\t.sdata2     start:0x%08X end:0x%08X'%(s[0][0],s[-1][0]+s[-1][1]))
        def text_start(b):
            m=re.search(r'\.text\s+start:0x([0-9A-F]+)',b)
            return int(m[1],16) if m else None
        j=next((j for j,b in enumerate(splits) if text_start(b) is not None and text_start(b)>t0),len(splits))
        splits.insert(j,'\n'.join(block))
        print('applied',rel,'%08X..%08X'%(t0,end),'data %08X..%08X'%(lo,hi))
    (CONFIG/'symbols.txt').write_text('\n'.join(symlines))
    (CONFIG/'splits.txt').write_text('\n\n'.join(splits)+'\n')
    rows.sort(key=lambda r:r[1])
    (CONFIG/'meta_units.txt').write_text(''.join('\t'.join(r)+'\n' for r in rows))
    (CONFIG/'generated_units.txt').write_text(''.join('\t'.join(x)+'\n' for x in grows))

if __name__=='__main__':
    main()
