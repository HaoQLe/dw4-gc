#!/usr/bin/env bash
# Publication gate for GDJEB2: configure, build every configured source unit,
# relink the DOL, check its SHA-1 and regenerate the progress report.
# Usage: .claude/skills/verify/scripts/gate.sh [label]
# Evidence: build/GDJEB2/analysis/verify/<timestamp>-<label>/
set -uo pipefail
cd "$(git rev-parse --show-toplevel)"
PY=/opt/homebrew/bin/python3
label="${1:-gate}"
out="build/GDJEB2/analysis/verify/$(date +%Y%m%d-%H%M%S)-$label"
mkdir -p "$out"
git rev-parse HEAD >"$out/head.txt"
git status --short >"$out/status.txt"

steps=""
step() {
  local name="$1"; shift
  "$@" >"$out/$name.log" 2>&1
  local rc=$?
  echo "$name exit=$rc" | tee -a "$out/summary.txt"
  steps="$steps${steps:+,}\"$name\":$rc"
  write_json "$rc"
  return $rc
}
# summary.json: {"passed":bool,"head":..,"steps":{name:exit},"sha1":..,"evidence":..}
write_json() {
  local sha=""; [ -f build/GDJEB2/main.dol ] && sha=$(shasum build/GDJEB2/main.dol | cut -d' ' -f1)
  local passed=false; [ "$1" = 0 ] && [ "${2:-}" = done ] && passed=true
  printf '{"passed":%s,"head":"%s","steps":{%s},"sha1":"%s","evidence":"%s"}\n' \
    "$passed" "$(cat "$out/head.txt")" "$steps" "$sha" "$out" >"$out/summary.json"
}

step configure "$PY" configure.py --version GDJEB2 --map || exit 1
# Drop the stamp so the checksum really reruns instead of trusting a stale "ok".
rm -f build/GDJEB2/ok
step build ninja || { tail -30 "$out/build.log"; exit 1; }
step checksum build/tools/dtk shasum -c config/GDJEB2/build.sha1 || exit 1
step report ninja all_source progress build/GDJEB2/report.json || exit 1
cp build/GDJEB2/report.json "$out/report.json"
sed -n '/^Progress:/,$p' "$out/report.log" | grep -E '^  |^Progress:' >"$out/progress.txt"
shasum build/GDJEB2/main.dol | tee "$out/dol.sha1"
write_json 0 done
cat "$out/progress.txt"
echo "evidence: $out (summary.json passed=true)"
