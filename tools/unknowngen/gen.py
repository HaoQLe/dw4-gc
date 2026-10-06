"""Generate C++ for relocation-templated boilerplate functions.
usage: gen.py lo hi out.cpp [--calls]
Writes one candidate file for every unrecovered function in [lo,hi) that a template recognizes.
Candidates are unverified until fastcmp.py confirms them."""
import json,re,sys,collections
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
  if k=='param': return 'p%d'%e[1]
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
      if sym not in protos: fn(sym,'void %%s(%s);'%','.join(['int']*arity(sym)))
      return '(int)%s'%sym
    if sym in protos and protos[sym].startswith('extern void *'):
      return '(int)&%s'%sym if not e[2] else '(int)((char *)&%s+%d)'%(sym,e[2])
    if sym not in protos: fn(sym,'extern char %s[];')
    return '(int)%s'%sym if not e[2] else '(int)(%s+%d)'%(sym,e[2])
  raise ValueError('expr %r'%(e,))
_explicit={}
def explicit_params(n):
  """Number of argument registers (r3..) the function itself reads before writing, scanning straight-line
  code; implicit forwarding through a call cannot be told apart from no parameter and counts as none."""
  if n in _explicit: return _explicit[n]
  if n not in syminfo or n not in idx: return 0
  b=callshape.rd(syminfo[n][1],idx[n]['size']);written=set();read=set()
  for i in range(0,len(b),4):
    w=_st.unpack('>I',b[i:i+4])[0];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;rb=(w>>11)&31;xo=(w>>1)&0x3FF
    srcs=[];dst=None
    if op==31 and xo==444: srcs=[rt,rb];dst=ra                  # or / mr
    elif op in (14,15,12,13): srcs=[ra] if ra else [];dst=rt      # addi/addis/addic
    elif op in (32,34,40,42): srcs=[ra];dst=rt                    # loads
    elif op in (36,38,44): srcs=[rt,ra]                           # stores
    elif op in (10,11): srcs=[ra]                                 # cmpli/cmpi
    elif op==18 and w&1: written|=set(range(3,13));continue       # call clobbers
    elif op==21: srcs=[rt];dst=ra                                 # rlwinm
    for r_ in srcs:
      if 3<=r_<=10 and r_ not in written: read.add(r_)
    if dst is not None: written.add(dst)
  k=0
  while 3+k in read: k+=1
  _explicit[n]=k
  return k

def _reads_writes(w):
  """(sources, destination) of an instruction, for the straight-line scans below."""
  op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;rb=(w>>11)&31;xo=(w>>1)&0x3FF
  if op==31 and xo==444: return [rt,rb],ra
  if op in (14,15,12,13): return ([ra] if ra else []),rt
  if op in (32,34,40,42): return [ra],rt
  if op in (36,38,44): return [rt,ra],None
  if op in (10,11): return [ra],None
  if op==21: return [rt],ra
  if op==31: return [ra,rb],rt
  return [],None
_dedicated={}
def dedicated_arity(n):
  """Largest number of leading argument registers some caller writes specifically for a call to n
  (written after the previous call and read by nothing else)."""
  if not _dedicated:
    for c in idx:
      if c not in syminfo or not c.startswith(GENERATED_PREFIXES): continue
      b=callshape.rd(syminfo[c][1],idx[c]['size']);relat={o&~3:x for o,*x in idx[c]['rel']}
      fresh={}
      for i in range(0,len(b),4):
        w=_st.unpack('>I',b[i:i+4])[0]
        if (w>>26)==18 and w&1 and i in relat:
          t=relat[i][1];k=0
          while fresh.get(3+k): k+=1
          _dedicated[t]=max(_dedicated.get(t,0),k);fresh={};continue
        if (w>>26) in (16,18,19): fresh={};continue
        srcs,dst=_reads_writes(w)
        for r_ in srcs:
          if r_ in fresh: fresh[r_]=False
        if dst is not None and 3<=dst<=10: fresh[dst]=True
    _dedicated.setdefault('',0)
  return _dedicated.get(n,0)
def arity(n): return max(explicit_params(n),dedicated_arity(n))

