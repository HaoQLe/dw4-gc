"""Recover constant-argument call shapes from original instructions.
analyze(addr,size,rel) -> list of calls [(target, {reg:expr}, {stackoff:expr})] or None"""
import struct
from paths import DOL
_d=open(DOL,'rb').read();_h=struct.unpack_from('>64I',_d)
def rd(a,n):
  for i in range(18):
    if _h[18+i]<=a and a+n<=_h[18+i]+_h[36+i]: o=_h[i]+a-_h[18+i];return _d[o:o+n]
def s16(x): return x-0x10000 if x&0x8000 else x
def analyze(addr,size,rel):
  relat={}
  for o,t,s,a in rel: relat[o&~3]=(t,s,a)
  b=rd(addr,size);regs={};stack={};calls=[]
  for i in range(0,size,4):
    w=struct.unpack('>I',b[i:i+4])[0];op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;imm=w&0xFFFF
    r=relat.get(i)
    if op==18:
      if w&1:
        if not r: return None
        calls.append((r[1],dict(regs),dict(stack)));regs={k:v for k,v in regs.items() if k>=14};stack={}
        continue
      else: return None
    if op==15:  # addis / lis
      if ra==0: regs[rt]=('ha',r[1],r[2]) if r else ('const',imm<<16)
      else: return None
    elif op==14:  # addi / li
      if r and r[0]==109: regs[rt]=('sda',r[1],r[2])
      elif ra==0: regs[rt]=('const',s16(imm))
      elif ra==1: regs[rt]=('stack',s16(imm))
      else:
        src=regs.get(ra)
        if src and src[0]=='ha' and r: regs[rt]=('addr',r[1],r[2])
        elif src and src[0]=='const': regs[rt]=('const',src[1]+s16(imm))
        else: regs[rt]=None
    elif op==36:  # stw
      if ra==1: stack[s16(imm)]=regs.get(rt)
    elif op==31 and ((w>>1)&0x3FF)==444 and rt==((w>>11)&31):  # mr
      regs[ra]=regs.get(rt)
    elif op in (32,):  # lwz
      if r and r[0]==109: regs[rt]=('load',r[1],r[2])
      else: regs[rt]=None
    else:
      continue
  return calls

def _section_of(addr):
  for i in range(18):
    if _h[18+i]<=addr<_h[18+i]+_h[36+i]: return _h[18+i],_h[36+i]
  raise ValueError(hex(addr))
def _symaddr(section,name=None):
  import re
  from paths import CONFIG
  best=None
  for l in open(CONFIG/'symbols.txt'):
    m=re.match(r'(\S+) = %s:0x([0-9A-F]+);'%re.escape(section),l)
    if m and (name is None or m[1]==name):
      a=int(m[2],16);best=a if best is None else min(best,a)
  return best
_cache={}
def ctors():
  """Function addresses listed in the original .ctors table."""
  if 'ctors' not in _cache:
    a,n=_section_of(_symaddr('.ctors','_ctors'))
    _cache['ctors']={x for x in struct.unpack('>%dI'%(n//4),rd(a,n)) if x}
  return _cache['ctors']
def extab_functions():
  """Function addresses that own an original extabindex entry."""
  if 'eti' not in _cache:
    a,n=_section_of(_symaddr('extabindex'))
    _cache['eti']={struct.unpack_from('>I',rd(a,n),k)[0] for k in range(0,n,12)}
  return _cache['eti']
