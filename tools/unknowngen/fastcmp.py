"""Compile a candidate file and verify each fn_/dtor_ function exactly against the original:
bytes with relocation fields masked must equal the DOL, and relocations (offset, type, target, addend)
must equal the original split object.
usage: fastcmp.py file.cpp [--res out.json] [--eh] [--no-sdata] [--speed] [--lmw]"""
import json,re,subprocess,sys,tempfile,struct
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
import callshape,compiler,elf
from paths import CONFIG,RELINDEX
idx=json.load(open(RELINDEX))
# Original jump tables: name -> (address, size).
JT={m[1]:(int(m[2],16),int(m[3],16)) for m in re.finditer(r'(jumptable_\w+) = \.data:0x([0-9A-F]+); // type:object size:0x([0-9A-F]+)',(CONFIG/'symbols.txt').read_text())}
def mask(b,rl):
  b=bytearray(b)
  for o,t in rl:
    w=o&~3
    if t in (4,5,6): b[o:o+2]=b'\0\0'
    elif t==109: b[w:w+4]=struct.pack('>I',struct.unpack('>I',bytes(b[w:w+4]))[0]&0xFFE00000)
    elif t==10: b[w:w+4]=struct.pack('>I',struct.unpack('>I',bytes(b[w:w+4]))[0]&0xFC000003)
    else: b[w:w+4]=b'\0\0\0\0'
  return bytes(b)
def check(src,eh=False,no_sdata=False,speed=False,lmw=False):
  src=Path(src).resolve();tmp=Path(tempfile.mkdtemp(prefix='dw4-unknowngen-'));obj=tmp/(src.stem+'.o')
  r=subprocess.run(compiler.command(eh,no_sdata,speed,lmw)+['-c',str(src),'-o',str(obj)],capture_output=True,text=True)
  if r.returncode: raise RuntimeError(r.stdout[-3000:])
  secs,rels,syms=elf.parse(obj)
  text=secs['.text']['data'];trel=[x for x in rels if x['section']=='.text'];res={}
  for f in syms:
    if f['type']!=2 or f['section']!='.text' or not f['name'].startswith(('fn_','dtor_')): continue
    n=f['name']
    if n not in idx: res[n]=None;continue
    mine=[(x['offset']-f['value'],x['type'],x['symbol']['name'],x['addend']) for x in trel if f['value']<=x['offset']<f['value']+f['size']]
    orig=[tuple(x) for x in idx[n]['rel']]
    # A jump table: the compiler's local table in .data stands for the original jumptable_ object if its
    # entries point at the same offsets in the function.
    jt={}
    for x in trel:
      sy=x['symbol']
      if f['value']<=x['offset']<f['value']+f['size'] and sy['section']=='.data' and sy['name'].startswith('@'): jt[sy['name']]=sy
    if jt:
      on=sorted({s_ for o,t,s_,a in orig if s_.startswith('jumptable_')})
      if len(on)!=len(jt): res[n]=0.0;continue
      ok_=True
      for (mn,sy),o_ in zip(sorted(jt.items(),key=lambda kv:kv[1]['value']),on):
        oa=JT[o_]
        ent=[struct.unpack('>I',callshape.rd(oa[0],oa[1])[k:k+4])[0]-int(n.rsplit('_',1)[1],16) for k in range(0,oa[1],4)]
        dr={x['offset']:x for x in rels if x['section']=='.data' and sy['value']<=x['offset']<sy['value']+sy['size']}
        me=[]
        for k in range(0,sy['size'],4):
          x=dr.get(sy['value']+k)
          if not x or x['type']!=1: me=None;break
          me.append(x['addend']-f['value'] if x['symbol']['type']==3 and x['symbol']['section']=='.text' else x['addend'] if x['symbol']['name']==n else None)
        ok_&=sy['size']==oa[1] and me==ent
        mine=[(a,t,o_ if s_==mn else s_,ad) for a,t,s_,ad in mine]
      if not ok_: res[n]=0.0;continue
    ok=f['size']==idx[n]['size'] and sorted(mine)==sorted(orig)
    if ok: ok=mask(text[f['value']:f['value']+f['size']],[(o,t) for o,t,s,a in mine])==mask(callshape.rd(int(n.rsplit('_',1)[1],16),f['size']),[(o,t) for o,t,s,a in orig])
    res[n]=100.0 if ok else 0.0
  return res
if __name__=='__main__':
  res=check(sys.argv[1],'--eh' in sys.argv,'--no-sdata' in sys.argv,'--speed' in sys.argv,'--lmw' in sys.argv)
  good=[n for n,v in res.items() if v==100.0]
  print('exact',len(good),sum(idx[n]['size'] for n in good),'bad',len(res)-len(good),[n for n,v in res.items() if v!=100.0][:15])
  if '--res' in sys.argv: json.dump(res,open(sys.argv[sys.argv.index('--res')+1],'w'))
