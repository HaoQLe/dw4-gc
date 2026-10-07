"""Write one source unit per contiguous run of verified functions and record it in generated_units.txt.
usage: emit.py PROFILE=res.json [PROFILE=res.json ...] lo hi srcdir   (srcdir relative to src/)
PROFILE is a comma list of flags (sdata, nosdata, speed, lmw), e.g. sdata=res.json nosdata,speed=res-ns.json;
earlier profiles are preferred when several fit a run.
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
pairs=[x for x in sys.argv[1:] if '=' in x];rest=[x for x in sys.argv[1:] if '=' not in x]
order=[x.split('=',1)[0] for x in pairs]
prof={}
for x in pairs:
  name,path=x.split('=',1)
  for k,v in json.load(open(path)).items():
    if v==100.0: prof.setdefault(k,set()).add(name)
lo,hi=int(rest[0],16),int(rest[1],16);srcdir=rest[2]
ok=set(prof)
allf=sorted((a,sz,n) for n,(sec,a,t,sz) in gen.syminfo.items() if sec=='.text' and t=='function' and lo<=a<hi)
# Boundaries of other (non-generated) split units; generated units are re-derived each run.
bounds=set()
for block in (CONFIG/'splits.txt').read_text().split('\n\n'):
  if 'unknownGen/' in block.split('\n')[0]: continue
  for m in re.finditer(r'\.text\s+start:0x([0-9A-F]+) end:0x([0-9A-F]+)',block):
    bounds.update((int(m[1],16),int(m[2],16)))
existing={l.split('\t')[0] for l in UNITS.read_text().splitlines()} if UNITS.exists() else set()
eti=callshape.extab_functions()
def dtor_eh(n,a):
  """Exception-enabled temporaries with destructors: the compiler adds exception entries for unused
  out-of-line destructor copies, so these functions get units of their own and the extra object-level
  entries do not hide other functions' exception tables from comparison."""
  if a not in eti or gen.kind(n,True)!='VT': return False
  src,done,cov,sk=gen.generate([n],seed,True)
  return 'inline ~' in src
# A unit uses one profile, so a run also ends where no common profile remains (default preferred).
seed=gen.prepass(gen.select(0,0xFFFFFFFF))
runs=[];cur=[];common=set();prevd=None
for a,s,n in allf:
  if n in ok and n not in gen._done and n not in gen._bad:
    d=dtor_eh(n,a)
    # Functions with and without original exception-table entries never share a unit: exceptions
    # enabled for the unit would give the others entries the original lacks.
    if cur and (a in bounds or cur[-1][0]+cur[-1][1]!=a or not (common&prof[n]) or d or prevd or (a in eti)!=(cur[-1][0] in eti)):
      runs.append((cur,common));cur=[]
    common=(common&prof[n]) if cur else set(prof[n])
    cur.append((a,s,n));prevd=d
  else:
    if cur: runs.append((cur,common));cur=[]
if cur: runs.append((cur,common))
Path('src/Alchemy/include',gen.HEADER_NAME).write_text(gen.HEADER)
(Path('src')/srcdir).mkdir(parents=True,exist_ok=True)
units=[];total=0
def pieces(r):
  """Generate a run; when some members fail as one file, retry their contiguous successful pieces."""
  names=[n for a,s,n in r]
  src,done,cov,skipped=gen.generate(names,seed,True,header=True)
  if done==names: return [(r,src,cov)]
  ok=set(done);out=[];cur=[]
  for x in r:
    if x[2] in ok and (not cur or cur[-1][0]+cur[-1][1]==x[0]): cur.append(x)
    else:
      if cur: out.append(cur)
      cur=[x] if x[2] in ok else []
  if cur: out.append(cur)
  if len(out)==1 and len(out[0])==len(r): return []
  res=[]
  for q in out: res+=pieces(q)
  return res
expanded=[]
for r,common in runs:
  for q,src,cov in pieces(r): expanded.append((q,common,src,cov))
for r,common,src,cov in expanded:
  names=[n for a,s,n in r]
  chosen=next(p for p in order if p in common)
  flags=[f for f in ('eh',) if any(a in eti for a,s,n in r)]+[f for f in chosen.split(',') if f!='sdata']
  path='%s/unknown%08X.cpp'%(srcdir,r[0][0])
  (Path('src')/path).write_text(src)
  units.append((path,r[0][0],r[-1][0]+r[-1][1],','.join(flags) or '-'));total+=cov
old=[l.split('\t') for l in UNITS.read_text().splitlines() if l.strip()] if UNITS.exists() else []
newpaths={u[0] for u in units}
keep=[(p,int(a,16),int(e,16),f) for p,a,e,f in old if p not in newpaths and not (p.startswith(srcdir+'/') and lo<=int(a,16)<hi)]
UNITS.write_text(''.join('%s\t%08X\t%08X\t%s\n'%u for u in sorted(keep+units,key=lambda u:u[1])))
# Remove unit files in this range that are no longer listed.
listed={l.split('\t')[0] for l in UNITS.read_text().splitlines()}
for f in sorted((Path('src')/srcdir).glob('unknown*.cpp')):
  rel=f.relative_to('src').as_posix()
  if rel not in listed and lo<=int(f.stem[7:],16)<hi: f.unlink();print('removed stale',rel)
print('units',len(units),'bytes',total,'new',len(newpaths-existing))
