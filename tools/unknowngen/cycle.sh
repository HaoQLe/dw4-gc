#!/bin/zsh
# Full regeneration: refresh definition signatures, generate candidates (both flow argument strategies), check them under every
# compiler profile, emit units, verify each new or changed unit, sync splits, configure and build.
# Run after a normal build and report; see README.md.
set -e -o pipefail
cd "$(git -C "$(dirname "$0")" rev-parse --show-toplevel)"
R=build/GDJEB2/analysis/unknowngen
PY=/opt/homebrew/bin/python3
SPECS=("sdata:" "nosdata:--no-sdata" "speed:--speed" "nosdata,speed:--no-sdata --speed" "nosdata,lmw:--no-sdata --lmw" "lmw:--lmw")
find $R -maxdepth 1 -name "res[BVT-]*-*.json" -delete
# Signature pass: record each generated definition's signature (seeded by the previous record), so
# callers earlier in address order declare it the way the definition does.
$PY tools/unknowngen/gen.py 80000000 80420000 $R/cand.cpp --calls --sigs-out=tools/unknowngen/signatures.json | cut -c1-60
# Candidates under each strategy: default, every set argument register passed (B), and branch joins
# kept in variables (V) or returning an untouched first parameter (T).
$PY tools/unknowngen/gen.py 80000000 80420000 $R/candB.cpp --calls --flow-regs-all | cut -c1-60 &
$PY tools/unknowngen/gen.py 80000000 80420000 $R/cand.cpp --calls | cut -c1-60 &
$PY tools/unknowngen/gen.py 80000000 80420000 $R/candV.cpp --calls --cf=var | cut -c1-60 &
$PY tools/unknowngen/gen.py 80000000 80420000 $R/candT.cpp --calls --cf=this | cut -c1-60 &
wait
for c in candB:resB cand:res candV:resV candT:resT; do
  for spec in $SPECS; do name=${spec%%:*}; flags=${spec#*:}; $PY tools/unknowngen/fastcmp.py $R/${c%%:*}.cpp ${=flags} --res $R/${c#*:}-${name//,/-}.json | cut -c1-50 & done
  wait
done
# Functions exact only with register arguments use that strategy (recorded in flow_regs.json);
# branchy functions exact only with another join strategy record it in flow_cf.json.
$PY - <<'PYEOF'
import json,glob
from pathlib import Path
R='build/GDJEB2/analysis/unknowngen'
def ok(p):
  s=set()
  for f in glob.glob(R+'/'+p+'-*.json'): s|={k for k,v in json.load(open(f)).items() if v==100}
  return s
A,B,V,T=ok('res'),ok('resB'),ok('resV'),ok('resT')
old=set(json.load(open('tools/unknowngen/flow_regs.json')))
new=sorted(old|(B-A))
Path('tools/unknowngen/flow_regs.json').write_text(json.dumps(new,indent=1)+'\n')
print('flow_regs',len(new),'added',len(B-A-old))
cf=json.load(open('tools/unknowngen/flow_cf.json')) if Path('tools/unknowngen/flow_cf.json').exists() else {}
for n in sorted((V|T)-A-B):
  if n not in cf: cf[n]='var' if n in V else 'this'
Path('tools/unknowngen/flow_cf.json').write_text(json.dumps(cf,indent=1,sort_keys=True)+'\n')
print('flow_cf',len(cf))
PYEOF
$PY tools/unknowngen/gen.py 80000000 80420000 $R/cand.cpp --calls | cut -c1-60
P=""
for spec in $SPECS; do
  name=${spec%%:*}; flags=${spec#*:}; f=$R/res-${name//,/-}.json
  $PY tools/unknowngen/fastcmp.py $R/cand.cpp ${=flags} --res $f | cut -c1-50
  P="$P $name=$f"
done
# Candidates not exact in the final pass are retried generated alone, under each strategy; those exact
# alone are recorded in isolated.json, generated without other functions' prototype needs and emitted
# as units of their own.
$PY tools/unknowngen/isolate.py names
for st in "I:" "IB:--flow-regs-all" "IV:--cf=var" "IT:--cf=this"; do
  $PY tools/unknowngen/gen.py --isolate $R/iso/try.json $R/iso/cand${st%%:*} --calls ${=st#*:} | cut -c1-60
  $PY tools/unknowngen/isolate.py check $R/iso/cand${st%%:*} ${st%%:*}
done
$PY tools/unknowngen/isolate.py merge
$PY tools/unknowngen/gen.py --isolate tools/unknowngen/isolated.json $R/iso/candF --calls | cut -c1-60
$PY tools/unknowngen/isolate.py check $R/iso/candF F
$PY tools/unknowngen/isolate.py res
cp $R/res-sdata.json $R/res.json; cp $R/res-nosdata.json $R/resnosdata.json; cp $R/res-speed.json $R/resspeed.json; cp $R/res-nosdata-speed.json $R/resnosdataspeed.json; cp $R/res-nosdata-lmw.json $R/resnosdatalmw.json; cp $R/res-lmw.json $R/reslmw.json
for attempt in 1 2 3 4; do
  $PY tools/unknowngen/emit.py ${=P} 80020400 800A0000 Alchemy/src/unknownGen | tail -1
  $PY tools/unknowngen/emit.py ${=P} 80000000 80020400 unknownGen | tail -1
  $PY tools/unknowngen/emit.py ${=P} 800A0000 80420000 unknownGen | tail -1
  if $PY tools/unknowngen/verify_units.py; then break; fi
  $PY - <<'PYEOF'
import json
from pathlib import Path
ex=json.load(open('tools/unknowngen/exclude.json'))
iso=set(json.load(open('tools/unknowngen/isolated.json')))
for l in open('build/GDJEB2/analysis/unknowngen/verify-fail.txt'):
  p,fs=l.rstrip('\n').split('\t')
  for f in fs.split(','):
    if f and not f.startswith('compile') and f in iso: ex.setdefault(f,'inexact when compiled in its emitted unit')
    elif f and not f.startswith('compile'): iso.add(f)
Path('tools/unknowngen/exclude.json').write_text(json.dumps(ex,indent=1,sort_keys=True)+'\n')
# A function inexact in its emitted unit is first retried alone; inexact alone, it is excluded.
Path('tools/unknowngen/isolated.json').write_text(json.dumps(sorted(iso),indent=1)+'\n')
PYEOF
done
$PY tools/unknowngen/apply.py
$PY configure.py --version GDJEB2 --map >/dev/null 2>&1
/opt/homebrew/bin/ninja 2>&1 | tee $R/ninja.log | grep -E "OK$|FAILED|did NOT" || true
