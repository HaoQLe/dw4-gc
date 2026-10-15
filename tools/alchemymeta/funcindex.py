"""Index every function's instructions from the current original split objects (objdiff.json targets).

Writes build/GDJEB2/analysis/reg/allfns.json: function name -> instruction lines (comments and labels
removed). Run after a normal build; regnames.py reads it.

usage: /opt/homebrew/bin/python3 tools/alchemymeta/funcindex.py"""
import re,json,subprocess,tempfile,os
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor
units=[u['target_path'] for u in json.load(open('objdiff.json'))['units'] if u.get('target_path') and Path(u['target_path']).exists()]
d=Path(tempfile.mkdtemp())
def dis(i_p):
  i,p=i_p;o=d/('%d.s'%i)
  subprocess.run(['build/tools/dtk','elf','disasm',p,str(o)],capture_output=True)
  return o.read_text(encoding='latin1') if o.exists() else ''
fns={}
with ThreadPoolExecutor(12) as ex:
  for t in ex.map(dis,enumerate(units)):
    for m in re.finditer(r'\.fn (\S+?), \w+\n(.*?)\.endfn',t,re.S):
      fns[m[1].strip('"')]=[re.sub(r'/\*.*?\*/\s*','',l).strip() for l in m[2].splitlines() if l.strip() and not l.strip().startswith('.')]
Path('build/GDJEB2/analysis/reg').mkdir(parents=True,exist_ok=True)
json.dump(fns,open('build/GDJEB2/analysis/reg/allfns.json','w'))
print(len(units),len(fns))
