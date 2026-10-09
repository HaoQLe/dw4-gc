"""Write class layout headers from the extracted Alchemy metadata (tools/alchemymeta/extract.py).

Each registered class becomes a struct in namespace Meta (the original Gap:: module of most classes is
unknown), deriving from its registered parent, with its reflected fields at their registered offsets.
Bytes no field covers are unknownXX arrays. The vtable pointer is an explicit member of the root class,
so the layout does not depend on the compiler's vtable placement.

Writes include/meta/<class>.h for every class, include/meta/meta.h including them all,
tools/alchemymeta/layouts.json (each class's header, parent and reflected members by offset, for the
source generator), and
build/GDJEB2/analysis/meta/check.cpp, which asserts every size and field offset at compile time.

usage: /opt/homebrew/bin/python3 tools/alchemymeta/headers.py"""
import json,re,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'unknowngen'))
from paths import BUILD

META=BUILD/'analysis'/'meta'
OUTDIR=Path('include')/'meta'
classes=json.load(open(META/'classes.json'))
classes={k:v for k,v in classes.items() if '@' not in k}   # later copies of a twice-registered class

# Field types with a fixed C++ form: (declaration format, size). A {} stands for the field name.
SCALAR={
  'igIntMetaField':('int {}',4),'igUnsignedIntMetaField':('unsigned int {}',4),
  'igShortMetaField':('short {}',2),'igUnsignedShortMetaField':('unsigned short {}',2),
  'igCharMetaField':('signed char {}',1),'igUnsignedCharMetaField':('unsigned char {}',1),
  'igBoolMetaField':('bool {}',1),'igFloatMetaField':('float {}',4),'igDoubleMetaField':('double {}',8),
  'igLongMetaField':('long long {}',8),'igUnsignedLongMetaField':('unsigned long long {}',8),
  'igEnumMetaField':('int {}',4),'igStringMetaField':('const char *{}',4),
  'igRawRefMetaField':('void *{}',4),'igMemoryRefMetaField':('void *{}',4),
  'igVec2fMetaField':('float {}[2]',8),'igVec3fMetaField':('float {}[3]',12),
  'igVec4fMetaField':('float {}[4]',16),'igMatrix44fMetaField':('float {}[16]',64),
}
# Arrays and structs: the element type, with the count taken from the space up to the next field.
ARRAY={'igFloatArrayMetaField':('float',4),'igIntArrayMetaField':('int',4),'igCharArrayMetaField':('char',1),
  'igShortArrayMetaField':('short',2),'igUnsignedCharArrayMetaField':('unsigned char',1),'igBoolArrayMetaField':('bool',1),
  'igUnsignedShortArrayMetaField':('unsigned short',2),'igVec4fArrayMetaField':('float',4),'igUnsignedIntArrayMetaField':('unsigned int',4),
  'igObjectRefArrayMetaField':('void *',4),'igStructMetaField':('unsigned char',1)}

# Members the metadata does not reflect, established from the code: (offset, name, C type, evidence).
EXTRA={'igObject':[(4,'_refCount','unsigned int','decremented on release; the object is released when its low 23 bits reach 0')]}

def ident(name):
  return re.sub(r'\W','_',name)

# Header file names must differ case-insensitively (beModelCtrlAIMAP and beModelCtrlAIMap both exist).
_files={}
for _k in sorted(classes):
  _f=ident(_k);_n=2
  while _f.lower() in {x.lower() for x in _files.values()}: _f='%s_%d'%(ident(_k),_n);_n+=1
  _files[_k]=_f
def hfile(k): return _files[k]

def order():
  """Classes with every parent first."""
  done=[];seen=set()
  def visit(k):
    if k in seen: return
    seen.add(k)
    p=classes[k]['parent']
    if p in classes: visit(p)
    done.append(k)
  for k in sorted(classes): visit(k)
  return done

