"""Extract Alchemy class metadata statically from the original DOL.

Every Alchemy class registers a metaobject through fn_80066204 (class name, instance size, parent's
register function, callbacks) and its fields through fn_80065924 (field count and a table of field-type
getters) followed by fn_800659C0 (tables of field names and offsets). This tool reads those calls and
tables and writes build/GDJEB2/analysis/meta/classes.json:
  {class: {register, meta, size, parent, fields: [{name, offset, type}]}}
Function names stay unnamed in symbols.txt; this is evidence only.

usage (repository root, after a normal build and tools/unknowngen/relindex.py):
  /opt/homebrew/bin/python3 tools/alchemymeta/extract.py"""
import json,re,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'unknowngen'))
import callshape
from paths import CONFIG,RELINDEX,BUILD

REG,APPEND,PROPS='fn_80066204','fn_80065924','fn_800659C0'
OUT=BUILD/'analysis'/'meta'/'classes.json'

idx=json.load(open(RELINDEX))
sym={};at={}
for l in open(CONFIG/'symbols.txt'):
  m=re.match(r'(\S+) = (\.\w+):0x([0-9A-F]+);',l)
  if m: sym[m[1]]=int(m[3],16);at[int(m[3],16)]=m[1]
def cstr(a): return (callshape.rd(a,64) or b'').split(b'\0')[0].decode('latin1')
def word(a): return struct.unpack('>I',callshape.rd(a,4))[0]
def address(v):
  """Address of an ('sda'|'addr', symbol, addend) register value."""
  return sym[v[1]]+v[2] if v and v[0] in ('sda','addr') and v[1] in sym else None

def calls(addr,size,rel):
  """Register values at each call of straight-line code (None if the code branches). Tracks constants,
  small-data and @ha/@l addresses (with further offsets), loads of globals, stack stores and moves."""
  relat={o&~3:(t,s,a) for o,t,s,a in rel}
  b=callshape.rd(addr,size);regs={};stack={};out=[]
  for i in range(0,size,4):
    w=struct.unpack('>I',b[i:i+4])[0];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;imm=w&0xFFFF;r=relat.get(i)
    if op==18:
      if not w&1 or not r: return None
      out.append((r[1],dict(regs),dict(stack)));regs={k:v for k,v in regs.items() if k>=14};stack={}
    elif op==15:
      if ra: return None
      regs[rt]=('ha',r[1],r[2]) if r else ('const',imm<<16)
    elif op==14:
      src=regs.get(ra)
      if r and r[0]==109: regs[rt]=('sda',r[1],r[2])
      elif ra==0: regs[rt]=('const',callshape.s16(imm))
      elif ra==1: regs[rt]=('stack',callshape.s16(imm))
      elif src and src[0]=='ha' and r: regs[rt]=('addr',r[1],r[2])
      elif src and src[0]=='const': regs[rt]=('const',src[1]+callshape.s16(imm))
      elif src and src[0] in ('addr','sda') and not r: regs[rt]=(src[0],src[1],src[2]+callshape.s16(imm))
      else: regs[rt]=None
    elif op==36:
      if ra==1: stack[callshape.s16(imm)]=regs.get(rt)
    elif op==31 and ((w>>1)&0x3FF)==444 and rt==((w>>11)&31): regs[ra]=regs.get(rt)
    elif op==32:
      src=regs.get(ra)
      if r and r[0]==109: regs[rt]=('load',r[1],r[2])
      elif not r and src and src[0]=='addr' and not imm and not src[2]: regs[rt]=('load',src[1],0)
      else: regs[rt]=None
  return out

classes={};fieldsets={};skipped=[]
for n,v in idx.items():
  if not isinstance(v,dict) or n not in sym: continue
  targets={t for o,ty,t,a in v['rel']}
  if not targets&{REG,APPEND,PROPS}: continue
  cs=calls(sym[n],v['size'],v['rel'])
  if cs is None: skipped.append(n);continue
  pending=None
  for c,regs,stack in cs:
    if c==REG:
      na=address(regs.get(8));meta=regs.get(4);size=regs.get(9);parent=regs.get(5)
      classes[n]=dict(name=cstr(na) if na else None,meta=meta[1] if meta else None,
        size=size[1] if size and size[0]=='const' else None,parentreg=parent[1] if parent and parent[0]=='addr' else None)
    elif c==APPEND:
      count=regs.get(5);pending=(address(regs.get(4)),count[1] if count and count[0]=='const' else None)
    elif c==PROPS and pending and pending[1] is not None:
      names,offsets,meta=address(regs.get(4)),address(regs.get(6)),regs.get(3)
      if None in (names,offsets,pending[0]) or not meta or meta[0]!='load': skipped.append(n);continue
      fieldsets.setdefault(meta[1],[]).extend(dict(name=cstr(word(names+4*k)),offset=word(offsets+4*k),getter=at.get(word(pending[0]+4*k))) for k in range(pending[1]))

bymeta={c['meta']:fn for fn,c in classes.items() if c['meta']}
def classname(fn):
  """Class registered by fn, or for a field-type getter the class whose metaobject it instantiates."""
  if fn in classes: return classes[fn]['name']
  ms={t for o,ty,t,a in idx.get(fn,{}).get('rel',[]) if t in bymeta}
  return classes[bymeta[ms.pop()]]['name'] if len(ms)==1 else fn
out={}
for fn,c in classes.items():
  out[c['name']]=dict(register=fn,meta=c['meta'],size=c['size'],parent=classname(c['parentreg']) if c['parentreg'] else None,
    fields=[dict(name=f['name'],offset=f['offset'],type=classname(f['getter'])) for f in sorted(fieldsets.get(c['meta'],[]),key=lambda f:f['offset'])])
OUT.parent.mkdir(parents=True,exist_ok=True)
json.dump(out,open(OUT,'w'),indent=1,sort_keys=True)
nf=sum(len(v['fields']) for v in out.values())
print('classes',len(out),'with fields',sum(1 for v in out.values() if v['fields']),'fields',nf,'skipped (branchy)',len(skipped))
