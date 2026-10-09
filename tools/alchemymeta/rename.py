"""Give attributed functions their class-based names (config/GDJEB2/alchemy_class_functions.txt).

A function still named by its address (fn_XXXXXXXX or dtor_XXXXXXXX) is renamed everywhere the name
appears as a whole token: symbols.txt, all sources and headers, the generator's state files and its
hand-written templates. Names do not change code, so the build checksum must not change.
Idempotent: already renamed functions are left alone.

usage: /opt/homebrew/bin/python3 tools/alchemymeta/rename.py"""
import re,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'unknowngen'))
from paths import CONFIG

current={}
for l in open(CONFIG/'symbols.txt'):
  m=re.match(r'(\S+) = \.text:0x([0-9A-F]+); // type:function',l)
  if m: current[int(m[2],16)]=m[1]
mapping={}
for l in open(CONFIG/'alchemy_class_functions.txt'):
  if l.startswith('#'): continue
  a,cls,roles,name=l.rstrip('\n').split('\t')
  old=current.get(int(a,16))
  if old and old!=name and re.fullmatch(r'(fn|dtor)_[0-9A-F]{8}',old): mapping[old]=name
taken=set(current.values())-set(mapping)
clash=[n for n in mapping.values() if n in taken]
if clash: raise SystemExit('names already used: %s'%clash[:5])
files=[CONFIG/'symbols.txt']
files+=[p for d in ('src','include') for p in Path(d).rglob('*') if p.suffix in ('.c','.cpp','.h','.hpp','.inc')]
files+=list(Path('tools/unknowngen').glob('*.json'))+[Path('tools/unknowngen/texttempl.py'),Path('tools/unknowngen/gen.py')]
# The generator's ignored result files, so units can be emitted again without a full cycle.
files+=list(Path('build/GDJEB2/analysis/unknowngen').glob('res*.json'))+list(Path('build/GDJEB2/analysis/unknowngen/iso').glob('res*.json'))
token=re.compile(r'\b(?:fn|dtor)_[0-9A-F]{8}\b')
changed=0
for p in files:
  s=p.read_text(encoding='latin1')
  t=token.sub(lambda m:mapping.get(m[0],m[0]),s)
  if t!=s: p.write_text(t,encoding='latin1');changed+=1
print('renamed',len(mapping),'files changed',changed)