_arity={}
def caller_arity(n):
  """Largest argument count any analyzable caller passes to n (0 if none seen)."""
  if not _arity:
    for c in idx:
      if not c.startswith(GENERATED_PREFIXES) or c not in syminfo: continue
      try: calls=callshape.analyze(syminfo[c][1],idx[c]['size'],[tuple(x) for x in idx[c]['rel']])
      except Exception: continue
      for target,regs,stack in calls or []:
        k=0
        while 3+k<=10 and regs.get(3+k) is not None: k+=1
        _arity[target]=max(_arity.get(target,0),k)
    _arity.setdefault('',0)
  return _arity.get(n,0)

def CALLS(name,rel):
  addr=syminfo[name][1];size=idx[name]['size']
  if not _simple(addr,size): raise ValueError('not simple')
  # Callers' argument counts give the parameters; forwarded parameters appear in the calls.
  nparam=arity(name)
  calls=callshape.analyze(addr,size,[tuple(x) for x in rel],{3+i:('param',i) for i in range(nparam)})
  if not calls: raise ValueError('no calls')
  params=','.join('int p%d'%i for i in range(nparam));ptypes=','.join(['int']*nparam)
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
    fn(name,'int %%s(%s);'%ptypes)
    return 'int %s(%s){\n%s\n return %d;\n}'%(name,params,'\n'.join(lines),ret[-1])
  fn(name,'void %%s(%s);'%ptypes)
  return 'void %s(%s){\n%s\n}'%(name,params,'\n'.join(lines))


