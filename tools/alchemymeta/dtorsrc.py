"""Readable source for deleting destructors of Alchemy classes.

A class's out-of-line destructor `X *dtor(X *self, short flags)` is, in the original code:
- `if (self)`: the class's vtable is stored, its own members are released in reverse order (references
  through fn_80066E1C, strings to their string pool), then each base level in turn (behind a `this` check,
  as an inline base destructor): its vtable stored, its members released;
- `if (flags > 0) fn_80066DFC(self)` (the object is freed), and self is returned.

This tool reads those levels and members from the instructions and writes the destructor with the top
level in the function and the base levels as a chain of structs with inline destructors, called once:

    self->__vtable = igGroup_vtable;
    self->_childList.~igObjectRefMember();
    self->igNodeObject::~igNodeObject();
    if (flags > 0) fn_80066DFC(self);

Member names come from the class layouts (layouts.json). Each file is compiled and compared with the
original (instructions, exception-index entries, no data); with --apply it is listed in meta_units.txt and
given its split. Run after a normal build and funcindex.py.

usage: /opt/homebrew/bin/python3 tools/alchemymeta/dtorsrc.py [--apply] [--only fn,...] [--debug]"""
import bisect,json,re,subprocess,sys,tempfile
from pathlib import Path
HERE=Path(__file__).resolve().parent
sys.path.insert(0,str(HERE));sys.path.insert(0,str(HERE.parent/'unknowngen'));sys.path.insert(0,str(HERE.parent))
from paths import CONFIG
import compiler,elf,hwdiff,metasrc

DEBUG='--debug' in sys.argv
RELEASE='internalRelease__Q33Gap4Core21igStringPoolContainerFPCQ33Gap4Core16igStringPoolItem'
KIND_TYPE={'ref':'igObjectRefMember','string':'igStringMember','stringcall':'igStringMemberLookup'}

class Skip(Exception): pass

def candidates(fns,report):
    out=[]
    for u in report['units']:
        for f in u.get('functions',[]):
            n=f['name']
            if f.get('fuzzy_match_percent',0)>=100 or n not in fns: continue
            v=fns[n]
            if any(x.startswith('mr. r3') for x in v[:8]) and any('fn_80066DFC' in x for x in v) and any(x.startswith('extsh.') for x in v):
                out.append((int(f['metadata']['virtual_address']),int(f['size']),n))
    return sorted(out)

def parse(insns):
    """[(vtable, [(offset, kind)])], top level first."""
    self_r=None;flags_r=None;R={}
    levels=[];cur=None;member=None
    i=0
    for ins in insns:
        op,_,rest=ins.partition(' ');a=[x.strip() for x in rest.split(',')] if rest else []
        if op=='mr.' and a[1]=='r3': self_r=a[0];continue
        if op=='mr' and a[1]=='r4' and flags_r is None: flags_r=a[0];continue
        if self_r is None: continue
        if op=='lis':
            m=re.fullmatch(r'(\w+)@ha',a[1]);R[a[0]]=('ha',m[1]) if m else None;continue
        if op=='addi':
            m=re.fullmatch(r'(\w+)@l',a[2])
            if m and R.get(a[1])==('ha',m[1]): R[a[0]]=('a',m[1]);continue
            if a[0]=='r1': continue
            R[a[0]]=None;continue
        if op=='stw' and a[1]=='0x0(%s)'%self_r:
            v=R.get(a[0])
            if not v or v[0]!='a': raise Skip('vtable store')
            cur=(v[1],[]);levels.append(cur);continue
        if op=='addic.' and a[1]==self_r:
            member=int(a[2],16);continue
        if op=='bl':
            t=a[0]
            if t in ('fn_80066E1C',RELEASE,'fn_801ACC5C'):
                if member is None or cur is None: raise Skip('release outside a member')
                k={'fn_80066E1C':'ref',RELEASE:'string','fn_801ACC5C':'stringcall'}[t]
                if cur[1] and cur[1][-1][0]==member:
                    if not (cur[1][-1][1]=='stringcall' and k=='string'): raise Skip('member kinds')
                    continue
                cur[1].append((member,k));continue
            if t=='fn_80066DFC' or t.startswith(('_savegpr','_restgpr')): continue
            raise Skip('call '+t)
        if op=='extsh.':
            if a[1]!=flags_r: raise Skip('flags')
            continue
        if op in ('cmplwi','beq','bne','ble','lwz','subi','stw','clrlwi.','subic.','mr','mtlr','blr','li','mflr','stwu'): continue
        raise Skip('instruction '+op)
    if not levels: raise Skip('no level')
    for vt,ms in levels:
        if [o for o,k in ms]!=sorted((o for o,k in ms),reverse=True): raise Skip('member order')
    return levels

