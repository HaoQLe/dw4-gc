"""Generate C++ for relocation-templated boilerplate functions.
usage: gen.py lo hi out.cpp [--calls]
Writes one candidate file for every unrecovered function in [lo,hi) that a template recognizes.
Candidates are unverified until fastcmp.py confirms them."""
import json,re,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
from paths import CONFIG,RELINDEX,REPORT,EXCLUDE
idx=json.load(open(RELINDEX))
_etb_refs=idx.pop('@etb_refs',[])
syminfo={}
for l in open(CONFIG/'symbols.txt'):
  m=re.match(r'(\S+) = (\.\w+):0x([0-9A-F]+); // type:(\w+)(?: size:0x([0-9A-F]+))?',l)
  if m: syminfo[m[1]]=(m[2],int(m[3],16),m[4],int(m[5] or '0',16))
# Address-named symbols that generated units may define.
GENERATED_PREFIXES=('fn_','dtor_')
protos={}   # symbol -> declaration line
def fn(sym,decl):
  d=decl%sym
  if sym in protos and protos[sym]!=d: raise ValueError('proto conflict %s: %s vs %s'%(sym,protos[sym],d))
  protos[sym]=d
def ptrvar(sym):
  fn(sym,'extern void *%s;')
def U(rel): # unique symbols in order
  out=[]
  for o,t,s,a in rel:
    if s not in out: out.append(s)
  return out
T={}
def F1(name,rel):
  g=U(rel)[0];ptrvar(g)
  return 'void *%s(){return %s;}'%(name,g)
ARGFAM={'F6'}
def F2(name,rel):
  c=U(rel)[0]
  m=re.match(r'(.*?)%s\((.*)\);$'%re.escape(c),protos.get(c,''))
  if m and famof(c) not in ARGFAM and m[2] in ('','void *'):
    # Wrap the target with its own recovered signature.
    ret,args=m[1],m[2]
    fn(name,'%s%%s(%s);'%(ret,args))
    call='%s(%s)'%(c,'object' if args else '')
    return '%s%s(%s){return %s;}'%(ret,name,'void *object' if args else '',call)
  if famof(c) in ARGFAM:
    fn(c,'void *%s(void *);')
    return 'void *%s(void *object){return %s(object);}'%(name,c)
  fn(c,'void *%s();')
  return 'void *%s(){return %s();}'%(name,c)
def F3(name,rel):
  meta,reg=U(rel)[:2];ptrvar(meta);fn(reg,'void %s();')
  return 'void *%s(){\n if(!%s || !(reinterpret_cast<unsigned int *>(%s)[0x24/4]&4)) %s();\n return %s;\n}'%(name,meta,meta,reg,meta)
def F6(name,rel):
  a,g,c=U(rel)[:3];fn(a,'void %s();');ptrvar(g);fn(c,'void *%s(void *,void *);');fn(name,'void *%s(void *);')
  return 'void *%s(void *object){\n %s();\n return %s(%s,object);\n}'%(name,a,c,g)
def F7(name,rel):
  u=U(rel);g,h,f1,f2=u[0],u[1],u[2],u[3];ptrvar(g);ptrvar(h);fn(f1,'void *%s(void *);');fn(f2,'void *%s(void *);')
  return 'void *%s(){\n if(!%s) %s=%s(%s(%s));\n return %s;\n}'%(name,g,g,f2,f1,h,g)
def F8(name,rel):
  u=U(rel)
  g,h,alloc,meta,create,cur,attach,free_,commit=u[0],u[1],u[2],u[3],u[4],u[5],u[6],u[7],u[8]
  ptrvar(g);ptrvar(h);ptrvar(meta);fn(alloc,'void *%s(void *);');fn(create,'void *%s(void *,void *);');fn(cur,'void *%s();');fn(attach,'void %s(void *,void *);');fn(free_,'void %s(void *);');fn(commit,'void %s(void *);')
  return '''void %(n)s(){
 if(!%(g)s){
  void *object=(%(g)s=%(create)s(%(meta)s,%(alloc)s(%(h)s)));
  if(object){
   %(attach)s(%(cur)s(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(%(g)s));
   reinterpret_cast<short *>(%(g)s)[0x12/2]=reinterpret_cast<int *>(%(cur)s())[0xC/4]-1;
   %(commit)s(%(g)s);
  }
 }
}'''%dict(n=name,g=g,h=h,alloc=alloc,meta=meta,create=create,cur=cur,attach=attach,commit=commit)