def VT(name,rel):
  """Temporary instance: base constructor, inline vtable stores, a read at _arkCore+0x394, then inline
  destructors. Each class level restored after the read owns the members released right after its
  vtable store; members are pooled strings or reference pointers, zero-initialized right after their
  owner's constructor vtable store. Levels are emitted as a nested hierarchy so destruction interleaves."""
  addr=syminfo[name][1];size=idx[name]['size']
  b=callshape.rd(addr,size);relat={o&~3:(t,sy,a) for o,t,sy,a in rel}
  regs={};events=[];frame=None;saveoff=None;zeros=[];checks=[];ctor=None;read=False;post=[];outdtor=None
  for i in range(0,size,4):
    w=_st.unpack('>I',b[i:i+4])[0];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;imm=w&0xFFFF;r=relat.get(i)
    if op==37 and rt==1 and ra==1: frame=0x10000-imm;continue
    if op==47 and ra==1: saveoff=callshape.s16(imm);continue      # stmw
    if op==15: regs[rt]=('ha',r[1]) if r else None;continue
    if op==14:
      if ra==1:
        regs[rt]=('stack',callshape.s16(imm))
        if rt not in (1,11) and callshape.s16(imm)>8: checks.append(callshape.s16(imm)-8)   # member address
      elif ra==0 and not r: regs[rt]=('const',callshape.s16(imm))
      elif r and r[0]!=109 and regs.get(ra) and regs[ra][0]=='ha': regs[rt]=('addr',r[1])
      else: regs[rt]=None
      continue
    if op==13 and ra==1: checks.append(callshape.s16(imm)-8);continue   # addic. member null check
    if op==36 and ra==1:
      o=callshape.s16(imm)
      if rt>=14 and o>=frame-4*(32-rt): saveoff=o if saveoff is None else min(saveoff,o);continue
      if o==frame+4: continue
      v=regs.get(rt)
      if o!=8:
        if v==('const',0) and not read: zeros.append(o-8);continue
        raise ValueError('store off %x'%o)
      if not v or v[0]!='addr': raise ValueError('store val')
      (post if read else events).append(('st',v[1]));continue
    if op==31 and ((w>>1)&0x3FF)==23:
      if read: raise ValueError('second read')
      read=True;continue
    if op==18 and w&1:
      t=r[1]
      if t.startswith('internalRelease'): post.append(('rel','UnknownGenString'));continue
      if t=='fn_80066E1C': post.append(('rel','UnknownGenRefMember'));continue
      if t.startswith('_savegpr_'):
        x=regs.get(11);n=int(t.split('_')[-1])
        if not x or x[0]!='stack': raise ValueError('savegpr base')
        saveoff=x[1]-4*(32-n);continue
      if t.startswith('_restgpr_'): continue
      if read and not outdtor and regs.get(3)==('stack',8) and regs.get(4)==('const',-1):
        outdtor=t;continue   # out-of-line destructor (this, -1)
      if ctor or events: raise ValueError('second call')
      if regs.get(3)!=('stack',8): raise ValueError('ctor arg')
      ctor=t;continue
  if frame is None or not read: raise ValueError('no read')
  pre=[e[1] for e in events]
  if outdtor:
    if post: raise ValueError('outdtor with inline stores')
    if saveoff is None: saveoff=frame
    osize=(saveoff-8)&~7
    for x in pre: fn(x,'extern char %s[];')
    fn(outdtor,'void %s(void *,short);')
    cls='UnknownGenObject%s'%name[3:]
    lines=['struct %s {'%cls,' void *unknown00;'];used=4
    for o in sorted(set(zeros)):
      if o>used: lines.append(' char unknown%02X[%d];'%(used,o-used))
      lines.append(' int unknown%02X;'%o);used=o+4
    if osize>used: lines.append(' char unknown%02X[%d];'%(used,osize-used))
    lines.append('};')
    body=['void *%s(){'%name,' %s object;'%cls]
    if ctor: fn(ctor,'void %s(void *);');body.append(' %s(&object);'%ctor)
    for x in pre: body.append(' object.unknown00=%s;'%x)
    body+=[' object.unknown%02X=0;'%o for o in sorted(set(zeros))]
    body.append(' void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);')
    body.append(' %s(&object,-1);\n return result;\n}'%outdtor)
    fn(name,'void *%s();')
    PRE.append('\n'.join(lines))
    return '\n'.join(body)
  rels=[x for x in post if x[0]=='rel']
  zs=sorted(set(zeros)|set(checks),reverse=True)
  if len(rels)!=len(zs): raise ValueError('member count')
  # Owner of each member: the last vtable restored before its release.
  levels=[];owner={};cur=None;k=0
  for x in post:
    if x[0]=='st': cur=x[1];levels.append(cur)
    else:
      if cur is None: raise ValueError('unowned member')
      owner[zs[k]]=(cur,x[1]);k+=1
  if saveoff is None: saveoff=frame
  osize=(saveoff-8)&~7
  for x in pre+levels: fn(x,'extern char %s[];')
  # Base-most level first; members must ascend through the hierarchy.
  order=list(reversed(levels))
  cls=lambda i:'UnknownGenObject%s%s'%(name[3:],'' if i==len(order)-1 else '_%d'%i)
  lines=[];used=4;prev=None
  if ctor and order:
    # A root with a trivial destructor runs the base constructor, so members exist only after the call
    # and no exception cleanup is registered (the original's extab has no actions).
    fn(ctor,'void %s(void *);')
    root='UnknownGenRoot%s'%name[3:]
    lines+=['struct %s {'%root,' void *unknown00;',' inline void operator delete(void *){}',' inline %s(){%s(this);}'%(root,ctor),'};'];prev=root
  for li,lv in enumerate(order):
    mem=sorted(o for o,(ow,t) in owner.items() if ow==lv)
    head='struct %s%s {'%(cls(li),'' if prev is None else ' : %s'%prev)
    # An inline class delete keeps the compiler's unused deleting destructors from referencing a global delete.
    body=[] if prev else [' void *unknown00;',' inline void operator delete(void *){}']
    for o in mem:
      if o<used: raise ValueError('member order')
      if o>used: body.append(' char unknown%02X[%d];'%(used,o-used))
      body.append(' %s unknown%02X;'%(owner[o][1],o));used=o+4
    if li==len(order)-1 and osize>used: body.append(' char unknown%02X[%d];'%(used,osize-used));used=osize
    body.append(' inline ~%s(){unknown00=%s;}'%(cls(li),lv))
    lines+= [head]+body+['};'];prev=cls(li)
  if not order:
    lines=['struct %s {'%cls(0),' void *unknown00;']+([' char unknown04[%d];'%(osize-4)] if osize>4 else [])+['};']
  top=cls(len(order)-1) if order else cls(0)
  body=['void *%s(){'%name,' %s object;'%top]
  if ctor and not order: fn(ctor,'void %s(void *);');body.append(' %s(&object);'%ctor)
  for x in pre:
    body.append(' object.unknown00=%s;'%x)
    body+=[' object.unknown%02X.value=0;'%o for o in sorted(o for o,(ow,t) in owner.items() if ow==x)]
  body.append(' return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);\n}')
  fn(name,'void *%s();')
  PRE.append('\n'.join(lines))
  return '\n'.join(body)