def class_of(vt,classes):
    return vt[:-len('_vtable')] if vt.endswith('_vtable') and vt[:-len('_vtable')] in classes else None

def source(fn,levels,classes,layouts,size):
    top=levels[0];bases=levels[1:]
    names={};structs=[];decls=set()
    def sname(vt):
        k=class_of(vt,classes)
        return (k+'Object') if k else 'Level_'+vt.replace('lbl_','')
    # base-most level first; offsets must grow toward the top level
    chain=list(reversed(levels))
    lo=4;prev=None;used=set()
    bounds=[]
    for vt,ms in chain:
        if ms and min(o for o,k in ms)<lo: raise Skip('member order across levels')
        if ms: lo=max(o for o,k in ms)+4
    out=['// %s: the deleting destructor of %s. Written by tools/alchemymeta/dtorsrc.py.'%(fn,class_of(top[0],classes) or top[0]),
         '#include <meta/register.h>','']
    vts=sorted({vt for vt,ms in levels})
    for vt in vts:
        k=class_of(vt,classes)
        if k: out.append('META_DECLARE(%s)'%k)
        else: decls.add('extern char %s[];'%vt)
    decls.add('void fn_80066DFC(void *object);   // frees an object')
    out.append('extern "C" {');out+=sorted(decls);out.append('}');out.append('')
    pos=0;parent=None;mnames={}
    for idx,(vt,ms) in enumerate(chain):
        nm=sname(vt)
        if nm in used: nm+='_%d'%idx
        used.add(nm);names[vt]=nm
        k=class_of(vt,classes)
        s=['struct %s%s {'%(nm,' : '+parent if parent else '')]
        if parent is None: s.append('    void *__vtable;');pos=4
        for o,kind in sorted(ms):
            if o>pos: s.append('    char unknown%02X[%d];'%(pos,o-pos))
            mn,mt=metasrc.member_name(k,o,layouts) if k else (None,None)
            mn=mn if mn and mn not in mnames.values() else 'unknown%02X'%o
            mnames[(vt,o)]=mn
            s.append('    %s %s;'%(KIND_TYPE[kind],mn));pos=o+4
        if idx==len(chain)-1 and size>pos: s.append('    char unknown%02X[%d];'%(pos,size-pos));pos=size
        if idx<len(chain)-1: s.append('    inline ~%s() { __vtable = %s; }'%(nm,vt))
        s.append('};')
        structs.append('\n'.join(s));parent=nm
    out+=structs
    T=names[top[0]]
    body=['    if (self) {','        self->__vtable = %s;'%top[0]]
    for o,kind in top[1]: body.append('        self->%s.~%s();'%(mnames[(top[0],o)],KIND_TYPE[kind]))
    if bases: body.append('        self->%s::~%s();'%(names[bases[0][0]],names[bases[0][0]]))
    body.append('        if (flags > 0) fn_80066DFC(self);')
    body.append('    }')
    body.append('    return self;')
    out.append('')
    out.append('extern "C" %s *%s(%s *self, short flags)\n{\n%s\n}'%(T,fn,T,'\n'.join(body)))
    return '\n'.join(out)+'\n'