import struct as _st
import callshape
def _simple(addr,size):
  b=callshape.rd(addr,size)
  for i in range(0,size,4):
    w=_st.unpack('>I',b[i:i+4])[0];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31
    if op in (14,15,18): continue
    if op==37 and rt==1 and ra==1: continue          # stwu r1
    if op==36 and ra==1: continue                    # stw x,(r1)
    if op==32 and ra==1 and rt in (0,31,30): continue # lwz r0/r31,(r1)
    if w in (0x7C0802A6,0x7C0803A6,0x4E800020): continue  # mflr, mtlr, blr
    return False
  return True
def expr(e):
  k=e[0]
  if k=='const': return str(e[1])
  if k=='sda':
    sym=e[1]
    if sym in protos and protos[sym].startswith('extern void *'): return '(int)&%s'%sym
    info=syminfo.get(sym)
    n=max(info[3],1) if info else 4
    if n==4 and not e[2]:
      fn(sym,'extern void *%s;');return '(int)&%s'%sym
    fn(sym,'extern char %%s[%d];'%n)
    return '(int)%s'%sym if not e[2] else '(int)(%s+%d)'%(sym,e[2])
  if k=='addr':
    sym=e[1];info=syminfo.get(sym)
    if info and info[2]=='function':
      if sym not in protos: fn(sym,'void %s();')
      return '(int)%s'%sym
    if sym in protos and protos[sym].startswith('extern void *'):
      return '(int)&%s'%sym if not e[2] else '(int)((char *)&%s+%d)'%(sym,e[2])
    if sym not in protos: fn(sym,'extern char %s[];')
    return '(int)%s'%sym if not e[2] else '(int)(%s+%d)'%(sym,e[2])
  raise ValueError('expr %r'%(e,))
def CALLS(name,rel):
  addr=syminfo[name][1];size=idx[name]['size']
  if not _simple(addr,size): raise ValueError('not simple')
  calls=callshape.analyze(addr,size,[tuple(x) for x in rel])
  if not calls: raise ValueError('no calls')
  lines=[]
  for target,regs,stack in calls:
    args=[]
    for r in range(3,11):
      if r in regs and regs[r] is not None: args.append(regs[r])
      else: break
    else:
      for off in sorted(o for o in stack if o>=8):
        if stack[off] is None: raise ValueError('stack unknown')
        args.append(stack[off])
    if len(args)!=len([r for r in range(3,11) if regs.get(r) is not None])+(len([o for o in stack if o>=8]) if len(args)>=8 else 0):
      raise ValueError('arg gap')
    ex=[expr(a) for a in args]
    fn(target,'void %%s(%s);'%','.join(['int']*len(args)))
    lines.append(' %s(%s);'%(target,','.join(ex)))
  # A constant loaded into r3 after the last call is the return value.
  b=callshape.rd(addr,size);ws=[_st.unpack('>I',b[i:i+4])[0] for i in range(0,size,4)]
  last=max(i for i,w in enumerate(ws) if (w>>26)==18 and w&1)
  ret=[callshape.s16(w&0xFFFF) for w in ws[last+1:] if (w>>26)==14 and ((w>>16)&31)==0 and ((w>>21)&31)==3]
  if ret:
    fn(name,'int %s();')
    return 'int %s(){\n%s\n return %d;\n}'%(name,'\n'.join(lines),ret[-1])
  fn(name,'void %s();')
  return 'void %s(){\n%s\n}'%(name,'\n'.join(lines))