PRE=[]
def _isvt(name):
  addr=syminfo[name][1];size=idx[name]['size']
  if size>=1024: return False
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

def FLOW(name,rel):
  """Straight-line code: calls whose arguments are constants, addresses, loaded globals or earlier call
  results, plus word stores into call results. Values used more than once become locals in first-use order."""
  addr=syminfo[name][1];size=idx[name]['size']
  b=callshape.rd(addr,size);relat={o&~3:(t,sy,a) for o,t,sy,a in rel}
  ws=[_st.unpack('>I',b[i:i+4])[0] for i in range(0,size,4)]
  regs={};vals=[];stmts=[];frame=None;ret=None
  def val(kind,*a):
    vals.append((kind,)+a);return len(vals)-1
  nparam=arity(name)
  for i_ in range(nparam): regs[3+i_]=val('param',i_)
  for i,w in enumerate(ws):
    op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;imm=w&0xFFFF;r=relat.get(4*i)
    if op==37 and rt==1 and ra==1: frame=0x10000-imm;continue
    if w in (0x7C0802A6,0x7C0803A6,0x4E800020): continue
    if op==36 and ra==1: continue                                   # saves
    if op==32 and ra==1: continue                                   # restores
    if op==14 and rt==1 and ra==1: continue                         # epilogue
    if op==14 and rt==11 and ra==1: continue                        # _savegpr/_restgpr frame pointer
    if op==15 and ra==0:
      regs[rt]=('ha',r[1],r[2]) if r else ('k',imm<<16);continue
    if op==14:
      if r and r[0]==109: regs[rt]=val('sda',r[1],r[2]);continue
      if ra==0 and not r: regs[rt]=val('const',callshape.s16(imm));continue
      x=regs.get(ra)
      if isinstance(x,tuple) and x[0]=='ha' and r: regs[rt]=val('addr',r[1],r[2]);continue
      raise ValueError('addi shape')
    if op==32:
      if r and r[0]==109: regs[rt]=val('load',r[1],r[2]);continue
      x=regs.get(ra)
      if isinstance(x,int) and vals[x][0]=='addr' and imm==0: regs[rt]=val('load',vals[x][1],vals[x][2]);continue
      if isinstance(x,tuple) and x[0]=='ha' and r: regs[rt]=val('load',r[1],r[2]);continue
      if isinstance(x,int) and vals[x][0] in ('param','load','ret','field') and not r:
        regs[rt]=val('field',x,callshape.s16(imm));continue          # word field of a known value
      raise ValueError('load shape')
    if op==31 and ((w>>1)&0x3FF)==444 and rt==((w>>11)&31):        # mr
      regs[ra]=regs.get(rt);continue
    if op in (36,38,44):
      x=regs.get(ra);v=regs.get(rt)
      if isinstance(x,int) and isinstance(v,int) and vals[x][0] in ('ret','load','param','field'):
        stmts.append(('store',x,callshape.s16(imm),v,{36:'void *',38:'unsigned char',44:'short'}[op]));continue
      raise ValueError('store shape')
    if op==18 and w&1 and r and r[1].startswith(('_savegpr_','_restgpr_')): continue
    if op==18 and w&1 and r:
      args=[]
      for k in range(3,11):
        v=regs.get(k)
        if isinstance(v,int): args.append(v)
        else: break
      stmts.append(('call',r[1],args,len(vals)));regs={k:v for k,v in regs.items() if k>=14}
      regs[3]=val('ret',len(stmts)-1);continue
    raise ValueError('flow op %08x'%w)
  if not any(s_[0]=='call' for s_ in stmts): raise ValueError('no calls')
  # Which call results are used later decides their declared return types.
  used=collections.Counter()
  for st in stmts:
    if st[0]=='call': used.update(st[2])
    else: used.update([st[1],st[3]])
  # A value left in r3 by a non-call instruction after the last call is the return value.
  retv=regs.get(3) if isinstance(regs.get(3),int) and vals[regs[3]][0] in ('field','load','param','const') else None
  if retv is not None: used[retv]+=1
  for v,k in enumerate(vals):
    if k[0]=='field' and used[v]: used[k[1]]+=1
  def ex(v):
    """Pointer-typed expression for a value (constants stay int)."""
    k=vals[v]
    if k[0]=='const': return str(k[1])
    if k[0] in ('sda','addr'):
      sym=k[1];info=syminfo.get(sym)
      if info and info[2]=='function':
        if sym not in protos: fn(sym,'void %%s(%s);'%','.join(['int']*arity(sym)))
        return '(void *)%s'%sym
      if sym in protos and protos[sym].startswith('extern void *'): return '&%s'%sym if not k[2] else '(char *)&%s+%d'%(sym,k[2])
      if k[0]=='sda':
        n_=max(info[3],1) if info else 4
        fn(sym,'extern char %%s[%d];'%n_)
      elif sym not in protos: fn(sym,'extern char %s[];')
      return sym if not k[2] else '%s+%d'%(sym,k[2])
    if k[0]=='load':
      if v in names_: return names_[v]
      if k[2]: raise ValueError('load addend')
      fn(k[1],'extern void *%s;');return k[1]
    if k[0]=='ret': return names_[v]
    if k[0]=='param': return '(void *)p%d'%k[1]
    if k[0]=='field':
      if v in names_: return names_[v]
      return '*reinterpret_cast<void **>(reinterpret_cast<char *>(%s)+%d)'%(ex(k[1]),k[2])
    raise ValueError(k)
  names_={};lines=[]
  for v,k in enumerate(vals):
    if k[0]=='load' and used[v]>1: names_[v]='value%d'%len(names_)
  emitted=set()
  def ensure(v):
    """Declare a named global load at its first use."""
    k=vals[v]
    if k[0]=='field': ensure(k[1]);return
    if v in names_ and k[0]=='load' and v not in emitted:
      fn(k[1],'extern void *%s;');lines.append(' void *%s=%s;'%(names_[v],k[1]));emitted.add(v)
  for si,st in enumerate(stmts):
    if st[0]=='call':
      t,args=st[1],st[2]
      m=re.match(r'(.*?)%s\((.*)\);$'%re.escape(t),protos.get(t,''))
      ptypes=None
      if m:
        ptypes=[x.strip() for x in m[2].split(',')] if m[2].strip() not in ('','void') else []
        if len(ptypes)>len(args): raise ValueError('arity')
        args=args[:len(ptypes)]
      else:
        # Without a prototype, leftover registers are not arguments: use the inferred arity.
        k_=arity(t)
        if k_>len(args): raise ValueError('arity')
        args=args[:k_]
      for a in args: ensure(a)
      if ptypes is None: ptypes=['int' if vals[a][0]=='const' else 'void *' for a in args]
      def cast(pt,a):
        e=ex(a)
        if pt=='void *': return '(void *)%s'%e if vals[a][0]=='const' else e
        if pt.endswith('*'): return '(%s)(%s)'%(pt,e)
        if vals[a][0]=='const': return e if pt=='int' else '(%s)%s'%(pt,e)
        return '(%s)(int)(%s)'%(pt,e)
      call='%s(%s)'%(t,','.join(cast(pt,a) for pt,a in zip(ptypes,args)))
      rtype=m[1].strip() if m else None
      rv=[v for v,k in enumerate(vals) if k[0]=='ret' and k[1]==si]
      if rv and used[rv[0]]:
        if rtype is None: fn(t,'void *%%s(%s);'%','.join(ptypes));rtype='void *'
        if rtype=='void': raise ValueError('void result used')
        names_[rv[0]]='value%d'%len(names_)
        lines.append(' void *%s=%s;'%(names_[rv[0]],call if rtype.endswith('*') else '(void *)'+call))
      else:
        if rtype is None: fn(t,'void %%s(%s);'%','.join(ptypes))
        lines.append(' %s;'%call)
    else:
      x,off,v,ty=st[1],st[2],st[3],st[4]
      ensure(x);ensure(v)
      e=ex(v)
      if ty=='void *' and vals[v][0]=='const': e='(void *)%s'%e
      elif ty!='void *' and vals[v][0]!='const': e='(%s)(int)%s'%(ty,e)
      lines.append(' *reinterpret_cast<%s *>(reinterpret_cast<char *>(%s)+%d)=%s;'%(ty,ex(x),off,e))
  if retv is not None:
    ensure(retv)
    fn(name,'void *%%s(%s);'%','.join(['int']*nparam))
    rexp=ex(retv)
    if vals[retv][0]=='const': rexp='(void *)%s'%rexp
    return 'void *%s(%s){\n%s\n return %s;\n}'%(name,','.join('int p%d'%i for i in range(nparam)),'\n'.join(lines),rexp)
  fn(name,'void %%s(%s);'%','.join(['int']*nparam))
  return 'void %s(%s){\n%s\n}'%(name,','.join('int p%d'%i for i in range(nparam)),'\n'.join(lines))

