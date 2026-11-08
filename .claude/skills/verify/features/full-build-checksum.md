# Full build and DOL checksum

Builds every configured unit, links `build/GDJEB2/main.dol` from the
`Matching` source objects plus original objects for everything else, and
checks that its SHA-1 equals `config/GDJEB2/build.sha1`
(`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`). This is the completion gate
for every matching change.

## Sub-features

- `configure`: regenerate `build.ninja` / `objdiff.json` from `configure.py` and `config/GDJEB2/`.
- `link`: relink `main.dol` from the current Matching set.
- `checksum`: `dtk shasum` against the pinned SHA-1.
- `all-source`: compile every configured source unit, including NonMatching ones.

## How to get to it (user POV)

- `ninja` (default target `progress`, which depends on `build/GDJEB2/ok`, the checksum stamp).
- `ninja build/GDJEB2/ok` for just link + checksum.
- `.claude/skills/verify/scripts/gate.sh <label>`, which runs all of the above plus the report.

## Driving it with shell

Preconditions: baseline from the README; nothing else is building in this checkout.

- **Run the gate:** `.claude/skills/verify/scripts/gate.sh <label>` →
  `summary.txt` lists `configure exit=0`, `build exit=0`, `checksum exit=0`,
  `report exit=0`. The script prints `dol.sha1` with
  `e409a88a…d877  build/GDJEB2/main.dol` and the evidence directory.
- **Checksum only, read-only:** `build/tools/dtk shasum -c config/GDJEB2/build.sha1`
  → `./build/GDJEB2/main.dol: OK`, exit 0.
- **Prove a link change:** flip the unit to `Matching` in `configure.py`, run
  `gate.sh <task>`. Failure is `checksum exit=1` (`FAILED` in
  `checksum.log`). Revert the flip if it fails.

## Gotchas

- `build/GDJEB2/ok` is a ninja stamp. If nothing is dirty, `ninja` will not
  re-run the check. `gate.sh` deletes the stamp first so the checksum
  always runs. A bare `ninja` after a manual `.o` edit may not.
- `configure.py` prints `Missing configuration for auto_*` and a
  `FILE_POS.C` case-mismatch warning every run. Both are normal.
- A NonMatching unit compiling is not proof. Its code still comes from the
  original object, so the checksum passing says nothing about it.
- A cold build (fresh clone or `build/` wiped) compiles thousands of units
  under wibo. Run it in the background and expect minutes, not seconds.
