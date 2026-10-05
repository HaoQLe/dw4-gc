"""Sync splits.txt with generated_units.txt: drop stale generated blocks and insert each unit's .text range
in address order (dtk adds extab/extabindex ranges during the build)."""
import re,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
from paths import CONFIG,UNITS
units=[l.split('\t') for l in UNITS.read_text().splitlines() if l.strip()]
gpaths={u[0] for u in units}
splits=CONFIG/'splits.txt'
blocks=splits.read_text().strip('\n').split('\n\n')
head,blocks=blocks[0],blocks[1:]
name=lambda b:b.split('\n')[0][:-1]
keep={name(b):b for b in blocks if name(b) in gpaths}
blocks=[b for b in blocks if 'unknownGen/' not in name(b)]
def tstart(b):
  m=re.search(r'\.text\s+start:0x([0-9A-F]+)',b);return int(m[1],16) if m else None
starts=[tstart(b) for b in blocks]
def block(a,p,e):
  b=keep.get(p)
  if b and tstart(b)==a and ('end:0x%s'%e) in b: return b
  return '%s:\n\t.text       start:0x%08X end:0x%s'%(p,a,e)
out=[];pending=sorted(((int(a,16),p,e) for p,a,e,*_ in units))
k=0
for b,t in zip(blocks,starts):
  while k<len(pending) and t is not None and pending[k][0]<t:
    out.append(block(*pending[k]));k+=1
  out.append(b)
out+=[block(*x) for x in pending[k:]]
splits.write_text(head+'\n\n'+'\n\n'.join(out)+'\n')
print('generated blocks',len(units))
