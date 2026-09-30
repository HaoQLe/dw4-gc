# Digimon World 4 fork progress

Updated: 2026-09-29. Development repository: [HaoQLe/dw4-gc](https://github.com/HaoQLe/dw4-gc), default branch `work`. Work stays in this fork; upstream PRs require an explicit user request. See [AGENTS.md](AGENTS.md) for the authoritative workflow.

## Resume here

- Current state: no source task in progress; verified UART and Alchemy lifecycle work are integrated into `work`. The bounded `igGap.cpp` task is complete, including source linking and checksum verification.
- Next proposed target: inspect `Gap::Core::igArkCore::checkAlchemyVersion(int)` at `0x8003D1C8` in `src/Alchemy/src/igCore/igArkCore.cpp` (108 bytes; 86.55556% normal fuzzy similarity, still `NonMatching`). This is a candidate, not work already started.
- Before editing: inspect Git status/recent commits, read the completed-work table and linked notes, then check current source and regenerated unit progress. Preserve user edits and avoid repeating completed recovery.

## Completed work

| Work | Status and evidence | Commit / detailed notes |
| --- | --- | --- |
| Fork and development workflow | Fork created; `origin` points to HaoQLe, `upstream` to ivanno4317; `work` is published and the fork's default branch. | `f72e735`; [AGENTS.md](AGENTS.md) |
| Initial research and starting plan | Project configuration and primary-source tools/resources investigated. Research snapshots are dated, not live progress. | `f72e735`; [starting plan](docs/research/2026-09-29-starting-plan.md), [resources](docs/research/2026-09-29-resources.md) |
| Local matching-build baseline | Supplied GDJEB2 CISO successfully extracted; pinned compilers run on this Mac; all configured source builds; original and rebuilt DOL share the expected checksum. | Recorded in `c974833`; [host/build notes](docs/research/2026-09-29-uart-console.md) |
| UART console runtime unit | **Complete and linked from source.** Recovered `fn_8009F35C`; made initializer static inline. All three functions, 224 code bytes and 8 data bytes match. Strict objdiff and whole-DOL verification passed; independent review found no issues. | Functional commit `bd5b375`; [UART handoff](docs/research/2026-09-29-uart-console.md) |
| Alchemy lifecycle unit (`igGap.cpp`) | **Complete and linked from source.** `igRefAlchemy(int)` and `igReleaseAlchemy()` match: 416 code bytes, 8 owned BSS bytes, all 34 relocation records. Corrected class layout, five registrar targets and shared-global references; corrected the synthetic BSS split. All configured source compiles and whole-DOL checksum passes; independent review found no blocking issues. | Functional commit `6ac6304`; [Alchemy handoff](docs/research/2026-09-29-alchemy-lifecycle.md) |

The UART work also has historical [upstream PR #3](https://github.com/ivanno4317/dw4-gc/pull/3), created before the fork-first policy. Its review/merge status is independent of the verified fork result. This policy change does not modify that PR.

## Verified numeric snapshot

Source: local `build/GDJEB2/report.json`, refreshed on 2026-09-29 for functional revision `6ac6304`, compared with the pre-edit report at `26934e8`. Percentages below are calculated from exact byte totals, avoiding report floating-point rounding. These numbers include inherited upstream matches, not just our own contributions.

| Metric | Verified value |
| --- | --- |
| Matched executable code | 359,384 / 4,141,552 bytes (8.677520%) |
| Fully linked source code | 345,296 / 4,141,552 bytes (8.337358%) |
| Matched functions | 1,186 / 23,334 |
| Completed units | 173 / 5,132 |
| Matched data | 165,240 / 1,503,801 bytes (10.988156%) |

Verification: `/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map` and `/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json` passed on `work`. Strict objdiff (`functionRelocDiffs=data_value`) reports 100% code/BSS; a separate ELF comparison confirms relocation types, offsets, targets, addends, bindings and definition/value/size agree. The link rule uses the compiled `igGap.o`; source-linked DOL SHA-1: `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`, identical to the original and expected checksum.

| Lifecycle task metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 8.667475381% → 8.677519925% | +0.010044544 percentage points | +416 bytes |
| Fully linked code | 8.327313046% → 8.337357590% | +0.010044544 percentage points | +416 bytes |
| Matched data | 10.987624027% → 10.988156013% | +0.000531985 percentage points | +8 bytes |

Two newly matched functions and one completed unit. Aggregate denominators are unchanged. The corrected split reduces this unit's assigned BSS from 464 to 8 bytes; the other 456 bytes stay in an original generated object and are not counted as recovered data. The engine category's data denominator consequently changes from 464 to 8 bytes; its 100% data figure applies only to those eight bytes.

## User-facing progress updates

At each completed-task handoff, show this fork's aggregate **matched code**, **fully linked code** and **matched data** percentages from the local report, with the source revision/date. These correspond to `.measures.matched_code_percent`, `.complete_code_percent` and `.matched_data_percent`; fuzzy similarity is not decompiled progress. Use two decimals for dashboard-style totals.

For source-recovery tasks, show each metric as `before% → after% (change in percentage points)` and include exact matched/linked byte gains. Calculate from unrounded totals; use enough decimal places for a small nonzero change to remain visible. Also identify newly matched functions/completed units. If the denominator or reporting configuration changed, flag the comparison instead of attributing all movement to recovery.

For documentation-only tasks, show the current verified totals and label progress unchanged. If fresh verification is unavailable, label the numbers as the last verified snapshot. The upstream decomp.dev dashboard tracks a different repository/revision and is not authoritative for our fork. Keep this ledger's snapshot current; Git history preserves previous checkpoints.

## Open findings and constraints

- The UART stub's semantic name/parameter list remains unknown. Its return-zero behavior is verified; retain the existing address-based name until there is stronger evidence.
- Alchemy `igGap.cpp` is complete; `igArkCore.cpp` remains unfinished. The `igArkCore` bytes at `0x14` and `0x16..0x397` are explicitly unnamed; the full class semantics and constructor are unrecovered. Shared `_arkCore`, `kSuccess` and `kFailure` storage remains original. The configured game category contains zero bytes; its displayed 100% is not completed gameplay recovery.
- The current Mac needs `/opt/homebrew/bin/python3` because the login shell selects Python 3.7. Homebrew Python and pinned wibo/compiler execution were verified during the baseline build.
- The existing `FILE_POS.C` case warning is unchanged. The supplied image's header says GDJEB2 revision 0 despite the README's revision label; its DOL matches the project's pinned checksum.
- The inherited CI uses a private upstream container. Local checks establish completion; upstream CI availability is not required for work in our fork.

## Maintaining this ledger

After each task, update the completed-work table or current-task state with the functional commit, verified result and next action. Record unfinished attempts with their branch, evidence and remaining mismatch. Add a detailed note only when the investigation warrants it, and link it here.

Refresh the numeric snapshot after changes to code, splits, symbols or compiler configuration. Regenerate the normal build report and checksum checks; record the source revision and date so future sessions can distinguish a historical snapshot from current verification. Keep the full generated report, original game data and assembly ignored. Git commits preserve the history; this ledger supplies the current handoff.
