"""Shared helpers for reading the original DOL: symbols, strings and register values at calls."""
import json,re,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'unknowngen'))
import callshape
from paths import CONFIG,RELINDEX,BUILD

COUNT='fn_80065D88'
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