LAYOUTS={}
def layout(k):
  """(members, field checks, notes) for class k; members are declaration lines."""
  c=classes[k];p=c['parent'] if c['parent'] in classes else None
  at=classes[p]['size'] if p else 0
  members=[];checks=[];notes=[]
  if not p:
    members.append('void *__vtable;  // 0x00')
    at=4
  fs=sorted(c['fields']+[dict(name=n_,offset=o_,type=None,ctype=t_,why=w_) for o_,n_,t_,w_ in EXTRA.get(k,[])],key=lambda f:f['offset'])
  for i,f in enumerate(fs):
    off=f['offset'];nxt=fs[i+1]['offset'] if i+1<len(fs) else c['size'];t=f['type']
    if off<at:
      notes.append('%s at 0x%X overlaps earlier members; omitted'%(f['name'],off));continue
    if off>at: members.append('unsigned char unknown%02X[%d];'%(at,off-at))
    if t is None:
      decl='%s {}'%f['ctype'];size=4;t='not reflected: %s'%f['why']
    elif t=='igObjectRefMetaField':
      tg=f.get('target');decl=('%s *{}'%ident(tg)) if tg in classes else 'void *{}';size=4
    elif t in SCALAR: decl,size=SCALAR[t]
    elif t in ARRAY:
      el,es=ARRAY[t];n=max((nxt-off)//es,1);decl='%s {}[%d]'%(el,n);size=n*es
      notes.append('%s: %s, count from the space to the next member'%(f['name'],t))
    else:
      decl='unsigned char {}[%d]'%max(nxt-off,1);size=max(nxt-off,1)
      notes.append('%s: %s, size from the space to the next member'%(f['name'],t))
    members.append('%s;  // 0x%02X %s'%(decl.format(ident(f['name'])),off,t));checks.append((ident(f['name']),off))
    # The member's C type as the generator writes accesses (arrays and structs are not accessed).
    ctype=decl.replace(' {}','').replace('{}','') if '[' not in decl else None
    if ctype and t=='igObjectRefMetaField' and f.get('target') in classes: ctype='Meta::%s *'%ident(f['target'])
    if ctype: LAYOUTS.setdefault(k,{})[off]=(ident(f['name']),ctype,f.get('target') if t=='igObjectRefMetaField' else None)
    at=off+size
  if at<c['size']: members.append('unsigned char unknown%02X[%d];'%(at,c['size']-at))
  elif at>c['size']: notes.append('members end at 0x%X beyond the registered size 0x%X'%(at,c['size']))
  return p,members,checks,notes

OUTDIR.mkdir(parents=True,exist_ok=True)
for f in OUTDIR.glob('*.h'): f.unlink()
check=['#include <meta/meta.h>','#define META_CHECK(n,c) typedef char n[(c)?1:-1]','namespace Meta {']
fails=[]
for k in order():
  c=classes[k];p,members,checks,notes=layout(k);n=ident(k)
  if any('beyond' in x for x in notes): fails.append(k)
  refs=sorted({f['target'] for f in c['fields'] if f.get('target') in classes and f['target']!=k})
  vt=c['vtables'][-1] if c['vtables'] else None
  head=['// Generated by tools/alchemymeta/headers.py from the class registration in the original DOL; do not edit.',
    '// Registered by %s (metaobject %s%s), size 0x%X.'%(c['register'],c['meta'],', vtable %s'%vt if vt else '',c['size'])]
  head+=['// Note: %s.'%x for x in notes]
  body=['#ifndef META_%s_H'%hfile(k).upper(),'#define META_%s_H'%hfile(k).upper()]
  if p: body.append('#include <meta/%s.h>'%hfile(p))
  body+=['namespace Meta {']+['struct %s;'%ident(r) for r in refs]
  body+=['struct %s%s {'%(n,' : %s'%ident(p) if p else '')]+[' '+m for m in members]+['};','}','#endif']
  (OUTDIR/(hfile(k)+'.h')).write_text('\n'.join(head+body)+'\n')
  check.append('META_CHECK(size_%s,sizeof(%s)==0x%X);'%(n,n,c['size']))
  for fn,off in checks: check.append('META_CHECK(off_%s_%s,(unsigned long)&reinterpret_cast<%s *>(0)->%s==0x%X);'%(n,fn,n,fn,off))
check.append('}')
(OUTDIR/'meta.h').write_text('// Generated by tools/alchemymeta/headers.py: every class layout recovered from Alchemy metadata.\n#ifndef META_META_H\n#define META_META_H\n'+''.join('#include <meta/%s.h>\n'%hfile(k) for k in sorted(classes))+'#endif\n')
(META/'check.cpp').write_text('\n'.join(check)+'\n')
lay={k:dict(header=hfile(k),ident=ident(k),meta=classes[k]['meta'],parent=classes[k]['parent'] if classes[k]['parent'] in classes else None,
  members={'%d'%o:list(m) for o,m in sorted(LAYOUTS.get(k,{}).items())}) for k in sorted(classes)}
Path('tools/alchemymeta/layouts.json').write_text(json.dumps(lay,indent=0,sort_keys=True)+'\n')
print('headers',len(classes),'layout conflicts',len(fails),fails[:10])
