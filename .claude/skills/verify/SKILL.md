---
name: verify
description: Prove a change to the Digimon World 4 GameCube decomp (dw4-gc, version GDJEB2) is exact. Drives the real matching toolchain (configure.py, ninja, dtk, objdiff-cli, MWCC under wibo) to compile units, strict-diff them against the original objects, relink main.dol and check its pinned SHA-1. Use before claiming any source/split/symbol/config change matches, before committing or integrating into `work`, and whenever a build or match result looks off.
---

# Verify dw4-gc

The "app" is the matching build. There is no UI: the user-facing surface is
the toolchain's output — per-unit object equality and a byte-identical
`main.dol`. `AGENTS.md` defines what counts as complete; this skill is how
to produce the evidence it demands. Run every command from the repo root.

**Python:** always `/opt/homebrew/bin/python3`. The login shell's Python 3.7
fails importing `TypedDict` and is not a game-code bug.

## Doctor (run first, and whenever anything looks off)

```sh
.claude/skills/verify/scripts/doctor.sh
```

Read-only. Checks Python, ninja, the game image in `orig/GDJEB2/`, the
pinned tools in `build/tools/`, that the checkout is configured, and that the
current `build/GDJEB2/main.dol` matches `config/GDJEB2/build.sha1`. Prints
branch/HEAD/dirty count and warns if a ninja is already running. A `FAIL` on
the image or tools is a missing input: report it, don't debug game code.

## Launch

No server. "Launch" = configure + full build, which is idempotent and fast
when up to date (~2 s); a cold build compiles thousands of units under wibo
and takes much longer — run it in the background.

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
ninja                       # default target `progress`: builds, links, CHECKs the SHA-1, prints progress
```

Ready = `ninja` exits 0 and `build/tools/dtk shasum -c config/GDJEB2/build.sha1`
prints `./build/GDJEB2/main.dol: OK`. `configure.py` prints
`Missing configuration for auto_*` and a `FILE_POS.C` case-mismatch warning
on every run; both are normal.

## Drive

Pick the narrowest feature that proves the claim, then always finish with the
gate before calling anything complete. Full recipes live in
[features/README.md](features/README.md).

| Claim | Command |
|---|---|
| one unit's source compiles to the original object | `.claude/skills/verify/scripts/unit.sh main/<path/without/ext>` |
| two existing objects are exact | `/opt/homebrew/bin/python3 tools/decomp.py verify <target.o> <candidate.o>` |
| generated `unknownGen` units still match | `/opt/homebrew/bin/python3 tools/unknowngen/verify_units.py [--all]` |
| whole build is exact (publication gate) | `.claude/skills/verify/scripts/gate.sh <label>` |
| what to work on next | `/opt/homebrew/bin/python3 tools/decomp.py rank --limit 30` |

`unit.sh`, `decomp.py scratch` and `decomp.py verify` share exit codes, and
`--json` on the last two prints the same verdict as JSON:

| Exit | Status | Meaning | Next step |
|---|---|---|---|
| 0 | `exact` | bytes, sections, symbols, relocations identical | link it, run `gate.sh` |
| 1 | `mismatch` | bytes, section attributes, function extents or relocation targets differ | keep iterating |
| 2 | `error` | bad selector, missing file, compiler failure | fix the input, not the code |
| 3 | `metadata` | identical except section order, symbol binding or compiler-local `@` label names (`ignored` lists which) | link it; only `gate.sh` checksum can accept it |

## Isolation

- `unit.sh` / `decomp.py scratch` compile into a private temp dir and touch no
  shared output: safe to run in parallel with each other and with a ninja.
- `ninja`, `gate.sh` and `verify_units.py` write the shared `build/` of this
  checkout. **Never run two of them at once in one checkout**; if doctor warns
  a ninja is running, wait or use another worktree.
- Parallel workers use separate checkouts (`git worktree list` shows
  `../dw4-worker-{a,b,c}`), each with its own `build/` and `orig/`. Follow
  `docs/decomp/parallel-workflow.md`; don't drive another worker's checkout.

## Evidence

All proofs go under `build/GDJEB2/analysis/verify/` (git-ignored, never
committed):

- `gate.sh` → `<timestamp>-<label>/`: `head.txt`, `status.txt`, one log per
  step, `summary.txt` (per-step exit codes), `dol.sha1`, `report.json`,
  `progress.txt`.
- `gate.sh` also writes `summary.json`:
  `{"passed", "head", "steps": {name: exit}, "sha1", "evidence"}`. `passed`
  is true only when every step ran and exited 0.
- `unit.sh` → `units/<unit>-<timestamp>.txt` (full per-section/per-function
  objdiff percentages, verdict, exit code) and a `.json` twin from
  `decomp.py scratch --json`.

Proof standards for this repo:

- **Exact, not fuzzy.** A unit is proven only by exit 0 (`exact`) or exit 3
  (`metadata`) **plus** the DOL SHA-1 after linking it. Exit 3 is never
  enough on its own. 100% objdiff alone is investigation evidence.
- **Link, then checksum.** Enabling `Matching` in `configure.py` is the change
  under test; prove it by `gate.sh` reporting `checksum exit=0`. Never edit
  `build.sha1`, compiler pins or flags to make a check pass.
- **Record the before/after.** Run `gate.sh baseline` before editing game
  source and `gate.sh <task>` after; diff the two `report.json` /
  `progress.txt` for matched/linked byte deltas required in `PROGRESS.md`.
- **Inspect what's staged.** Before a commit, `git status --short` must show no
  `orig/`, `build/`, `.s`, `.o`, `.dol` or RAM-dump files.

## Cleanup

- `unit.sh` keeps nothing outside the evidence file. If you ran
  `decomp.py scratch --keep`, delete exactly the `retained: <dir>` it printed
  (`rm -rf <that dir>`), nothing broader.
- Stop only processes you started (the background task / PID you launched).
  Never `pkill ninja` or kill by name: another worker may own it.
- Leave `build/GDJEB2/analysis/verify/` in place; it is the proof.
- If an experiment left `configure.py` set to `Matching` for an inexact unit,
  revert that line and rerun `gate.sh` so the tree ends on a passing state.