def VT(name,rel):
  addr=syminfo[name][1];size=idx[name]['size']
  b=callshape.rd(addr,size);relat={o&~3:(t,sy,a) for o,t,sy,a in rel}
  regs={};events=[];frame=None;saves31=False;strofs=None;ctor=None
  for i in range(0,size,4):
    w=_st.unpack('>I',b[i:i+4])[0];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;imm=w&0xFFFF;r=relat.get(i)
    if op==37 and rt==1 and ra==1: frame=0x10000-imm;continue
    if op==15: regs[rt]=('ha',r[1]) if r else None;continue
    if op==14:
      if ra==1: regs[rt]=('stack',callshape.s16(imm))
      elif r and r[0]!=109 and regs.get(ra) and regs[ra][0]=='ha': regs[rt]=('addr',r[1])
      else: regs[rt]=None
      continue
    if op==13 and ra==1: strofs=callshape.s16(imm)-8;continue  # addic. rX,r1,imm
    if op==36 and ra==1:
      o=callshape.s16(imm)
      if rt==31 and o==frame-4: saves31=True;continue
      if o==frame+4: continue
      if o!=8: raise ValueError('store off %x'%o)
      v=regs.get(rt)
      if not v or v[0]!='addr': raise ValueError('store val')
      events.append(('st',v[1]));continue
    if op==31 and ((w>>1)&0x3FF)==23: events.append(('rd',));continue
    if op==18 and w&1:
      if r[1].startswith('internalRelease'): continue
      if r[1]=='_savegpr_29' or r[1].startswith('_'): raise ValueError('savegpr')
      if ctor or events: raise ValueError('second call')
      if regs.get(3)!=('stack',8): raise ValueError('ctor arg')
      ctor=r[1];continue
  if frame is None or ('rd',) not in events: raise ValueError('no read')
  k=events.index(('rd',));pre=[e[1] for e in events[:k]];post=[e[1] for e in events[k+1:]]
  if post and strofs is None: pass
  osize=frame-8-(8 if saves31 else 0)
  cls='UnknownGenObject%s'%name[3:]
  for x in pre+post: fn(x,'extern char %s[];')
  lines=['struct %s {'%cls,' void *unknown00;']
  used=4
  if strofs is not None:
    if strofs>4: lines.append(' char unknown04[%d];'%(strofs-4))
    lines.append(' UnknownGenString unknown%02X;'%strofs);used=strofs+4
  if osize>used: lines.append(' char unknown%02X[%d];'%(used,osize-used))
  if post: lines.append(' inline ~%s(){%s}'%(cls,''.join('unknown00=%s;'%x for x in post)))
  lines.append('};')
  body=['void *%s(){'%name,' %s object;'%cls]
  if ctor: fn(ctor,'void %s(void *);');body.append(' %s(&object);'%ctor)
  body+=[' object.unknown00=%s;'%x for x in pre]
  body.append(' return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);\n}')
  fn(name,'void *%s();')
  PRE.append('\n'.join(lines))
  return '\n'.join(body)
PRE=[]
def _isvt(name):
  addr=syminfo[name][1];size=idx[name]['size']
  if size>=200: return False
  b=callshape.rd(addr,size);ws=[_st.unpack('>I',b[i:i+4])[0] for i in range(0,size,4)]
  return any((w>>26)==32 and (w&0xFFFF)==0x394 for w in ws) and any((w>>26)==31 and ((w>>1)&0x3FF)==23 for w in ws)


import texttempl
def _masked(n):
  a=syminfo[n][1];sz=idx[n]['size'];b=bytearray(callshape.rd(a,sz))
  for o,t,sy,ad in idx[n]['rel']:
    if t in (4,5,6): b[o:o+2]=b'\0\0'
    elif t==109: w=_st.unpack('>I',b[o&~3:(o&~3)+4])[0]&0xFFE00000;b[o&~3:(o&~3)+4]=_st.pack('>I',w)
    elif t==10: w=_st.unpack('>I',b[o&~3:(o&~3)+4])[0]&0xFC000003;b[o&~3:(o&~3)+4]=_st.pack('>I',w)
  return bytes(b),tuple(t for o,t,sy,ad in idx[n]['rel'])
TT={}
FAMREP={'F1':'fn_80021D70','F2':'fn_80021D50','F3':'fn_80021BF4','F6':'fn_8002216C','F7':'fn_80022BB0','F8':'fn_80021D78'}
FM={}
for _f,_r in FAMREP.items(): FM[_masked(_r)]=_f
_famcache={}
def famof(n):
  if n not in _famcache:
    _famcache[n]=FM.get(_masked(n)) if n in idx and n in syminfo else None
  return _famcache[n]
