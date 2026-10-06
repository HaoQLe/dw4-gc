"""Compile a candidate file and verify each fn_/dtor_ function exactly against the original:
bytes with relocation fields masked must equal the DOL, and relocations (offset, type, target, addend)
must equal the original split object.
usage: fastcmp.py file.cpp [--res out.json] [--eh] [--no-sdata]"""
import json,subprocess,sys,tempfile,struct
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
import callshape,compiler,elf
from paths import RELINDEX
idx=json.load(open(RELINDEX))
def mask(b,rl):
  b=bytearray(b)
  for o,t in rl:
    w=o&~3
    if t in (4,5,6): b[o:o+2]=b'\0\0'
    elif t==109: b[w:w+4]=struct.pack('>I',struct.unpack('>I',bytes(b[w:w+4]))[0]&0xFFE00000)
    elif t==10: b[w:w+4]=struct.pack('>I',struct.unpack('>I',bytes(b[w:w+4]))[0]&0xFC000003)
    else: b[w:w+4]=b'\0\0\0\0'
  return bytes(b)
def check(src,eh=False,no_sdata=False):
  src=Path(src).resolve();tmp=Path(tempfile.mkdtemp(prefix='dw4-unknowngen-'));obj=tmp/(src.stem+'.o')
  r=subprocess.run(compiler.command(eh,no_sdata)+['-c',str(src),'-o',str(obj)],capture_output=True,text=True)
  if r.returncode: raise RuntimeError(r.stdout[-3000:])
  secs,rels,syms=elf.parse(obj)
  text=secs['.text']['data'];trel=[x for x in rels if x['section']=='.text'];res={}
  for f in syms:
    if f['type']!=2 or f['section']!='.text' or not f['name'].startswith(('fn_','dtor_')): continue
    n=f['name']
    if n not in idx: res[n]=None;continue
    mine=[(x['offset']-f['value'],x['type'],x['symbol']['name'],x['addend']) for x in trel if f['value']<=x['offset']<f['value']+f['size']]
    orig=[tuple(x) for x in idx[n]['rel']]
    ok=f['size']==idx[n]['size'] and sorted(mine)==sorted(orig)
    if ok: ok=mask(text[f['value']:f['value']+f['size']],[(o,t) for o,t,s,a in mine])==mask(callshape.rd(int(n.rsplit('_',1)[1],16),f['size']),[(o,t) for o,t,s,a in orig])
    res[n]=100.0 if ok else 0.0
  return res
if __name__=='__main__':
  res=check(sys.argv[1],'--eh' in sys.argv,'--no-sdata' in sys.argv)
  good=[n for n,v in res.items() if v==100.0]
  print('exact',len(good),sum(idx[n]['size'] for n in good),'bad',len(res)-len(good),[n for n,v in res.items() if v!=100.0][:15])
  if '--res' in sys.argv: json.dump(res,open(sys.argv[sys.argv.index('--res')+1],'w'))
