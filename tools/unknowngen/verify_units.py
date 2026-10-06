"""Compile generated units with their configured flags and check every fn_/dtor_ function exactly.
usage: verify_units.py [--all]   (default: units whose source differs from HEAD or is new)
Prints failing units; exits 1 if any fail."""
import subprocess,sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
import fastcmp
from paths import UNITS
units=[l.split('\t') for l in UNITS.read_text().splitlines() if l.strip()]
if '--all' not in sys.argv:
  changed=set(subprocess.run(['git','status','--porcelain','--untracked-files=all','src'],capture_output=True,text=True).stdout.split())
  changed={c[4:] if c.startswith('src/') else c for c in changed}
  units=[u for u in units if u[0] in changed]
def one(u):
  path,a,e,flags=u[0],u[1],u[2],u[3].split(',')
  try:
    res=fastcmp.check('src/'+path,'eh' in flags,'nosdata' in flags,'speed' in flags,'lmw' in flags)
  except Exception as ex: return path,['compile: %s'%str(ex)[:200]]
  return path,[n for n,v in res.items() if v!=100.0]
bad=[]
with ThreadPoolExecutor(8) as pool:
  for path,fails in pool.map(one,units):
    if fails: bad.append((path,fails))
print('checked',len(units),'failing',len(bad))
for p_,f in bad[:40]: print(' ',p_,f[:4])
Path('build/GDJEB2/analysis/unknowngen/verify-fail.txt').write_text(''.join('%s\t%s\n'%(p_,','.join(f)) for p_,f in bad))
sys.exit(1 if bad else 0)
