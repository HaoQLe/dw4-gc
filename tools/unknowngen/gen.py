"""Generate C++ for relocation-templated boilerplate functions.
usage: gen.py lo hi out.cpp [--calls]
Writes one candidate file for every unrecovered function in [lo,hi) that a template recognizes.
Candidates are unverified until fastcmp.py confirms them."""
import json,re,sys,collections
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
from paths import CONFIG,RELINDEX,REPORT,EXCLUDE,HERE
FLOW_REGS=set(json.load(open(HERE/'flow_regs.json'))) if (HERE/'flow_regs.json').exists() else set()
FLOW_REGS_ALL='--flow-regs-all' in sys.argv
# Join strategy for branchy FLOW functions: 'tail' duplicates a return into each path, 'var' joins
# differing registers in variables, 'this' also returns an untouched first parameter.
FLOW_CF=json.load(open(HERE/'flow_cf.json')) if (HERE/'flow_cf.json').exists() else {}
FLOW_CF_ALL=next((a.split('=')[1] for a in sys.argv if a.startswith('--cf=')),None)
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
  relat={o&~3:x for o,*x in idx[n]['rel']}
  for i in range(0,len(b),4):
    if i in relat and relat[i][1].startswith(('_savegpr_','_restgpr_')): continue
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
        if (w>>26)==18 and w&1 and i in relat and relat[i][1].startswith(('_savegpr_','_restgpr_')): continue
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

_CRREL={0:'<',1:'>',2:'=='}
_NEG={'<':'>=','>=':'<','>':'<=','<=':'>','==':'!=','!=':'=='}
def _taken(w,cr):
  """(a, relation, b, signed) under which a conditional branch on cr0 is taken."""
  bo=(w>>21)&31;bi=(w>>16)&31
  if cr is None or bi not in _CRREL: raise ValueError('cr shape')
  rel=_CRREL[bi]
  if bo&~1==12: pass
  elif bo&~1==4: rel=_NEG[rel]
  else: raise ValueError('bo shape')
  return (cr[0],rel,cr[1],cr[2])
def _negate(c): return (c[0],_NEG[c[1]],c[2],c[3])
def _s26(w):
  d=w&0x3FFFFFC
  return d-0x4000000 if d&0x2000000 else d
FLOW_VALUE_KINDS=('field','load','param','const')
# Integer operations: format over operand int expressions, operand fields (s/a/b), destination field.
_BIN31={266:('({0}+{1})','ab','d'),40:('({1}-{0})','ab','d'),235:('({0}*{1})','ab','d'),491:('({0}/{1})','ab','d'),
  459:('((unsigned int){0}/(unsigned int){1})','ab','d'),104:('(-{0})','a','d'),28:('({0}&{1})','sb','a'),
  444:('({0}|{1})','sb','a'),316:('({0}^{1})','sb','a'),60:('({0}&~{1})','sb','a'),124:('~({0}|{1})','sb','a'),
  24:('({0}<<{1})','sb','a'),536:('((unsigned int){0}>>{1})','sb','a'),792:('({0}>>{1})','sb','a'),
  824:('({0}>>%d)','s','a'),26:('__cntlzw({0})','s','a')}
_BINI={7:lambda k:'({0}*%d)'%callshape.s16(k),8:lambda k:'(%d-{0})'%callshape.s16(k),12:lambda k:'({0}+%d)'%callshape.s16(k),
  15:lambda k:'({0}+%d)'%(callshape.s16(k)<<16),24:lambda k:'({0}|0x%X)'%k,25:lambda k:'({0}|0x%X)'%(k<<16),
  26:lambda k:'({0}^0x%X)'%k,28:lambda k:'({0}&0x%X)'%k,29:lambda k:'({0}&0x%X)'%(k<<16)}
