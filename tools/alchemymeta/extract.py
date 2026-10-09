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
COUNT,INDEXED='fn_80065D88','fn_800658E4'
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
      # The field count is the base index of the fields a function appends.
      if r[1]==COUNT: regs[3]=('base',0)
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
      elif src and src[0] in ('addr','sda','base') and not r: regs[rt]=src[:-1]+(src[-1]+callshape.s16(imm),)
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

classes={};fieldsets={};fieldinit={};skipped=[]
for n,v in idx.items():
  if not isinstance(v,dict) or n not in sym: continue
  targets={t for o,ty,t,a in v['rel']}
  if not targets&{REG,APPEND,PROPS}: continue
  cs=calls(sym[n],v['size'],v['rel'])
  if cs is None: skipped.append(n);continue
  pending=None;aux={}
  for j,(c,regs,stack) in enumerate(cs):
    if c==REG:
      na=address(regs.get(8));meta=regs.get(4);size=regs.get(9)
      fnarg=lambda v_:v_[1] if v_ and v_[0]=='addr' and sym.get(v_[1],0) and v_[2]==0 else None
      classes[n]=dict(name=cstr(na) if na else None,meta=meta[1] if meta else None,
        size=size[1] if size and size[0]=='const' else None,parentreg=fnarg(regs.get(5)),
        callbacks=dict(r6=fnarg(regs.get(6)),r7=fnarg(regs.get(7)),r10=fnarg(regs.get(10)),
          **{'sp%X'%k:fnarg(x) for k,x in sorted(stack.items())}),abstract=regs.get(3,(None,None))[1])
    elif c==APPEND:
      count=regs.get(5);pending=(address(regs.get(4)),count[1] if count and count[0]=='const' else None)
    elif c==INDEXED and regs.get(4) and regs[4][0]=='base' and j+1<len(cs):
      # The call after fetching field k sets something on it (for references, the target's metaobject).
      aux.setdefault(regs[4][1],cs[j+1][0])
    elif c==PROPS and pending and pending[1] is not None:
      names,offsets,meta=address(regs.get(4)),address(regs.get(6)),regs.get(3)
      if None in (names,offsets,pending[0]) or not meta or meta[0]!='load': skipped.append(n);continue
      fieldsets.setdefault(meta[1],[]).extend(dict(name=cstr(word(names+4*k)),offset=word(offsets+4*k),getter=at.get(word(pending[0]+4*k)),aux=aux.get(k)) for k in range(pending[1]))
      fieldinit[meta[1]]=n

API={REG,APPEND,PROPS,COUNT,INDEXED}
bymeta={c['meta']:fn for fn,c in classes.items() if c['meta']}
def classname(fn):
  """Class registered by fn, or for a getter the class whose metaobject it reads."""
  if fn in classes: return classes[fn]['name']
  ms={t for o,ty,t,a in idx.get(fn,{}).get('rel',[]) if t in bymeta}
  return classes[bymeta[ms.pop()]]['name'] if len(ms)==1 else None
def vtables(fn):
  """Vtable chain of a class from its r10 callback, base first. The callback constructs a temporary
  instance on the stack (each constructor level stores its vtable at 0x8(r1)) and reads it back with
  lwzx before any branch; the last vtable stored before that read is the class's own."""
  v=idx.get(fn)
  if not v: return []
  relat={o&~3:(t,s_,a) for o,t,s_,a in v['rel']}
  b=callshape.rd(sym[fn],v['size']);regs={};chain=[]
  for i in range(0,v['size'],4):
    w=struct.unpack('>I',b[i:i+4])[0];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;r=relat.get(i)
    if op in (16,18) and not w&1: break
    if op==31 and (w>>1)&0x3FF==23: return chain          # lwzx: the read
    if op==14 and r and r[0]==4 and r[1].startswith('lbl_'): regs[rt]=r[1]
    elif op==36 and ra==1 and (w&0xFFFF)==8 and rt in regs: chain.append(regs[rt])
    elif op==14 or op==15 or op==32: regs.pop(rt,None)
  return []
out={}
for fn,c in classes.items():
  fl=[]
  for f in sorted(fieldsets.get(c['meta'],[]),key=lambda f:f['offset']):
    e=dict(name=f['name'],offset=f['offset'],type=classname(f['getter']) or f['getter'])
    if e['type']=='igObjectRefMetaField' and f['aux'] and f['aux'] not in API and classname(f['aux']): e['target']=classname(f['aux'])
    fl.append(e)
  cb=c['callbacks']
  # A class registered twice (one copy per module) keeps its later copies under a suffix.
  key=c['name'] if c['name'] not in out else '%s@%s'%(c['name'],c['meta'])
  out[key]=dict(register=fn,meta=c['meta'],size=c['size'],parent=classname(c['parentreg']) if c['parentreg'] else None,
    abstract=c['abstract'],callbacks=cb,fieldinit=fieldinit.get(c['meta']),vtables=vtables(cb['r10']) if cb.get('r10') else [],fields=fl)
OUT.parent.mkdir(parents=True,exist_ok=True)
json.dump(out,open(OUT,'w'),indent=1,sort_keys=True)
nf=sum(len(v['fields']) for v in out.values())
refs=[f for v in out.values() for f in v['fields'] if f['type']=='igObjectRefMetaField']
print('classes',len(out),'with fields',sum(1 for v in out.values() if v['fields']),'fields',nf,'skipped (branchy)',len(skipped))
own={v['vtables'][-1]:k for k,v in out.items() if v['vtables']}
# The parent's own vtable appears earlier in the chain (unregistered template levels may sit between).
agree=sum(1 for k,v in out.items() if len(v['vtables'])>1 and out.get(v['parent'],{}).get('vtables') and out[v['parent']]['vtables'][-1] in v['vtables'][:-1])
withp=sum(1 for k,v in out.items() if len(v['vtables'])>1 and out.get(v['parent'],{}).get('vtables'))
print('own vtables',len(own),'distinct of',sum(1 for v in out.values() if v['vtables']),'parent vtable agrees',agree,'of',withp)
print('vtables',sum(1 for v in out.values() if v['vtables']),'reference fields',len(refs),'with target',sum('target' in f for f in refs))
