#!/usr/bin/env bash
# Private compile + strict objdiff + exact object check for ONE configured unit.
# Touches no shared build output; safe beside a running ninja.
# Exit: 0 exact | 1 mismatch | 2 tool/input error | 3 metadata-only (needs the DOL checksum)
# Also writes <evidence>.json (decomp.py scratch --json) next to the text log.
# Usage: .claude/skills/verify/scripts/unit.sh <full unit name, e.g. main/Game/Bec/beNDMWMdlItem>
# Evidence: build/GDJEB2/analysis/verify/units/<unit with / -> _>-<timestamp>.txt
set -uo pipefail
cd "$(git rev-parse --show-toplevel)"
unit="${1:?unit name required (see features/unit-scratch.md)}"
out="build/GDJEB2/analysis/verify/units"
mkdir -p "$out"
file="$out/${unit//\//_}-$(date +%Y%m%d-%H%M%S).txt"
{ echo "unit: $unit"; echo "head: $(git rev-parse HEAD)"; } >"$file"
/opt/homebrew/bin/python3 tools/decomp.py scratch "$unit" >>"$file" 2>&1
rc=$?
if [ $rc -ne 2 ]; then
  /opt/homebrew/bin/python3 tools/decomp.py scratch --json "$unit" >"${file%.txt}.json" 2>/dev/null
fi
echo "exit=$rc" >>"$file"
grep -vE ': 100(\.0)?%$' "$file"   # show only non-100% lines, errors and the verdict
echo "evidence: $file"
exit $rc
