#!/bin/zsh
# Full regeneration: generate candidates (both flow argument strategies), check them under every
# compiler profile, emit units, verify each new or changed unit, sync splits, configure and build.
# Run after a normal build and report; see README.md.
set -e -o pipefail
cd "$(git -C "$(dirname "$0")" rev-parse --show-toplevel)"
R=build/GDJEB2/analysis/unknowngen
PY=/opt/homebrew/bin/python3
SPECS=("sdata:" "nosdata:--no-sdata" "speed:--speed" "nosdata,speed:--no-sdata --speed" "nosdata,lmw:--no-sdata --lmw" "lmw:--lmw")
$PY tools/unknowngen/gen.py 80000000 80420000 $R/candB.cpp --calls --flow-regs-all | cut -c1-60
for spec in $SPECS; do name=${spec%%:*}; flags=${spec#*:}; $PY tools/unknowngen/fastcmp.py $R/candB.cpp ${=flags} --res $R/resB-${name//,/-}.json | cut -c1-50; done
$PY tools/unknowngen/gen.py 80000000 80420000 $R/cand.cpp --calls | cut -c1-60
P=""
for spec in $SPECS; do
  name=${spec%%:*}; flags=${spec#*:}; f=$R/res-${name//,/-}.json
  $PY tools/unknowngen/fastcmp.py $R/cand.cpp ${=flags} --res $f | cut -c1-50
  P="$P $name=$f"
done
# Functions exact only with register arguments use that strategy (recorded in flow_regs.json).
$PY - <<'PYEOF'
import json,glob
from pathlib import Path
R='build/GDJEB2/analysis/unknowngen'
A=set();B=set()
for f in glob.glob(R+'/res-*.json'): A|={k for k,v in json.load(open(f)).items() if v==100}
for f in glob.glob(R+'/resB-*.json'): B|={k for k,v in json.load(open(f)).items() if v==100}
old=set(json.load(open('tools/unknowngen/flow_regs.json')))
new=sorted(old|(B-A))
Path('tools/unknowngen/flow_regs.json').write_text(json.dumps(new,indent=1)+'\n')
print('flow_regs',len(new),'added',len(B-A-old))
PYEOF
$PY tools/unknowngen/gen.py 80000000 80420000 $R/cand.cpp --calls | cut -c1-60
P=""
for spec in $SPECS; do
  name=${spec%%:*}; flags=${spec#*:}; f=$R/res-${name//,/-}.json
  $PY tools/unknowngen/fastcmp.py $R/cand.cpp ${=flags} --res $f | cut -c1-50
  P="$P $name=$f"
done
cp $R/res-sdata.json $R/res.json; cp $R/res-nosdata.json $R/resnosdata.json; cp $R/res-speed.json $R/resspeed.json; cp $R/res-nosdata-speed.json $R/resnosdataspeed.json; cp $R/res-nosdata-lmw.json $R/resnosdatalmw.json; cp $R/res-lmw.json $R/reslmw.json
for attempt in 1 2 3; do
  $PY tools/unknowngen/emit.py ${=P} 80020400 800A0000 Alchemy/src/unknownGen | tail -1
  $PY tools/unknowngen/emit.py ${=P} 80000000 80020400 unknownGen | tail -1
  $PY tools/unknowngen/emit.py ${=P} 800A0000 80420000 unknownGen | tail -1
  if $PY tools/unknowngen/verify_units.py; then break; fi
  $PY - <<'PYEOF'
import json
from pathlib import Path
ex=json.load(open('tools/unknowngen/exclude.json'))
for l in open('build/GDJEB2/analysis/unknowngen/verify-fail.txt'):
  p,fs=l.rstrip('\n').split('\t')
  for f in fs.split(','):
    if f and not f.startswith('compile'): ex.setdefault(f,'inexact when compiled in its emitted unit')
Path('tools/unknowngen/exclude.json').write_text(json.dumps(ex,indent=1,sort_keys=True)+'\n')
PYEOF
done
$PY tools/unknowngen/apply.py
$PY configure.py --version GDJEB2 --map >/dev/null 2>&1
/opt/homebrew/bin/ninja 2>&1 | tee $R/ninja.log | grep -E "OK$|FAILED|did NOT" || true
