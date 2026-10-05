"""Write one source unit per contiguous run of verified functions and record it in generated_units.txt.
usage: emit.py res.json res-nosdata.json lo hi srcdir   (srcdir relative to src/)
Runs never cross an existing split boundary. Units whose functions own original extabindex
entries are flagged 'eh' so configure.py builds them with C++ exceptions."""
import json,re,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
_argv=sys.argv;sys.argv=['gen']
import gen,callshape
sys.argv=_argv
from paths import CONFIG,UNITS
# Each function is accepted under the default profile, the no-small-data profile, or both.
prof={}
for path,p in ((sys.argv[1],'sdata'),(sys.argv[2],'nosdata')):
  for k,v in json.load(open(path)).items():
    if v==100.0: prof.setdefault(k,set()).add(p)
lo,hi=int(sys.argv[3],16),int(sys.argv[4],16);srcdir=sys.argv[5]
ok=set(prof)
allf=sorted((a,sz,n) for n,(sec,a,t,sz) in gen.syminfo.items() if sec=='.text' and t=='function' and lo<=a<hi)
bounds=set()
for l in open(CONFIG/'splits.txt'):
  m=re.search(r'\.text\s+start:0x([0-9A-F]+) end:0x([0-9A-F]+)',l)
  if m and 'unknownGen' not in l: bounds.update((int(m[1],16),int(m[2],16)))
existing={l.split('\t')[0] for l in UNITS.read_text().splitlines()} if UNITS.exists() else set()
# A unit uses one profile, so a run also ends where no common profile remains (default preferred).
runs=[];cur=[];common=set()
for a,s,n in allf:
  if n in ok and n not in gen._done and n not in gen._bad:
    if cur and (a in bounds or cur[-1][0]+cur[-1][1]!=a or not (common&prof[n])):
      runs.append((cur,common));cur=[]
    common=(common&prof[n]) if cur else set(prof[n])
    cur.append((a,s,n))
  else:
    if cur: runs.append((cur,common));cur=[]
if cur: runs.append((cur,common))
seed=gen.prepass(gen.select(0,0xFFFFFFFF))
Path('src/Alchemy/include',gen.HEADER_NAME).write_text(gen.HEADER)
(Path('src')/srcdir).mkdir(parents=True,exist_ok=True)
eti=callshape.extab_functions()
units=[];total=0
for r,common in runs:
  names=[n for a,s,n in r]
  flags=[f for f in ('eh',) if any(a in eti for a,s,n in r)]+([] if 'sdata' in common else ['nosdata'])
  src,done,cov,skipped=gen.generate(names,seed,True,header=True)
  if done!=names: print('skip run',names[0],skipped[:2]);continue
  path='%s/unknown%08X.cpp'%(srcdir,r[0][0])
  (Path('src')/path).write_text(src)
  units.append((path,r[0][0],r[-1][0]+r[-1][1],','.join(flags) or '-'));total+=cov
old=[l.split('\t') for l in UNITS.read_text().splitlines() if l.strip()] if UNITS.exists() else []
newpaths={u[0] for u in units}
keep=[(p,int(a,16),int(e,16),f) for p,a,e,f in old if p not in newpaths and not (p.startswith(srcdir+'/') and lo<=int(a,16)<hi)]
UNITS.write_text(''.join('%s\t%08X\t%08X\t%s\n'%u for u in sorted(keep+units,key=lambda u:u[1])))
print('units',len(units),'bytes',total,'new',len(newpaths-existing))