TEMPL={'F1':F1,'F2':F2,'F3':F3,'F6':F6,'F7':F7,'F8':F8,'CALLS':CALLS,'VT':VT,'TEXT':TEXT,'LEAF':LEAF,'ITEXT':ITEXT,'FLOW':FLOW}
HEADER_NAME='unknownGen.h'
HEADER='#ifndef UNKNOWNGEN_H\n#define UNKNOWNGEN_H\n#include <igCore/igStringPoolItem.h>\n// Synthetic views shared by recovered metaobject boilerplate; meanings are unknown.\nnamespace Gap { namespace Core { class igArkCore; extern igArkCore *_arkCore; } }\nstruct UnknownGenString {\n const char *value;\n inline ~UnknownGenString(){if(value) reinterpret_cast<const Gap::Core::igStringPoolItem *>(value-8)->release();}\n};\n'+texttempl.PRELUDE+'\nstruct UnknownGenValue { void *unknown00; unsigned int unknown04; };\nstruct UnknownGenHolder { UnknownGenValue *unknown00; };\nextern "C" void fn_80066E1C(void *);\ninline void unknownGenDrop(UnknownGenValue *value){--value->unknown04;if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);}\nstruct UnknownGenRefMember {\n UnknownGenValue *value;\n inline ~UnknownGenRefMember(){if(value) unknownGenDrop(value);}\n};\n#endif\n'
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
    for f2 in ([f,'FLOW'] if f=='CALLS' else [f]):
      try:
        bodies.append(TEMPL[f2](n,idx[n]['rel']));cov+=idx[n]['size'];done.append(n);break
      except Exception as ex:
        protos.clear();protos.update(saved);del PRE[pl:]
        if f2==([f,'FLOW'] if f=='CALLS' else [f])[-1]: skipped.append((n,str(ex)))
  text='\n'.join(PRE)+'\n'+'\n'.join(bodies)
  used=set(re.findall(r'[A-Za-z_][A-Za-z0-9_]*',text))
  own=set(done)
  decls=[d for s_,d in sorted(protos.items()) if s_ in used and s_ not in own and s_!='fn_80066E1C']
  decls+=[protos[n] for n in done if n in protos and n in used and re.search(r'\b%s\b'%n,text.replace(n+'(','',1)) ]
  inc=('#include <%s>\n'%HEADER_NAME) if header else HEADER
  src=inc+'#pragma push\n#pragma auto_inline off\nextern "C" {\n'+'\n'.join(decls)+'\n}\n'+('\n'.join(PRE)+'\n' if PRE else '')+'extern "C" {\n'+'\n'.join(bodies)+'\n}\n#pragma pop\n'
  return src,done,cov,skipped
def _profile_keys():
  """Register each template representative's masked shape under the other compiler profiles."""
  import subprocess,tempfile,compiler,elf
  from paths import ANALYSIS
  import hashlib
  reps=[(r,'F',f) for f,r in FAMREP.items()]+[(r,'T',r) for r in texttempl.T]+[(r,'I',r) for r in texttempl.IT]
  # The cache is keyed on the templates and representatives, so editing either rebuilds it.
  tag=hashlib.sha1((Path(texttempl.__file__).read_text()+repr(reps)+Path(__file__).read_text()).encode()).hexdigest()[:16]
  cache=ANALYSIS/('profilekeys-%s.json'%tag)
  if cache.exists():
    data=json.load(open(cache))
  else:
    data=[]
    for (rep,kind_,val),(ns,sp) in [(x,y) for x in reps for y in ((False,False),(True,False),(False,True),(True,True))]:
      src,done,cov,sk=generate([rep],prepass([rep]))
      tmp=Path(tempfile.mkdtemp(prefix='dw4-unknowngen-'));c=tmp/'r.cpp';o=tmp/'r.o';c.write_text(src)
      subprocess.run(compiler.command(False,ns,sp)+['-c',str(c),'-o',str(o)],check=True,capture_output=True)
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
