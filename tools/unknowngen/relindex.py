"""Index each original function's size and relocations (offset, type, target, addend) from the split target objects.
usage: relindex.py   (after a normal build; writes build/<version>/analysis/unknowngen/relindex.json)"""
import json,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
import elf
from paths import RELINDEX
index={}
etb_refs=set()
for u in json.load(open('objdiff.json'))['units']:
  p=u.get('target_path')
  if not p or not Path(p).exists(): continue
  try: secs,rels,syms=elf.parse(p)
  except Exception: continue
  rel=[x for x in rels if x['section']=='.text']
  # Exception-table entries referenced from outside extab/extabindex cannot move into a recompiled unit.
  etb_refs.update(x['symbol']['name'] for x in rels if x['section'] not in ('extab','extabindex') and x['symbol']['name'].startswith('@etb_'))
  for f in syms:
    if f['type']!=2 or f['section']!='.text': continue
    lst=[(x['offset']-f['value'],x['type'],x['symbol']['name'],x['addend']) for x in rel if f['value']<=x['offset']<f['value']+f['size']]
    index[f['name']]={'obj':p,'size':f['size'],'rel':sorted(lst)}
RELINDEX.parent.mkdir(parents=True,exist_ok=True)
index['@etb_refs']=sorted(etb_refs)
json.dump(index,open(RELINDEX,'w'))
print('functions',len(index))
