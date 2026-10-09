"""Extract Alchemy enum registrations statically from the original DOL.

An enum is registered once, on first use, by fn_800635C8(name, value names, values, count); the result is
kept in a global. This tool reads every call and writes build/GDJEB2/analysis/meta/enums.json:
  {enum: {getter, global, values: [[name, value]]}}
and, for enum-typed reflected fields whose setup calls an enum getter, the field's enum
(build/GDJEB2/analysis/meta/enum_fields.json: {class.field: enum}).

usage (repository root, after tools/alchemymeta/extract.py): /opt/homebrew/bin/python3 tools/alchemymeta/enums.py"""
import json,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
from dol import *

REGISTER='fn_800635C8'
OUT=BUILD/'analysis'/'meta'
enums={};skipped=[]
for n,v in idx.items():
  if not isinstance(v,dict) or n not in sym or not any(t==REGISTER for o,ty,t,a in v['rel']): continue
  cs=calls(sym[n],v['size'],v['rel'])
  if cs is None: skipped.append(n);continue
  for c,regs,stack in cs:
    if c!=REGISTER: continue
    name,names,values,count=address(regs.get(3)),address(regs.get(4)),address(regs.get(5)),regs.get(6)
    if None in (name,names,values) or not count or count[0]!='const': skipped.append(n);continue
    # The global holding the registered enum: the getter's other data reference.
    globals_=sorted({t for o,ty,t,a in v['rel'] if t in sym and t.startswith('lbl_') and sym[t] not in (name,names,values)})
    e=cstr(name)
    if e in enums: e='%s@%s'%(e,n)
    enums[e]=dict(getter=n,globals=globals_,values=[[cstr(word(names+4*k)),word(values+4*k)-(1<<32 if word(values+4*k)>>31 else 0)] for k in range(count[1])])
getter={v['getter']:k for k,v in enums.items()}
# Owner: the class whose attributed functions call the getter, when that is a single class.
attr={}
for l in open(CONFIG/'alchemy_class_functions.txt'):
  if not l.startswith('#'): attr[l.rstrip('\n').split('\t')[3]]=l.split('\t')[1]
callers={}
for n,v in idx.items():
  if isinstance(v,dict) and n in attr:
    for o,ty,t,a in v['rel']:
      if t in getter: callers.setdefault(t,set()).add(attr[n])
for k,v in enums.items():
  c=callers.get(v['getter'],set())
  v['owner']=next(iter(c)) if len(c)==1 else None
# Enum fields: after fetching field k (fn_800658E4 with the field-count base plus k in r4), a field
# initializer stores the enum getter's address into the field (at +0x34). The field's name is entry k of
# the name table passed to fn_800659C0.
classes=json.load(open(OUT/'classes.json'))
INDEXED,PROPS='fn_800658E4','fn_800659C0'
fields={}
for c,v in classes.items():
  fi=v.get('fieldinit')
  if not fi or fi not in idx: continue
  cs=calls(sym[fi],idx[fi]['size'],idx[fi]['rel']) or []
  names=next((address(r.get(4)) for c_,r,st in cs if c_==PROPS),None)
  if names is None: continue
  relat={o&~3:(ty,t) for o,ty,t,a in idx[fi]['rel']}
  code=callshape.rd(sym[fi],idx[fi]['size']);k=None;cur=None
  for i in range(0,len(code),4):
    w=struct.unpack('>I',code[i:i+4])[0];r=relat.get(i)
    if (w>>26)==14 and (w>>21)&31==4 and not r: k=callshape.s16(w&0xFFFF)
    elif (w>>26)==31 and (w>>1)&0x3FF==444 and (w>>16)&31==4: k=0
    if (w>>26)==18 and w&1 and r and r[1]==INDEXED: cur=k
    if r and r[0]==4 and r[1] in getter and cur is not None:
      fields['%s.%s'%(c,cstr(word(names+4*cur)))]=getter[r[1]]
json.dump(enums,open(OUT/'enums.json','w'),indent=1,sort_keys=True)
json.dump(fields,open(OUT/'enum_fields.json','w'),indent=1,sort_keys=True)
print('owned',sum(1 for v in enums.values() if v['owner']),'enum fields linked',len(fields),'of',sum(1 for v in classes.values() for f in v['fields'] if f['type']=='igEnumMetaField'))
print('enums',len(enums),'values',sum(len(v['values']) for v in enums.values()),'skipped',len(skipped),skipped[:5])
