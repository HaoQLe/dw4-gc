"""Name each class's registration symbols: data (metaobject global, vtable, name string), the remaining
registration functions and the registration API.

Evidence, from build/GDJEB2/analysis/meta/classes.json (extract.py) and the original instructions:
- `<C>_meta`: the metaobject global passed to fn_80066204 by `<C>_register` (r4).
- `<C>_className`: the name string passed by `<C>_register` (r8); renamed only when its text is the class name.
- `<C>_vtable`: the last vtable `<C>_vtableRead` stores into its temporary instance (the class's own; the
  earlier ones are its bases'). Skipped when several classes end with the same vtable.
- `<C>_registerNow`: `fn_80066188(<C>_register)`, called by `<C>_getMeta` while the class is not registered.
- `<C>_metaObject`: returns `<C>_meta`, first creating an unregistered metaobject (fn_80029E64) if it is null.
  Field initializers use it for a field's target class.
- `<C>_create(pool)`: `<C>_registerNow()`, then an instance from `<C>_meta` in pool (fn_8006546C).
Registration API:
- `meta_registerClass` (fn_80066204): fills a metaobject from the class's parent, name, size and callbacks.
- `meta_registerNow` (fn_80066188): calls a register function, then each callback in the list it returns.
- `meta_newMetaObject` (fn_80029E64): creates a metaobject in a pool.
- `meta_createInstance` (fn_8006546C): creates an instance of a metaobject's class in a pool (or through its
  creation callback at +0x3C).

Functions are found by shape in the current split objects (build/GDJEB2/analysis/reg/allfns.json, written by
funcindex.py). Only names of the form fn_/lbl_XXXXXXXX are replaced, everywhere they
appear as whole tokens (symbols.txt, sources, headers, generator state). Names do not change code; the build
checksum must not change. Idempotent.

usage: /opt/homebrew/bin/python3 tools/alchemymeta/regnames.py [--dry-run]"""
import collections,json,re,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'unknowngen'))
from paths import CONFIG
import dol

API={'fn_80066204':'meta_registerClass','fn_80066188':'meta_registerNow','fn_80029E64':'meta_newMetaObject',
     'fn_8006546C':'meta_createInstance'}

def main():
    dry='--dry-run' in sys.argv
    C=json.load(open('build/GDJEB2/analysis/meta/classes.json'))
    fns=json.load(open('build/GDJEB2/analysis/reg/allfns.json'))
    sym={};addr={}
    for l in open(CONFIG/'symbols.txt'):
        m=re.match(r'(\S+) = \.\w+:0x([0-9A-F]+);',l)
        if m: sym[m[1]]=int(m[2],16)
    mapping={}
    def want(old,new):
        if not re.fullmatch(r'(fn|lbl)_[0-9A-F]{8}',old) or old not in sym: return
        if mapping.get(old,new)!=new: raise SystemExit('two names for %s: %s, %s'%(old,mapping[old],new))
        mapping[old]=new
    for old,new in API.items(): want(old,new)
    meta2cls={}
    for c,v in C.items():
        if v.get('meta'): meta2cls.setdefault(v['meta'],[]).append(c)
    own=collections.defaultdict(list)
    for c,v in C.items():
        if v.get('vtables'): own[v['vtables'][-1]].append(c)
    # A class registered twice has a second key 'name@meta'; its symbols are named 'name_XXXXXXXX_...'.
    ident=lambda c: re.sub(r'@lbl_([0-9A-F]{8})$',r'_\1',c)
    for c,v in C.items():
        if len(meta2cls.get(v.get('meta'),[]))==1: want(v['meta'],ident(c)+'_meta')
        reg=c+'_register'
        if reg in fns:
            m=re.findall(r'addi r8, r\d+, (lbl_[0-9A-F]{8})@l',' '.join(fns[reg]))
            if len(m)==1 and m[0] in sym and dol.cstr(sym[m[0]])==c: want(m[0],ident(c)+'_className')
        vt=v.get('vtables')
        if vt and len(own[vt[-1]])==1: want(vt[-1],ident(c)+'_vtable')
    w2c={}
    for n,ls in fns.items():
        t='\n'.join(ls)
        m=re.search(r'lis r3, (\w+)_register@ha',t)
        if len(ls)<=10 and m and m[1] in C and 'bl fn_80066188' in t: want(n,ident(m[1])+'_registerNow');w2c[n]=ident(m[1])
    for n,ls in fns.items():
        t='\n'.join(ls)
        if 'bl fn_80029E64' in t and len(ls)<=24:
            ms={x for x in re.findall(r'(lbl_[0-9A-F]{8})@ha',t) if len(meta2cls.get(x,[]))==1}
            if len(ms)==1: want(n,ident(meta2cls[ms.pop()][0])+'_metaObject')
        if 'bl fn_8006546C' in t and len(ls)<=16:
            ws=[x for x in re.findall(r'bl (\w+)',t) if x in w2c]
            if len(ws)==1: want(n,w2c[ws[0]]+'_create')
    taken=set(sym)-set(mapping)
    clash=[n for n in mapping.values() if n in taken]
    if clash: raise SystemExit('names already used: %s'%clash[:5])
    dup=[n for n,k in collections.Counter(mapping.values()).items() if k>1]
    if dup: raise SystemExit('duplicate new names: %s'%dup[:5])
    kinds=collections.Counter(n.rsplit('_',1)[-1] if not n.startswith('meta_') else 'api' for n in mapping.values())
    print(len(mapping),'renames',dict(kinds))
    if dry: return
    files=[CONFIG/'symbols.txt']
    files+=[p for d in ('src','include') for p in Path(d).rglob('*') if p.suffix in ('.c','.cpp','.h','.hpp','.inc')]
    files+=list(Path('tools/unknowngen').glob('*.json'))+[Path('tools/unknowngen/texttempl.py'),Path('tools/unknowngen/gen.py'),Path('tools/alchemymeta/layouts.json')]
    files+=[p for p in Path('build/GDJEB2/analysis/unknowngen').rglob('*.json')] if Path('build/GDJEB2/analysis/unknowngen').exists() else []
    pat=re.compile(r'\b(?:fn|lbl)_[0-9A-F]{8}\b')
    changed=0
    for p in files:
        s=p.read_text(encoding='latin1')
        t=pat.sub(lambda m:mapping.get(m[0],m[0]),s)
        if t!=s: p.write_text(t,encoding='latin1');changed+=1
    print('files changed',changed)

if __name__=='__main__':
    main()
