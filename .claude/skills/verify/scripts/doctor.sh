#!/usr/bin/env bash
# Read-only: is this checkout worth driving? Prints one line per check; exit 1 if any fails.
set -u
cd "$(git rev-parse --show-toplevel)"
fail=0
chk() { if eval "$2" >/dev/null 2>&1; then echo "ok   $1"; else echo "FAIL $1"; fail=1; fi; }
chk "python 3.8+ at /opt/homebrew/bin/python3" "/opt/homebrew/bin/python3 -c 'from typing import TypedDict'"
chk "ninja on PATH" "command -v ninja"
chk "game image under orig/GDJEB2" "ls orig/GDJEB2/sys/main.dol"
chk "pinned tools (dtk, objdiff-cli, wibo)" "test -x build/tools/dtk -a -x build/tools/objdiff-cli -a -x build/tools/wibo"
chk "build.ninja + objdiff.json present (configured)" "test -f build.ninja -a -f objdiff.json"
chk "existing DOL matches pinned SHA-1" "build/tools/dtk shasum -c config/GDJEB2/build.sha1"
echo "info branch=$(git branch --show-current) head=$(git rev-parse --short HEAD) dirty=$(git status --porcelain | wc -l | tr -d ' ')"
running=$(pgrep -fl "ninja" | grep -v pgrep || true)
[ -n "$running" ] && echo "WARN ninja already running (do not start another in this checkout): $running"
exit $fail