def main():
    apply='--apply' in sys.argv
    only=None
    for i,x in enumerate(sys.argv):
        if x=='--only': only=set(sys.argv[i+1].split(','))
    fns=json.load(open('build/GDJEB2/analysis/reg/allfns.json'))
    report=json.load(open('build/GDJEB2/report.json'))
    funcs,data,byaddr=metasrc.load_symbols()
    fstart=[f[0] for f in funcs]
    classes={re.sub(r'@lbl_([0-9A-F]{8})$',r'_\1',k):v for k,v in json.load(open('build/GDJEB2/analysis/meta/classes.json')).items()}
    layouts=json.load(open(HERE/'layouts.json'))
    metasrc.ORIG=hwdiff.original_objects()
    eti=metasrc.eti_entries(data);eti_fns={f for f,x in eti}
    ok=[]
    for a,s,n in candidates(fns,report):
        if only and n not in only: continue
        try:
            levels=parse(fns[n])
            k=class_of(levels[0][0],classes)
            size=classes.get(k,{}).get('size',0) if k else 0
            text=source(n,levels,classes,layouts,size)
        except Skip as e:
            print('skip',n,e);continue
        i=bisect.bisect_right(fstart,a);end=funcs[i][0]
        expect=sum(1 for f,x in eti if a<=f<end)
        err=None
        for tags in ({'eh'} if a in eti_fns else set(),):
            for extra in ((),('speed',),('lmw',),('speed','lmw')):
                fl=tags|set(extra)
                err=metasrc.verify(text,fl,[n],expect)
                if not err: break
            if not err: break
        if err: print('FAILED',n,err);continue
        print('ok',n);ok.append((a,end,n,k,text,fl))
    print('exact',len(ok))
    if apply: apply_files(ok)

def apply_files(ok):
    rows=[l.rstrip('\n').split('\t') for l in open(CONFIG/'meta_units.txt') if l.strip()]
    used={r[0].lower() for r in rows}
    splits=(CONFIG/'splits.txt').read_text().rstrip('\n').split('\n\n')
    funcs,data,byaddr=metasrc.load_symbols()
    def text_start(b):
        m=re.search(r'\.text\s+start:0x([0-9A-F]+)',b)
        return int(m[1],16) if m else None
    for a,end,n,k,text,fl in ok:
        rel='Meta/%s_destructor.cpp'%(k or n)
        if metasrc.ALCHEMY_LO<=a<metasrc.ALCHEMY_HI: rel='Alchemy/src/'+rel
        j=2
        while rel.lower() in used: rel=re.sub(r'(_\d+)?\.cpp$','_%d.cpp'%j,rel);j+=1
        used.add(rel.lower())
        Path('src',rel).parent.mkdir(parents=True,exist_ok=True);Path('src',rel).write_text(text)
        rows.append([rel,'%08X'%a,'%08X'%end,','.join(sorted(fl)) or '-'])
        block=[rel+':']
        eh=metasrc.eh_ranges(a,end,data)
        if eh:
            (xa,xb),(ia,ib)=eh
            block.append('\textab       start:0x%08X end:0x%08X'%(xa,xb))
            block.append('\textabindex  start:0x%08X end:0x%08X'%(ia,ib))
        block.append('\t.text       start:0x%08X end:0x%08X'%(a,end))
        p=next((i for i,b in enumerate(splits) if text_start(b) is not None and text_start(b)>a),len(splits))
        splits.insert(p,'\n'.join(block))
        print('applied',rel)
    rows.sort(key=lambda r:r[1])
    (CONFIG/'meta_units.txt').write_text(''.join('\t'.join(r)+'\n' for r in rows))
    (CONFIG/'splits.txt').write_text('\n\n'.join(splits)+'\n')

if __name__=='__main__':
    main()
