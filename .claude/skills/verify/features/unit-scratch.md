# Unit scratch compile and strict diff

Compiles one configured source unit with its exact generated compiler rule
into a private temp dir, then runs strict objdiff
(`functionRelocDiffs=data_value`) and the repo's exact object verifier against
the original split object. This is the inner matching loop. It never touches
the shared `build/`.

## Sub-features

- `objdiff`: per-section and per-function match percentages.
- `exact`: `verify_objects`, which checks allocated bytes, section metadata, function symbols (size, binding, type) and relocations.
- `classify`: separates metadata-only differences (exit 3) from real mismatches (exit 1). See the exit-code table in `SKILL.md`.
- `json`: `--json` prints `{unit, status, exit_code, detail, ignored, allocated_bytes, ..., sections, functions_below_100}`.
- `cross-worktree`: `--source <file>` compiles a same-named file from another worktree against this checkout's flags.

## How to get to it (user POV)

- `.claude/skills/verify/scripts/unit.sh <unit>`, the wrapper that saves evidence.
- `/opt/homebrew/bin/python3 tools/decomp.py scratch <unit> [--keep] [--source <path>]`.

## Driving it with shell

Preconditions: baseline from the README; the unit has `source_path` in `objdiff.json`.

- **Clean exact unit:** `.claude/skills/verify/scripts/unit.sh main/Alchemy/src/Meta/igIntMetaField`
  → `exact: 60 allocated bytes in 1 sections; 1 functions; 3 relocations`, `exit=0`.
- **Metadata-only unit:** `.claude/skills/verify/scripts/unit.sh main/dolsdk2004/card/CARDCheck`
  → `metadata-only: 3944 allocated bytes ...`, `ignored: symbol-binding`, `exit=3`.
- **In-progress unit:** same command on your unit. Non-100% sections and
  functions are printed. The full table is in the evidence file. Iterate
  until `exact:` appears.
- **Inspect the candidate object:** `decomp.py scratch <unit> --keep` prints
  `retained: <tmpdir>`. The `.o` and `objdiff.json` are there. Delete that
  dir when done.

## Gotchas

- **Exit 3 shows up on units that are already linked and checksum-proven.**
  Known cases, checked on 2026-11-07:
  - `main/Game/Bec/beNDMWMdlItem`: `ignored: section-order, local-label-names`.
    The original orders `extab`/`extabindex` before `.text` and names its
    exception labels `@etb_*`/`@eti_*`, where MWCC emits `@195`... objdiff
    shows those labels at 0% while all three sections are 100%.
  - `main/dolsdk2004/card/CARDCheck`: `ignored: symbol-binding`. `VerifyDir`,
    `VerifyFAT` and `VerifyID` are global in the original object and local
    (static) in the source.
  Exit 3 still needs `gate.sh` after linking. A *new* exit 3 deserves a note
  in PROGRESS.md saying which `ignored` item it was.
- Short selectors are often ambiguous (`error: unit selector ... is ambiguous`).
  Use the full name from `objdiff.json`.
- Units without `source_path` raise `has no configured source`. Add the unit
  to `configure.py` first.