_BASES=('param','load','ret','field','var','add','local','xfield','bin','gfield')
_XLOAD={23:'int',87:'unsigned char',279:'unsigned short',343:'short'}
_XSTORE={151:'int',215:'unsigned char',407:'short'}
def FLOW(name,rel):
  """Calls whose arguments are constants, addresses, loaded globals, fields or earlier call results, field
  stores and virtual calls, structured by forward conditional branches into if/else blocks and returns.
  Values used more than once become locals in first-use order; registers that differ where paths join
  become variables."""
  addr=syminfo[name][1];size=idx[name]['size']
  b=callshape.rd(addr,size);relat={o&~3:(t,sy,a) for o,t,sy,a in rel}
  ws=[_st.unpack('>I',b[i:i+4])[0] for i in range(0,size,4)];nw=len(ws)
  vals=[];varsrc=collections.defaultdict(list)
  # A field read before a store or call that precedes one of its uses is stale: it is read into a
  # variable where the original loads it.
  seq=[0];born={};stale=set()
  def val(kind,*a):
    vals.append((kind,)+a);born[len(vals)-1]=seq[0];return len(vals)-1
  def touch(vs,effect=False):
    todo=[v for v in vs if isinstance(v,int)]
    while todo:
      v=todo.pop();k=vals[v]
      if k[0]=='field' and born[v]<seq[0]: stale.add(v)
      if k[0] in ('field','cast','add'): todo.append(k[1])
      elif k[0]=='bin': todo+=list(k[2:])
      elif k[0]=='xfield': todo+=[k[1],k[2]]
    if effect: seq[0]+=1
  nparam=arity(name)
  # Stack offsets whose address is taken are locals; other r1 loads/stores are register saves.
  locs=sorted({callshape.s16(w&0xFFFF) for w in ws if (w>>26)==14 and (w>>16)&31==1 and (w>>21)&31 not in (1,11)})
  regs0={}
  for i_ in range(nparam): regs0[3+i_]=val('param',i_)
  branchy=[False]
  cf=FLOW_CF_ALL or FLOW_CF.get(name,'tail')
  def passes(j,regs,cr):
    """Whether the code at j only returns the incoming r3."""
    try: return exitpath(j,regs,cr)[-1][1]==regs.get(3)
    except ValueError: return False
  def merge(out,c,ts,tr,es,er,pre,j=None,noelse=False,cr=None):
    """Append if(c){ts}else{es}; join the register states (None: that path returned) at word j. Without
    an else part, a variable takes the branch-point value before the if. With the tail strategy, a join
    that only returns is duplicated into both paths."""
    branchy[0]=True
    if cf!='var' and j is not None and tr is not None and er is not None and tr.get(3)!=er.get(3) and passes(j,tr,cr) and passes(j,er,cr):
      ts=ts+exitpath(j,tr,cr);es=es+exitpath(j,er,cr);tr=er=None
    if tr is None or er is None:
      out.append(('if',c,ts,es,pre));return er if tr is None else tr
    m={}
    for k in sorted(set(tr)&set(er)):
      if tr[k]==er[k]: m[k]=tr[k]
      elif isinstance(tr[k],int) and isinstance(er[k],int) and k!=1:
        v=val('var');m[k]=v
        touch([tr[k],er[k]])
        ts.append(('assign',v,tr[k]));(out if noelse else es).append(('assign',v,er[k]));varsrc[v]+=[tr[k],er[k]]
    out.append(('if',c,ts,es,pre))
    return m
  def chase(t):
    """Final target of a branch to unconditional forward branches."""
    while 0<=t<nw and (ws[t]>>26)==18 and not ws[t]&3 and _s26(ws[t])>0: t+=_s26(ws[t])//4
    return t
  def exitpath(t,regs,cr):
    # An exit is straight-line code ending in the function's final blr.
    if any((w_>>26) in (16,18) or ((w_>>26)==19 and w_!=0x4E800020) for w_ in ws[t:nw-1] if w_!=0x4E800421 and not ((w_>>26)==18 and w_&1)) or ws[nw-1]!=0x4E800020:
      raise ValueError('exit shape')
    st,r_=block(t,nw,None,dict(regs),cr)
    if r_ is not None or [x[0] for x in st if x[0]!='def']!=['return']: raise ValueError('exit shape')
    return st
  def block(s,e,join,regs,cr):
    """Interpret words [s,e); control continues at join after e. Returns (statements, registers or None)."""
    out=[];i=s;ctr=None;varargs=False;prev3=regs.get(3);prevcall=False
    while i<e:
      # Key -1 records that a non-call instruction set r3 (a deliberate return value).
      if regs.get(3)!=prev3 and not prevcall: regs[-1]=('moved',)
      prev3=regs.get(3);prevcall=False
      w=ws[i];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;imm=w&0xFFFF;r=relat.get(4*i)
      if op==16:
        if w&3: raise ValueError('bc form')
        t=chase(i+callshape.s16(w&0xFFFC)//4);c=_taken(w,cr);pre=len(vals);touch([c[0],c[2]])
        if t<=i: raise ValueError('backward branch')
        if t==join:
          ts,tr=block(i+1,e,join,dict(regs),cr)
          return out,merge(out,_negate(c),ts,tr,[],regs,pre,join,True,cr)
        if t<e:
          tw=ws[t-1];E=t-1+_s26(tw)//4 if (tw>>26)==18 and not tw&3 and t-1>i else None
          if E is not None and t<E<=e:
            ts,tr=block(i+1,t-1,E,dict(regs),cr);es,er=block(t,E,E,dict(regs),cr)
            regs=merge(out,_negate(c),ts,tr,es,er,pre,E,False,cr);i=E;prev3=regs and regs.get(3)
            if regs is None: return out,None
            continue
          if E is not None and E==join:
            ts,tr=block(i+1,t-1,join,dict(regs),cr);es,er=block(t,e,join,dict(regs),cr)
            return out,merge(out,_negate(c),ts,tr,es,er,pre,join,False,cr)
          if E is not None:
            ts,tr=block(i+1,t-1,E,dict(regs),cr)
            if tr is not None: ts+=exitpath(E,tr,cr)
            regs=merge(out,_negate(c),ts,None,[],regs,pre);i=t;prev3=regs.get(3);continue
          ts,tr=block(i+1,t,t,dict(regs),cr)
          regs=merge(out,_negate(c),ts,tr,[],regs,pre,t,True,cr);i=t;prev3=regs and regs.get(3)
          if regs is None: return out,None
          continue
        merge(out,c,exitpath(t,regs,cr),None,[],regs,pre);i+=1;continue
      if op==18 and not w&3:
        t=chase(i+_s26(w)//4)
        if t==join: return out,regs
        if t>i: return out+exitpath(t,regs,cr),None
        raise ValueError('backward branch')
      if w==0x4E800020:
        touch([regs.get(3)]);out.append(('return',regs.get(3),-1 in regs));return out,None
      if op==19 and ((w>>1)&0x3FF)==16 and not w&1 and not (w>>11)&3:
        c=_taken(w,cr);touch([c[0],c[2],regs.get(3)]);merge(out,c,[('return',regs.get(3),-1 in regs)],None,[],regs,len(vals));i+=1;continue
      i+=1
      if op==37 and rt==1 and ra==1: continue
      if w in (0x7C0802A6,0x7C0803A6): continue
      if w==0x4CC63182: varargs=True;continue                         # crclr 6: variadic call follows
      if op in (36,38,44) and ra==1 and callshape.s16(imm) in locs:   # local store
        v=regs.get(rt)
        if not isinstance(v,int) or op!=36: raise ValueError('local store shape')
        touch([v],True);out.append(('lstore',callshape.s16(imm),v));continue
      if op==32 and ra==1 and callshape.s16(imm) in locs: regs[rt]=val('local',callshape.s16(imm));continue
      if op==14 and ra==1 and rt not in (1,11): regs[rt]=val('stack',callshape.s16(imm));continue
      if op==36 and ra==1: continue                                   # saves
      if op in (46,47) and ra==1: continue                            # lmw/stmw saves
      if op==32 and ra==1: continue                                   # restores
      if op==14 and rt==1 and ra==1: continue                         # epilogue
      if op==14 and rt==11 and ra==1: continue                        # _savegpr/_restgpr frame pointer
      if op in (10,11) and not rt>>2:                                 # cmplwi/cmpwi
        x=regs.get(ra)
        if not isinstance(x,int): raise ValueError('cmp operand')
        cr=(x,('imm',callshape.s16(imm) if op==11 else imm),op==11);continue
      if op==31 and ((w>>1)&0x3FF) in (0,32) and not rt>>2:           # cmpw/cmplw
        x=regs.get(ra);y=regs.get((w>>11)&31)
        if not (isinstance(x,int) and isinstance(y,int)): raise ValueError('cmp operand')
        cr=(x,y,((w>>1)&0x3FF)==0);continue
      if op==21:                                                      # rlwinm: mask or shift
        x=regs.get(rt);sh=(w>>11)&31;mb=(w>>6)&31;me=(w>>1)&31
        if not isinstance(x,int): raise ValueError('mask operand')
        if not sh and mb<=me:
          mask=((1<<(32-mb))-1)&~((1<<(31-me))-1)
          v=val('cast',x,{0xFF:'unsigned char',0xFFFF:'unsigned short'}.get(mask,mask))
        elif not mb and me==31-sh: v=val('bin','({0}<<%d)'%sh,x)
        elif me==31 and sh==32-mb: v=val('bin','((unsigned int){0}>>%d)'%mb,x)
        else: raise ValueError('mask shape')
        regs[ra]=v
        if w&1: cr=(v,('imm',0),True)
        continue
      if op==31 and ((w>>1)&0x3FF)==444 and rt==((w>>11)&31) and w&1:  # mr.
        x=regs.get(rt)
        if not isinstance(x,int): raise ValueError('mr. operand')
        regs[ra]=x;cr=(x,('imm',0),True);continue
      if op==15 and ra==0:
        regs[rt]=('ha',r[1],r[2]) if r else ('k',imm<<16);continue
      if op==14:
        if r and r[0]==109: regs[rt]=val('sda',r[1],r[2]);continue
        if ra==0 and not r: regs[rt]=val('const',callshape.s16(imm));continue
        x=regs.get(ra)
        if isinstance(x,tuple) and x[0]=='ha' and r: regs[rt]=val('addr',r[1],r[2]);continue
        if isinstance(x,int) and not r: regs[rt]=val('add',x,callshape.s16(imm));continue
        raise ValueError('addi shape %08x'%w)
      if op==13 and not r and isinstance(regs.get(ra),int):           # addic.
        regs[rt]=val('add',regs[ra],callshape.s16(imm));cr=(regs[rt],('imm',0),True);continue
      if op==31 and ((w>>1)&0x3FF) in (922,954) and not (w>>11)&31:    # extsh/extsb
        x=regs.get(rt)
        if not isinstance(x,int): raise ValueError('ext operand')
        k_=vals[x];sx='short' if ((w>>1)&0x3FF)==922 else 'signed char'
        if k_[0] in ('field','gfield','xfield') and len(k_)>3 and k_[-1]=={'short':'unsigned short','signed char':'unsigned char'}[sx]:
          regs[ra]=val(*(k_[:-1]+(sx,)))                              # signed narrow load
        else: regs[ra]=val('cast',x,sx)
        if w&1: cr=(regs[ra],('imm',0),True)
        continue
      if op==32:
        if r and r[0]==109: regs[rt]=val('load',r[1],r[2]);continue
        x=regs.get(ra)
        if isinstance(x,int) and vals[x][0]=='addr' and not r: regs[rt]=val('load',vals[x][1],vals[x][2]+callshape.s16(imm),'ha');continue
        if isinstance(x,tuple) and x[0]=='ha' and r: regs[rt]=val('load',r[1],r[2],'ha');continue
        if isinstance(x,int) and vals[x][0] in _BASES and not r:
          if rt==12 and imm==0: regs[12]=('vt',x);continue             # vtable of a known object
          regs[rt]=val('field',x,callshape.s16(imm));out.append(('def',regs[rt]));continue  # word field
        if isinstance(x,tuple) and x[0]=='vt' and rt==12 and not r:
          regs[12]=('vslot',x[1],callshape.s16(imm));continue          # virtual slot
        raise ValueError('load shape %08x %s'%(w,vals[x][0] if isinstance(x,int) else x))
      if op in (34,40,42) and r and (r[0]==109 or isinstance(regs.get(ra),tuple)):
        regs[rt]=val('gfield',r[1],r[2],{34:'unsigned char',40:'unsigned short',42:'short'}[op]);continue
      if op in (34,40,42):
        x=regs.get(ra)
        if isinstance(x,int) and vals[x][0] in _BASES and not r:
          regs[rt]=val('field',x,callshape.s16(imm),{34:'unsigned char',40:'unsigned short',42:'short'}[op]);out.append(('def',regs[rt]));continue
        raise ValueError('narrow load shape')
      if (w&0xFC1FFFFF)==0x7C0903A6:                                   # mtctr
        x=regs.get(rt)
        if isinstance(x,tuple) and x[0]=='vslot' and rt==12: ctr=x;continue
        if isinstance(x,tuple) and x[0]=='vt': x=val('field',x[1],0)
        if not isinstance(x,int): raise ValueError('mtctr shape')
        ctr=('ptr',x);continue
      if w==0x4E800421 and ctr and ctr[0]=='ptr':                      # bctrl: function pointer
        args=[]
        for k in range(3,11):
          v=regs.get(k)
          if isinstance(v,int): args.append(v)
          else: break
        touch([ctr[1]]+args,True);out.append(('icall',ctr[1],args,len(vals)));regs={k:v for k,v in regs.items() if k>=14}
        regs[3]=val('ret',out[-1]);prevcall=True;continue
      if w==0x4E800421:                                                # bctrl: virtual call
        if ctr is None or regs.get(3)!=ctr[1]: raise ValueError('virtual this')
        args=[]
        for k in range(4,11):
          v=regs.get(k)
          if isinstance(v,int): args.append(v)
          else: break
        touch([ctr[1]]+args,True);out.append(('vcall',ctr[1],ctr[2],args,len(vals)));regs={k:v for k,v in regs.items() if k>=14}
        regs[3]=val('ret',out[-1]);prevcall=True;continue
      if op==31 and ((w>>1)&0x3FF)==444 and rt==((w>>11)&31):        # mr
        regs[ra]=regs.get(rt);continue
      if op in (36,38,44) and r and (r[0]==109 or isinstance(regs.get(ra),tuple)) and isinstance(regs.get(rt),int):
        touch([regs[rt]],True);out.append(('gstore',r[1],r[2],regs[rt],{36:'void *',38:'unsigned char',44:'short'}[op],r[0]!=109));continue
      if op in (36,38,44):
        x=regs.get(ra);v=regs.get(rt)
        if isinstance(x,int) and isinstance(v,int) and vals[x][0] in _BASES:
          touch([x,v],True);out.append(('store',x,callshape.s16(imm),v,{36:'void *',38:'unsigned char',44:'short'}[op]));continue
        raise ValueError('store shape %08x'%w)
      if op==18 and w&1 and r and r[1].startswith(('_savegpr_','_restgpr_')): continue
      if op==18 and w&1 and r:
        args=[]
        for k in range(3,11):
          v=regs.get(k)
          if isinstance(v,int): args.append(v)
          else: break
        touch(args,True);out.append(('call',r[1],args,len(vals),varargs));regs={k:v for k,v in regs.items() if k>=14};varargs=False
        regs[3]=val('ret',out[-1]);prevcall=True;continue
      xo=(w>>1)&0x3FF
      if op==31 and xo in _XLOAD and isinstance(regs.get(ra),int) and isinstance(regs.get((w>>11)&31),int):
        regs[rt]=val('xfield',regs[ra],regs[(w>>11)&31],_XLOAD[xo]);continue
      if op==31 and xo in _XSTORE and all(isinstance(regs.get(k),int) for k in (ra,(w>>11)&31,rt)):
        touch([regs[ra],regs[(w>>11)&31],regs[rt]],True);out.append(('xstore',regs[ra],regs[(w>>11)&31],regs[rt],_XSTORE[xo]));continue
      if op==31 and xo&0x1FF in (266,40,235,491,459,104): xo&=0x1FF   # ignore OE
      if op==31 and xo in _BIN31:                                      # integer arithmetic
        fmt_,srcs,dst=_BIN31[xo]
        if '%d' in fmt_: fmt_=fmt_%((w>>11)&31)
        ops_=[regs.get({'s':rt,'a':ra,'b':(w>>11)&31}[c_]) for c_ in srcs]
        if not all(isinstance(x,int) for x in ops_): raise ValueError('arith operand')
        v=val('bin',fmt_,*ops_);regs[{'d':rt,'a':ra}[dst]]=v
        if w&1: cr=(v,('imm',0),True)
        continue
      if op in _BINI:                                                 # immediate arithmetic
        x=regs.get(ra if op in (7,8,12,15) else rt)
        if not isinstance(x,int) or r: raise ValueError('arith operand')
        v=val('bin',_BINI[op](imm),x);regs[rt if op in (7,8,12,15) else ra]=v
        if op in (28,29): cr=(v,('imm',0),True)
        continue
      raise ValueError('flow op %08x'%w)
    return out,regs
  stmts,fin=block(0,nw,None,dict(regs0),None)
  if fin is not None: raise ValueError('falls off end')
  branchy=branchy[0]
  def walk(st):
    for s_ in st:
      yield s_
      if s_[0]=='if':
        yield from walk(s_[2]);yield from walk(s_[3])
  allst=list(walk(stmts))
  if not branchy and not any(s_[0] in ('call','vcall') for s_ in allst): raise ValueError('no calls')
  rets=[s_ for s_ in allst if s_[0]=='return']
  if not branchy:
    # A value left in r3 by a non-call instruction after the last call is the return value.
    v=rets[0][1];retval=isinstance(v,int) and vals[v][0] in FLOW_VALUE_KINDS
  else:
    def computed(v,seen=()):
      if not isinstance(v,int) or v in seen: return False
      k=vals[v][0]
      if k=='var': return any(computed(x,seen+(v,)) for x in varsrc[v])
      return k in ('field','load','const','cast','sda','addr')
    def voidret(v):
      if not isinstance(v,int) or vals[v][0]!='ret' or vals[v][1][0]!='call': return False
      pr=protos.get(vals[v][1][1],'')
      return pr.startswith('void ') and not pr.startswith('void *')
    retval=not any(voidret(s_[1]) for s_ in rets) and any(computed(s_[1]) or s_[2] for s_ in rets) or (cf=='this' and nparam and all(s_[1]==regs0[3] for s_ in rets))
    if retval and not all(isinstance(s_[1],int) for s_ in rets): raise ValueError('return value missing')
  # Which values are used decides call return types and locals.
  used=collections.Counter()
  def use_stmt(st):
    if st[0]=='call': used.update(st[2])
    elif st[0]=='icall': used.update([st[1]]+st[2])
    elif st[0]=='xstore': used.update(st[1:4])
    elif st[0] in ('lstore','gstore'): used[st[3] if st[0]=='gstore' else st[2]]+=1
    elif st[0]=='vcall': used.update([st[1]]+st[3])
    elif st[0]=='store': used.update([st[1],st[3]])
    elif st[0]=='if':
      used.update([st[1][0]]+([st[1][2]] if isinstance(st[1][2],int) else []))
    elif st[0]=='return' and retval: used[st[1]]+=1
  for st in allst: use_stmt(st)
  done_vars=set()
  while True:
    new=[v for v in used if vals[v][0]=='var' and used[v] and v not in done_vars]
    if not new: break
    for v in new:
      done_vars.add(v)
      for st in allst:
        if st[0]=='assign' and st[1]==v: used[st[2]]+=1
  for v,k in enumerate(vals):
    if k[0] in ('field','cast','add') and used[v]: used[k[1]]+=1
    if k[0]=='bin' and used[v]: used.update(k[2:])
    if k[0]=='xfield' and used[v]: used.update(k[1:3])
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
      # In branchy code a global addressed with @ha/@l is declared without a size, as the original.
      if k[2] or (branchy and len(k)>3 and not (k[1] in protos and protos[k[1]].startswith('extern void *'))): return '*reinterpret_cast<void **>(%s)'%gaddr(k[1],k[2])
      fn(k[1],'extern void *%s;');return k[1]
    if k[0] in ('ret','var'): return names_[v]
    if k[0]=='local': return 'local%d'%locs.index(k[1])
    if k[0]=='stack': return '&local%d'%locs.index(k[1])
    if k[0]=='add': return '(reinterpret_cast<char *>(%s)+%d)'%(ex(k[1]),k[2])
    if k[0] in ('gfield','bin','xfield'): return '(void *)(int)%s'%ix(v)
    if k[0]=='param': return '(void *)p%d'%k[1]
    if k[0]=='field':
      if v in names_: return names_[v]
      if len(k)>3: return '(void *)(int)*reinterpret_cast<%s *>(reinterpret_cast<char *>(%s)+%d)'%(k[3],ex(k[1]),k[2])
      return '*reinterpret_cast<void **>(reinterpret_cast<char *>(%s)+%d)'%(ex(k[1]),k[2])
    if k[0]=='cast': return '(void *)(int)%s'%ix(v)
    raise ValueError(k)
  def gaddr(sym,add):
    """char * address of a global plus an addend."""
    if sym in protos and protos[sym].startswith('extern void *'): return '((char *)&%s+%d)'%(sym,add)
    if '__' in sym: raise ValueError('C++ global')                # declared with its type elsewhere
    info=syminfo.get(sym)
    if info and info[0] in ('.sdata','.sbss','.sdata2','.sbss2'): fn(sym,'extern char %%s[%d];'%max(info[3],1))
    elif sym not in protos: fn(sym,'extern char %s[];')
    if not re.match(r'extern char %s\['%re.escape(sym),protos.get(sym,'')): raise ValueError('global type')
    return '(%s+%d)'%(sym,add)
  def ix(v):
    """Integer-typed expression for a value."""
    k=vals[v]
    if k[0]=='const': return str(k[1])
    if k[0]=='param': return 'p%d'%k[1]
    if k[0]=='field' and len(k)>3 and v not in names_:
      return '*reinterpret_cast<%s *>(reinterpret_cast<char *>(%s)+%d)'%(k[3],ex(k[1]),k[2])
    if k[0]=='gfield': return '*reinterpret_cast<%s *>(%s)'%(k[3],gaddr(k[1],k[2]))
    if k[0]=='bin': return k[1].format(*[ix(o) for o in k[2:]])
    if k[0]=='xfield': return '*reinterpret_cast<%s *>(reinterpret_cast<char *>(%s)+%s)'%(k[3],ex(k[1]),ix(k[2]))
    if k[0]=='add': return '(%s+%d)'%(ix(k[1]),k[2])
    if k[0]=='cast':
      if isinstance(k[2],int): return '((unsigned int)%s&0x%X)'%(ix(k[1]),k[2])
      return '(%s)%s'%(k[2],ix(k[1]))
    return '(int)%s'%ex(v)
  def cond(c):
    a,rel_,b_,signed=c
    k=vals[a][0]
    if isinstance(b_,tuple):
      n_=b_[1]
      if n_==0 and rel_ in ('==','!='):
        if k=='cast' or (not signed and k not in ('param','const')):
          e_=ex(a) if k not in ('cast','field') or (k=='field' and len(vals[a])==3) else ix(a)
          return e_ if rel_=='!=' else '!%s'%e_
      return '(%s)%s%s%d'%('int' if signed else 'unsigned int',ix(a),rel_,n_)
    t_='int' if signed else 'unsigned int'
    return '(%s)%s%s(%s)%s'%(t_,ix(a),rel_,t_,ix(b_))
  names_={};emitted=set()
  for v,k in enumerate(vals):
    if k[0]=='load' and used[v]>1: names_[v]='value%d'%len(names_)
    # In branchy code a field read more than once is read once, where it is first needed.
    elif branchy and k[0]=='field' and used[v] and v in stale: names_[v]='value%d'%len(names_)
  def ensure(v,lines):
    """Declare a named global load at its first use."""
    k=vals[v]
    if k[0]=='field' and v in names_ and v not in emitted:
      ensure(k[1],lines);n_=names_.pop(v);e_=ex(v);names_[v]=n_;emitted.add(v)
      lines.append(' %s%s=%s;'%(declare(n_),n_,e_));return
    if k[0] in ('field','cast','add'): ensure(k[1],lines);return
    if k[0]=='bin':
      for o in k[2:]: ensure(o,lines)
      return
    if k[0]=='xfield': ensure(k[1],lines);ensure(k[2],lines);return
    if v in names_ and k[0]=='load' and v not in emitted:
      fn(k[1],'extern void *%s;'%'%s');lines.append(' void *%s=%s;'%(names_[v],k[1]));emitted.add(v)
  def refs(st):
    for s_ in walk([st]):
      if s_[0]=='call': yield from s_[2]
      elif s_[0]=='icall': yield from [s_[1]]+s_[2]
      elif s_[0]=='lstore': yield s_[2]
      elif s_[0]=='xstore': yield from s_[1:4]
      elif s_[0]=='gstore': yield s_[3]
      elif s_[0]=='vcall': yield from [s_[1]]+s_[3]
      elif s_[0]=='store': yield from [s_[1],s_[3]]
      elif s_[0]=='if':
        yield s_[1][0]
        if isinstance(s_[1][2],int): yield s_[1][2]
      elif s_[0]=='assign' and used[s_[1]]: yield s_[2]
      elif s_[0]=='return' and retval: yield s_[1]
  varlines=[]
  for v,k in enumerate(vals):
    if k[0]=='var' and used[v]: names_[v]='value%d'%len(names_);varlines.append(' void *%s;'%names_[v])
  def emit(stmts,lines,top):
    for si,st in enumerate(stmts):
      if st[0]=='call':
        t,args=st[1],st[2]
        if st[4]:
          if t not in protos: fn(t,'void %s(void *,...);')
          if not protos[t].endswith('...);') or not args: raise ValueError('variadic prototype')
        m=re.match(r'(.*?)%s\((.*)\);$'%re.escape(t),protos.get(t,HEADER_PROTOS.get(t,'')))
        ptypes=None
        if st[4]:
          ptypes=['void *']*len(args)
          if used[[v for v,k in enumerate(vals) if k[0]=='ret' and k[1] is st][0]]: raise ValueError('variadic result')
        elif m:
          ptypes=[x.strip() for x in m[2].split(',')] if m[2].strip() not in ('','void') else []
          if len(ptypes)>len(args): raise ValueError('arity')
          args=args[:len(ptypes)]
        elif not (FLOW_REGS_ALL or name in FLOW_REGS):
          # Without a prototype, leftover registers are not arguments: use the inferred arity.
          # (Functions listed in flow_regs.json match only when the set registers are passed.)
          k_=arity(t)
          if k_>len(args): raise ValueError('arity')
          args=args[:k_]
        for a in args: ensure(a,lines)
        if ptypes is None: ptypes=['int' if vals[a][0]=='const' else 'void *' for a in args]
        def cast(pt,a):
          e=ex(a)
          if pt=='void *': return '(void *)%s'%e if vals[a][0]=='const' else e
          if pt.endswith('*'): return '(%s)(%s)'%(pt,e)
          if vals[a][0]=='const': return e if pt=='int' else '(%s)%s'%(pt,e)
          return '(%s)(int)(%s)'%(pt,e)
        call='%s(%s)'%(t,','.join(cast(pt,a) for pt,a in zip(ptypes,args)))
        rtype=m[1].strip() if m else None
        rv=[v for v,k in enumerate(vals) if k[0]=='ret' and k[1] is st]
        if rv and used[rv[0]]:
          if rtype is None: fn(t,'void *%%s(%s);'%','.join(ptypes));rtype='void *'
          if rtype=='void': raise ValueError('void result used %s'%t)
          names_[rv[0]]='value%d'%len(names_)
          lines.append(' %s%s=%s;'%(declare(names_[rv[0]]),names_[rv[0]],call if rtype.endswith('*') else '(void *)'+call))
        else:
          if rtype is None: fn(t,'void %%s(%s);'%','.join(ptypes))
          lines.append(' %s;'%call)
      elif st[0]=='vcall':
        obj,off,args=st[1],st[2],st[3]
        ensure(obj,lines)
        for a in args: ensure(a,lines)
        rv=[v for v,k in enumerate(vals) if k[0]=='ret' and k[1] is st]
        want=bool(rv and used[rv[0]])
        cls='UnknownGenV%s_%d'%(name[3:],len(PRE))
        slots=[' virtual void s%02X();'%o for o in range(8,off,4)]
        params=','.join('void *' for a in args)
        slots.append(' virtual %s s%02X(%s);'%('void *' if want else 'void',off,params))
        PRE.append('class %s {\npublic:\n%s\n};'%(cls,'\n'.join(slots)))
        call='reinterpret_cast<%s *>(%s)->s%02X(%s)'%(cls,ex(obj),off,','.join(('(void *)%s'%ex(a)) if vals[a][0]=='const' else ex(a) for a in args))
        if want:
          names_[rv[0]]='value%d'%len(names_);lines.append(' %s%s=%s;'%(declare(names_[rv[0]]),names_[rv[0]],call))
        else: lines.append(' %s;'%call)
      elif st[0]=='icall':
        f_,args=st[1],st[2]
        ensure(f_,lines)
        for a in args: ensure(a,lines)
        rv=[v for v,k in enumerate(vals) if k[0]=='ret' and k[1] is st]
        want=bool(rv and used[rv[0]])
        call='reinterpret_cast<%s (*)(%s)>(%s)(%s)'%('void *' if want else 'void',','.join('void *' for a in args),ex(f_),','.join(('(void *)%s'%ex(a)) if vals[a][0]=='const' else ex(a) for a in args))
        if want:
          names_[rv[0]]='value%d'%len(names_);lines.append(' %s%s=%s;'%(declare(names_[rv[0]]),names_[rv[0]],call))
        else: lines.append(' %s;'%call)
      elif st[0]=='def':
        if st[1] in names_: ensure(st[1],lines)
      elif st[0]=='xstore':
        for v in st[1:4]: ensure(v,lines)
        lines.append(' *reinterpret_cast<%s *>(reinterpret_cast<char *>(%s)+%s)=(%s)%s;'%(st[4],ex(st[1]),ix(st[2]),st[4],ix(st[3])))
      elif st[0]=='lstore':
        ensure(st[2],lines);e=ex(st[2])
        lines.append(' local%d=%s;'%(locs.index(st[1]),'(void *)%s'%e if vals[st[2]][0]=='const' else e))
      elif st[0]=='gstore':
        sym,add,v,ty=st[1],st[2],st[3],st[4]
        ensure(v,lines);e=ex(v)
        if ty=='void *' and not add and (protos.get(sym,'').startswith('extern void *') or (sym not in protos and not st[5])):
          fn(sym,'extern void *%s;')
          lines.append(' %s=%s;'%(sym,'(void *)%s'%e if vals[v][0]=='const' else e))
        else:
          if vals[v][0]!='const': e='(%s)(int)%s'%(ty,e) if ty!='void *' else e
          elif ty=='void *': e='(void *)%s'%e
          lines.append(' *reinterpret_cast<%s *>(%s)=%s;'%(ty,gaddr(sym,add),e))
      elif st[0]=='store':
        x,off,v,ty=st[1],st[2],st[3],st[4]
        ensure(x,lines);ensure(v,lines)
        e=ex(v)
        if ty=='void *' and vals[v][0]=='const': e='(void *)%s'%e
        elif ty!='void *' and vals[v][0]!='const': e='(%s)(int)%s'%(ty,e)
        lines.append(' *reinterpret_cast<%s *>(reinterpret_cast<char *>(%s)+%d)=%s;'%(ty,ex(x),off,e))
      elif st[0]=='assign':
        if not used[st[1]]: continue
        ensure(st[2],lines);e=ex(st[2])
        lines.append(' %s=%s;'%(names_[st[1]],'(void *)%s'%e if vals[st[2]][0]=='const' else e))
      elif st[0]=='if':
        for v in sorted(set(refs(st))):
          if v<st[4]: ensure(v,lines)
        tl=[];el=[]
        emit(st[2],tl,False);emit(st[3],el,False)
        if not tl and el: c_=cond(_negate(st[1]));tl,el=el,[]
        else: c_=cond(st[1])
        lines.append(' if(%s){'%c_);lines.extend(' '+x for x in tl)
        if el: lines.append(' } else {');lines.extend(' '+x for x in el)
        lines.append(' }')
      elif st[0]=='return':
        last=top and si==len(stmts)-1
        if retval:
          v=st[1];ensure(v,lines);e=ex(v)
          lines.append(' return %s;'%('(void *)%s'%e if vals[v][0] in ('const','cast') else e))
        elif not last: lines.append(' return;')
  # In branchy code, call results are declared at the top so they outlive their block.
  topdecl=[]
  def declare(n_):
    if not branchy: return 'void *'
    topdecl.append(' void *%s;'%n_);return ''
  body=[]
  emit(stmts,body,True)
  lines=list(varlines)+topdecl+[' void *local%d;'%k for k in reversed(range(len(locs)))]+body
  params=','.join('int p%d'%i for i in range(nparam))
  if retval:
    fn(name,'void *%%s(%s);'%','.join(['int']*nparam))
    return 'void *%s(%s){\n%s\n}'%(name,params,'\n'.join(lines))
  fn(name,'void %%s(%s);'%','.join(['int']*nparam))
  return 'void %s(%s){\n%s\n}'%(name,params,'\n'.join(lines))

TEMPL={'F1':F1,'F2':F2,'F3':F3,'F6':F6,'F7':F7,'F8':F8,'CALLS':CALLS,'VT':VT,'TEXT':TEXT,'LEAF':LEAF,'ITEXT':ITEXT,'FLOW':FLOW}
HEADER_NAME='unknownGen.h'
HEADER_PROTOS={'fn_80066E1C':'void fn_80066E1C(void *);'}  # declared by the header
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
  """Prototypes the template functions need (their own signatures, their callees and globals they use
  as pointers), so that earlier straight-line or branchy callers declare those symbols the same way."""
  out={};decl={}
  for n in names:
    f=kind(n,calls)
    if f in (None,'CALLS'): continue
    protos.clear();protos.update(seed);del PRE[:]
    try: TEMPL[f](n,idx[n]['rel'])
    except Exception: continue
    out.update({k:v for k,v in protos.items() if v.startswith('extern void *')})
    for k,v in protos.items():
      if k not in seed: decl.setdefault(k,v)
  decl.update(out)
  return decl
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