for rep in texttempl.T: TT[_masked(rep)]=rep
def TEXT(name,rel):
  rep=TT[_masked(name)];t=texttempl.T[rep];u=U(rel)
  if len(u)!=len(t['decl']): raise ValueError('symcount')
  for sym,dc in zip(u,t['decl']):
    if dc=='SDA':
      info=syminfo.get(sym);fn(sym,'extern char %%s[%d];'%max(info[3] if info else 4,1))
    elif dc: fn(sym,dc)
  fn(name,t['sig'])
  return _fmt(t['src'],name,u)
def _fmt(src,name,u):
  src=src.replace('{name}',name)
  for i in range(len(u)-1,-1,-1): src=src.replace('{%d}'%i,u[i])
  return src

def LEAF(name,rel):
  """Two-instruction leaf functions: constant, field load/store/address, or an empty body."""
  if rel: raise ValueError('leaf with relocations')
  addr=syminfo[name][1];size=idx[name]['size'];b=callshape.rd(addr,size)
  ws=[_st.unpack('>I',b[i:i+4])[0] for i in range(0,size,4)]
  if ws==[0x4E800020]:
    fn(name,'void %s();');return 'void %s(){}'%name
  if size!=8 or ws[1]!=0x4E800020: raise ValueError('not leaf')
  w=ws[0];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;d=callshape.s16(w&0xFFFF)
  if op==14 and ra==0 and rt==3:
    fn(name,'int %s();');return 'int %s(){return %d;}'%(name,d)
  if op==14 and ra==3 and rt==3:
    fn(name,'void *%s(void *);');return 'void *%s(void *object){return reinterpret_cast<char *>(object)+%d;}'%(name,d)
  loads={32:'int',34:'unsigned char',40:'unsigned short',42:'short'}
  if op in loads and ra==3 and rt==3:
    t=loads[op];fn(name,'%s %%s(void *);'%t)
    return '%s %s(void *object){return *reinterpret_cast<%s *>(reinterpret_cast<char *>(object)+%d);}'%(t,name,t,d)
  stores={36:'int',38:'unsigned char',44:'unsigned short'}
  if op in stores and ra==3 and rt==4:
    t=stores[op];fn(name,'void %%s(void *,%s);'%t)
    return 'void %s(void *object,%s value){*reinterpret_cast<%s *>(reinterpret_cast<char *>(object)+%d)=value;}'%(name,t,t,d)
  raise ValueError('leaf shape')
def _isleaf(n):
  return not idx[n]['rel'] and idx[n]['size'] in (4,8)

_IMMOPS=(7,8,10,11,12,13,14,15,24,25,26,27,28,29)+tuple(range(32,56))
def _imasked(n):
  b,types=_masked(n);out=bytearray(b)
  for i in range(0,len(b),4):
    w=_st.unpack('>I',b[i:i+4])[0]
    if (w>>26) in _IMMOPS: out[i+2:i+4]=b'\0\0'
  return bytes(out),types
IK={}
for rep in texttempl.IT: IK[_imasked(rep)]=rep
def ITEXT(name,rel):
  rep=IK[_imasked(name)];t=texttempl.IT[rep];u=U(rel)
  if len(u)!=len(t['decl']): raise ValueError('symcount')
  for sym,dc in zip(u,t['decl']):
    if dc=='SDA':
      info=syminfo.get(sym);fn(sym,'extern char %%s[%d];'%max(info[3] if info else 4,1))
    elif dc: fn(sym,dc)
  fn(name,t['sig'])
  b=callshape.rd(syminfo[name][1],idx[name]['size'])
  src=_fmt(t['src'],name,u)
  def imm(m):
    k=int(m[1]);v=callshape.s16(_st.unpack('>I',b[4*k:4*k+4])[0]&0xFFFF)
    return ('0x%X'%v) if v>=0 else '-0x%X'%-v
  return re.sub(r'\{@(\d+)\}',imm,src)

