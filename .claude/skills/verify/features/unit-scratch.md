# Unit scratch compile and strict diff

Compiles one configured source unit with its exact generated compiler rule
into a private temp dir, then runs strict objdiff
(`functionRelocDiffs=data_value`) and the repo's exact object verifier against
the original split object. This is the inner matching loop. It never touches
the shared `build/`.

## Sub-features

- `objdiff`: per-section and per-function match percentages.
- `exact`: `verify_objects`, which checks allocated bytes, section metadata, function symbols (size, binding, type) and relocations.
- `cross-worktree`: `--source <file>` compiles a same-named file from another worktree against this checkout's flags.

## How to get to it (user POV)

- `.claude/skills/verify/scripts/unit.sh <unit>`, the wrapper that saves evidence.
- `/opt/homebrew/bin/python3 tools/decomp.py scratch <unit> [--keep] [--source <path>]`.

## Driving it with shell

Preconditions: baseline from the README; the unit has `source_path` in `objdiff.json`.

- **Clean exact unit:** `.claude/skills/verify/scripts/unit.sh main/Alchemy/src/Meta/igIntMetaField`
  → `exact: 60 allocated bytes; 1 functions; 3 relocations`, `exit=0`.
- **In-progress unit:** same command on your unit. Non-100% sections and
  functions are printed. The full table is in the evidence file. Iterate
  until `exact:` appears.
- **Inspect the candidate object:** `decomp.py scratch <unit> --keep` prints
  `retained: <tmpdir>`. The `.o` and `objdiff.json` are there. Delete that
  dir when done.

## Gotchas

- **Exit 1 at 100% objdiff can be a known metadata exception, not a code
  mismatch.** Observed on 2026-11-07 for already-linked, checksum-proven units:
  - `main/Game/Bec/beNDMWMdlItem`: `allocated section extab metadata differs`.
    Weak-destructor exception tables; see PROGRESS.md on extab accounting.
    The objdiff table also shows `@etb_*` / `@eti_*` at 0% while `.text`,
    `extab` and `extabindex` sections are 100%.
  - `main/dolsdk2004/card/CARDCheck`: `function symbols differ ... ('VerifyDir', ..., 1, ...)
    vs (..., 0, ...)`. A symbol binding difference (original local, candidate global).
  Treat these as needing the full-build checksum plus an explicit note. Never
  wave through an unexplained one: compare against the unit's history in
  PROGRESS.md / `git log -- <src>` first.
- Short selectors are often ambiguous (`error: unit selector ... is ambiguous`).
  Use the full name from `objdiff.json`.
- Units without `source_path` raise `has no configured source`. Add the unit
  to `configure.py` first.
