# Progress report and target ranking

Regenerates `build/GDJEB2/report.json` with objdiff-cli. It reports matched
code, linked code, matched data and function counts per category. The
ranking then lists actionable units. These are the numbers PROGRESS.md
records before and after each batch.

## Sub-features

- `report`: `ninja all_source progress build/GDJEB2/report.json`.
- `baseline-diff`: `ninja baseline`, then `ninja changes`, for regressions against a saved baseline.
- `rank`: `decomp.py rank`, with partial units first, then missing and unlinked.

## How to get to it (user POV)

- `.claude/skills/verify/scripts/gate.sh <label>` saves `report.json` and `progress.txt` per run.
- `ninja all_source progress build/GDJEB2/report.json`.
- `/opt/homebrew/bin/python3 tools/decomp.py rank --limit 30 [--kind partial|missing|unlinked] [--json]`.

## Driving it with shell

Preconditions: baseline from the README.

- **Before/after deltas:** `gate.sh baseline` before editing, then
  `gate.sh <task>` after. Compare the two `progress.txt` files (and
  `report.json` `measures`) for matched and linked code bytes and percentages.
- **Regression check:** `ninja baseline` before editing. After the change,
  `ninja changes` should list only intended improvements.
- **Next targets:** `rank --limit 30` prints a TSV of
  `KIND TOTAL MATCHED UNMATCHED FUZZY FUNCTIONS UNIT`.

## Gotchas

- Matched data can drop while the DOL stays exact. Exception tables holding
  discarded weak destructors never count as matched (see PROGRESS.md). Check
  `build.sha1` before calling it a regression.
- `rank` reads the existing `report.json`. Regenerate it first or you rank stale data.