TEMPL={'F1':F1,'F2':F2,'F3':F3,'F6':F6,'F7':F7,'F8':F8,'CALLS':CALLS,'VT':VT,'TEXT':TEXT,'LEAF':LEAF,'ITEXT':ITEXT}
HEADER_NAME='unknownGen.h'
HEADER='#ifndef UNKNOWNGEN_H\n#define UNKNOWNGEN_H\n#include <igCore/igStringPoolItem.h>\n// Synthetic views shared by recovered metaobject boilerplate; meanings are unknown.\nnamespace Gap { namespace Core { class igArkCore; extern igArkCore *_arkCore; } }\nstruct UnknownGenString {\n const char *value;\n inline ~UnknownGenString(){if(value) reinterpret_cast<const Gap::Core::igStringPoolItem *>(value-8)->release();}\n};\n'+texttempl.PRELUDE+'\nstruct UnknownGenValue { void *unknown00; unsigned int unknown04; };\nstruct UnknownGenHolder { UnknownGenValue *unknown00; };\nextern "C" void fn_80066E1C(void *);\ninline void unknownGenDrop(UnknownGenValue *value){--value->unknown04;if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);}\n#endif\n'
_rep=json.load(open(REPORT));_done=set()
for _u in _rep['units']:
  if 'unknownGen' in _u['name']: continue
  if _u.get('metadata',{}).get('complete') or not _u['name'].split('/')[-1].startswith('auto_'):
    for _f in _u.get('functions',[]): _done.add(_f['name'])
_bad=set(json.load(open(EXCLUDE)))
# Functions referenced from .ctors must stay static initializers, not plain functions.
_bad|={n for n,(sec,a,t,sz) in syminfo.items() if t=='function' and a in callshape.ctors()}
# A .text label at or inside a function boundary (e.g. __OSSystemCallVectorStart) hangs the linker
# once the function moves into a recompiled unit, so such functions keep their original object.
_labels={a for n,(sec,a,t,sz) in syminfo.items() if sec=='.text' and t=='label'}
_bad|={n for n,(sec,a,t,sz) in syminfo.items() if t=='function' and any(a<=x<=a+sz for x in _labels)}
# Functions whose exception-table entry is referenced from other data keep their original object.
_etb_funcs={callshape.extab_owners().get(int(x[5:],16)) for x in _etb_refs}
_bad|={n for n,(sec,a,t,sz) in syminfo.items() if t=='function' and a in _etb_funcs}
SIG={'F1':'void *%s();','F2':'void *%s();','F3':'void *%s();','F7':'void *%s();','F6':'void *%s(void *);','F8':'void %s();'}
def select(lo,hi):
  ns=sorted([n for n in idx if n.startswith(GENERATED_PREFIXES) and n in syminfo and lo<=syminfo[n][1]<hi],key=lambda n:syminfo[n][1])
  return [n for n in ns if n not in _done and n not in _bad]
def prepass(names):
  g={}
  for n in names:
    if _isleaf(n):
      saved=dict(protos);protos.clear()
      try:
        LEAF(n,idx[n]['rel']);g[n]=protos[n]
      except ValueError: pass
      protos.clear();protos.update(saved)
  for n in names:
    f=famof(n)
    t=U(idx[n]['rel'])[0] if idx[n]['rel'] else None
    m=re.match(r'(.*?)%s\((.*)\);$'%re.escape(t),g.get(t,'')) if f=='F2' else None
    if f=='F2' and m and m[2] in ('','void *') and famof(t) not in ARGFAM: g[n]='%s%s(%s);'%(m[1],n,m[2])
    elif f=='F2' and famof(t) in ARGFAM: g[n]='void *%s(void *);'%n
    elif f in SIG: g[n]=SIG[f]%n
  return g
def kind(n,calls):
  f=famof(n)
  if f in TEMPL: return f
  if _masked(n) in TT: return 'TEXT'
  if _imasked(n) in IK: return 'ITEXT'
  if _isleaf(n): return 'LEAF'
  if _isvt(n): return 'VT'
  if calls: return 'CALLS'
  return None
def _pointer_globals(names,seed,calls):
  out={}
  for n in names:
    f=kind(n,calls)
    if f in (None,'CALLS'): continue
    protos.clear();protos.update(seed);del PRE[:]
    try: TEMPL[f](n,idx[n]['rel'])
    except Exception: continue
    out.update({k:v for k,v in protos.items() if v.startswith('extern void *')})
  return out
