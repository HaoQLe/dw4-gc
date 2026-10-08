"""Isolation steps of cycle.sh: candidates exact under no strategy are retried generated alone
(gen.isolated), so other functions' prototype needs cannot constrain them.
usage: isolate.py names            write the candidates the final pass left inexact to iso/try.json
       isolate.py check PREFIX TAG compile PREFIX-*.cpp under every profile into iso/resTAG-PROFILE.json
       isolate.py merge            record functions exact alone in isolated.json (and their strategy)
       isolate.py res              add the final isolated results to res-PROFILE.json"""
import glob,json,sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
from paths import ANALYSIS,HERE
ISO=ANALYSIS/'iso'
PROFILES={'sdata':(0,0,0),'nosdata':(1,0,0),'speed':(0,1,0),'nosdata-speed':(1,1,0),'nosdata-lmw':(1,0,1),'lmw':(0,0,1)}
def exact(pattern):
  s=set()
  for f in glob.glob(str(pattern)): s|={k for k,v in json.load(open(f)).items() if v==100}
  return s
step=sys.argv[1]
if step=='names':
  _argv=sys.argv;sys.argv=['gen','--calls']
  import gen
  sys.argv=_argv
  ISO.mkdir(parents=True,exist_ok=True)
  for f in ISO.glob('*'): f.unlink()
  ok=exact(ANALYSIS/'res-*.json')
  names=[n for n in gen.select(0x80000000,0x80420000) if n not in ok and gen.kind(n,True)]
  json.dump(names,open(ISO/'try.json','w'))
  print('isolation candidates',len(names))
elif step=='check':
  import subprocess,tempfile,fastcmp,compiler
  _argv=sys.argv;sys.argv=['gen','--calls']
  import gen
  sys.argv=_argv
  prefix,tag=sys.argv[2],sys.argv[3]
  for f in glob.glob(prefix+'-*.cpp'): Path(f).unlink()
  tmp=Path(tempfile.mkdtemp(prefix='dw4-unknowngen-'))
  def compiles(group,k):
    c=tmp/('g%d.cpp'%k);c.write_text(gen.assemble_packed(group))
    return subprocess.run(compiler.command()+['-c',str(c),'-o',str(tmp/('g%d.o'%k))],capture_output=True).returncode==0
  def split(group,k):
    """A function that does not compile alone is dropped; a group that fails is halved."""
    if compiles(group,k): return [group]
    if len(group)==1: return []
    h=len(group)//2
    return split(group[:h],k)+split(group[h:],k)
  groups=json.load(open(prefix+'.json'))
  with ThreadPoolExecutor(8) as ex: parts=list(ex.map(lambda a:split(*a),[(g,k) for k,g in enumerate(groups)]))
  files=[]
  for g in (g for ps in parts for g in ps):
    f='%s-%d.cpp'%(prefix,len(files));Path(f).write_text(gen.assemble_packed(g));files.append(f)
  def one(a):
    f,p=a
    try: return p,fastcmp.check(f,False,*PROFILES[p])
    except Exception: return p,{}
  res={p:{} for p in PROFILES}
  with ThreadPoolExecutor(8) as ex:
    for p,r in ex.map(one,[(f,p) for f in files for p in PROFILES]): res[p].update(r)
  for p,r in res.items(): json.dump(r,open(ISO/('res%s-%s.json'%(tag,p)),'w'))
  print(tag,'files',len(files),'exact',len({n for r in res.values() for n,v in r.items() if v==100}))
elif step=='merge':
  A,B,V,T,LP,LL,LPL=(exact(ISO/('res%s-*.json'%t)) for t in ('I','IB','IV','IT','IP','IL','IPL'))
  iso=set(json.load(open(HERE/'isolated.json'))) if (HERE/'isolated.json').exists() else set()
  regs=set(json.load(open(HERE/'flow_regs.json')))
  cf=json.load(open(HERE/'flow_cf.json'))
  lp=json.load(open(HERE/'flow_loop.json')) if (HERE/'flow_loop.json').exists() else {}
  new=(A|B|V|T|LP|LL|LPL)-iso
  # Strategy as in cycle.sh: register arguments if only that works, else a join strategy, else a loop variant.
  for n in sorted(new):
    if n in A: continue
    if n in B: regs.add(n)
    elif n in V|T:
      if n not in cf: cf[n]='var' if n in V else 'this'
    else: lp[n]='param' if n in LP else 'last' if n in LL else 'param,last'
  (HERE/'isolated.json').write_text(json.dumps(sorted(iso|new),indent=1)+'\n')
  (HERE/'flow_regs.json').write_text(json.dumps(sorted(regs),indent=1)+'\n')
  (HERE/'flow_cf.json').write_text(json.dumps(cf,indent=1,sort_keys=True)+'\n')
  (HERE/'flow_loop.json').write_text(json.dumps(lp,indent=1,sort_keys=True)+'\n')
  print('isolated',len(iso|new),'added',len(new))
elif step=='res':
  for p in PROFILES:
    f=ANALYSIS/('res-%s.json'%p);r=json.load(open(f))
    r.update(json.load(open(ISO/('resF-%s.json'%p))))
    json.dump(r,open(f,'w'))
  print('isolated exact',len(exact(ISO/'resF-*.json')))