def generate(names,seed,calls=True,header=False):
  # First pass finds globals some template needs as pointers, so address-only uses agree.
  pointers=_pointer_globals(names,seed,calls)
  protos.clear();protos.update(seed);protos.update(pointers);del PRE[:]
  bodies=[];cov=0;skipped=[];done=[]
  for n in names:
    f=kind(n,calls)
    if not f: continue
    saved=dict(protos);pl=len(PRE)
    try: bodies.append(TEMPL[f](n,idx[n]['rel']));cov+=idx[n]['size'];done.append(n)
    except Exception as ex: skipped.append((n,str(ex)));protos.clear();protos.update(saved);del PRE[pl:]
  text='\n'.join(PRE)+'\n'+'\n'.join(bodies)
  used=set(re.findall(r'[A-Za-z_][A-Za-z0-9_]*',text))
  own=set(done)
  decls=[d for s_,d in sorted(protos.items()) if s_ in used and s_ not in own and s_!='fn_80066E1C']
  decls+=[protos[n] for n in done if n in protos and n in used and re.search(r'\b%s\b'%n,text.replace(n+'(','',1)) ]
  inc=('#include <%s>\n'%HEADER_NAME) if header else HEADER
  src=inc+'#pragma push\n#pragma auto_inline off\nextern "C" {\n'+'\n'.join(decls)+'\n}\n'+('\n'.join(PRE)+'\n' if PRE else '')+'extern "C" {\n'+'\n'.join(bodies)+'\n}\n#pragma pop\n'
  return src,done,cov,skipped
def _profile_keys():
  """Register each template representative's masked shape as compiled without small data."""
  import subprocess,tempfile,compiler,elf
  from paths import ANALYSIS
  cache=ANALYSIS/'profilekeys.json'
  reps=[(r,'F',f) for f,r in FAMREP.items()]+[(r,'T',r) for r in texttempl.T]+[(r,'I',r) for r in texttempl.IT]
  if cache.exists():
    data=json.load(open(cache))
  else:
    data=[]
    for rep,kind_,val in reps:
      src,done,cov,sk=generate([rep],prepass([rep]))
      tmp=Path(tempfile.mkdtemp(prefix='dw4-unknowngen-'));c=tmp/'r.cpp';o=tmp/'r.o';c.write_text(src)
      subprocess.run(compiler.command(False,True)+['-c',str(c),'-o',str(o)],check=True,capture_output=True)
      secs,rels,syms=elf.parse(o)
      f=next(x for x in syms if x['name']==rep and x['type']==2)
      rl=sorted((x['offset']-f['value'],x['type']) for x in rels if x['section']=='.text' and f['value']<=x['offset']<f['value']+f['size'])
      b=bytearray(secs['.text']['data'][f['value']:f['value']+f['size']])
      for off,t in rl:
        w=off&~3
        if t in (4,5,6): b[off:off+2]=b'\0\0'
        elif t==109: b[w:w+4]=_st.pack('>I',_st.unpack('>I',bytes(b[w:w+4]))[0]&0xFFE00000)
        elif t==10: b[w:w+4]=_st.pack('>I',_st.unpack('>I',bytes(b[w:w+4]))[0]&0xFC000003)
      data.append([kind_,val,bytes(b).hex(),[t for off,t in rl]])
    cache.parent.mkdir(parents=True,exist_ok=True);json.dump(data,open(cache,'w'))
  for kind_,val,hx,types in data:
    key=(bytes.fromhex(hx),tuple(types))
    if kind_=='F': FM.setdefault(key,val)
    elif kind_=='T': TT.setdefault(key,val)
    else:
      b=bytearray(key[0])
      for i in range(0,len(b),4):
        if (_st.unpack('>I',bytes(b[i:i+4]))[0]>>26) in _IMMOPS: b[i+2:i+4]=b'\0\0'
      IK.setdefault((bytes(b),key[1]),val)
  _famcache.clear()
_profile_keys()
if __name__=='__main__' and len(sys.argv)>3 and sys.argv[1]!='--runs':
  lo,hi,out=int(sys.argv[1],16),int(sys.argv[2],16),sys.argv[3]
  names=select(lo,hi)
  src,done,cov,skipped=generate(names,prepass(names),'--calls' in sys.argv)
  Path(out).write_text(src)
  print('functions',len(names),'generated',len(done),'bytes',cov,'skipped',skipped[:5])
