# Digimon World 4 fork progress

Updated: 2026-09-29. Development repository: [HaoQLe/dw4-gc](https://github.com/HaoQLe/dw4-gc), default branch `work`. Work stays in this fork; upstream PRs require an explicit user request. See [AGENTS.md](AGENTS.md) for the authoritative workflow.

## Resume here

- Current state: no source task in progress; verified UART, Alchemy lifecycle and version-check work are integrated into `work`. The bounded `checkAlchemyVersion(int)` split is complete, including code/data/relocations, source linking and checksum verification. Other `igArkCore` methods remain original.
- Next proposed target: investigate `Gap::Core::igArkCore::igArkCore()` at `0x8003D234` (196 bytes). Establish constructor field-offset evidence while preserving unknown meanings; inspect string initialization and relocations before extending the configured split. This is a candidate, not work already started.
- Before editing: inspect Git status/recent commits, read the completed-work table and linked notes, then check current source and regenerated unit progress. Preserve user edits and avoid repeating completed recovery.

## Completed work

| Work | Status and evidence | Commit / detailed notes |
| --- | --- | --- |
| Fork and development workflow | Fork created; `origin` points to HaoQLe, `upstream` to ivanno4317; `work` is published and the fork's default branch. | `f72e735`; [AGENTS.md](AGENTS.md) |
| Initial research and starting plan | Project configuration and primary-source tools/resources investigated. Research snapshots are dated, not live progress. | `f72e735`; [starting plan](docs/research/2026-09-29-starting-plan.md), [resources](docs/research/2026-09-29-resources.md) |
| Local matching-build baseline | Supplied GDJEB2 CISO successfully extracted; pinned compilers run on this Mac; all configured source builds; original and rebuilt DOL share the expected checksum. | Recorded in `c974833`; [host/build notes](docs/research/2026-09-29-uart-console.md) |
| UART console runtime unit | **Complete and linked from source.** Recovered `fn_8009F35C`; made initializer static inline. All three functions, 224 code bytes and 8 data bytes match. Strict objdiff and whole-DOL verification passed; independent review found no issues. | Functional commit `bd5b375`; [UART handoff](docs/research/2026-09-29-uart-console.md) |
| Alchemy lifecycle unit (`igGap.cpp`) | **Complete and linked from source.** `igRefAlchemy(int)` and `igReleaseAlchemy()` match: 416 code bytes, 8 owned BSS bytes, all 34 relocation records. Corrected class layout, five registrar targets and shared-global references; corrected the synthetic BSS split. All configured source compiles and whole-DOL checksum passes; independent review found no blocking issues. | Functional commit `6ac6304`; [Alchemy handoff](docs/research/2026-09-29-alchemy-lifecycle.md) |
| Alchemy version-check split (`igArkCore.cpp`) | **Complete and linked from source.** `checkAlchemyVersion(int)` matches: 108 code bytes, 345 diagnostic bytes, one suppression BSS byte and all five relocations. Corrected version, opaque-byte gate, diagnostic and report target; preserved unknown class fields. All configured source compiles and whole-DOL checksum passes; independent review found no blocking issues. Other class methods remain original. | Functional commit `c586318`; [version-check handoff](docs/research/2026-09-29-alchemy-version-check.md) |

The UART work also has historical [upstream PR #3](https://github.com/ivanno4317/dw4-gc/pull/3), created before the fork-first policy. Its review/merge status is independent of the verified fork result. This policy change does not modify that PR.

## Verified numeric snapshot

Source: local `build/GDJEB2/report.json`, refreshed on 2026-09-29 for functional revision `c586318`, compared with the pre-edit report at `89032ae`. Percentages below are calculated from exact byte totals, avoiding report floating-point rounding. These numbers include inherited upstream matches, not just our own contributions.

| Metric | Verified value |
| --- | --- |
| Matched executable code | 359,492 / 4,141,552 bytes (8.680128%) |
| Fully linked source code | 345,404 / 4,141,552 bytes (8.339965%) |
| Matched functions | 1,187 / 23,334 |
| Completed units | 174 / 5,134 |
| Matched data | 165,586 / 1,503,795 bytes (11.011208%) |

Verification: `/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map` and `/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json` passed. Strict objdiff (`functionRelocDiffs=data_value`) reports 100% code/data/BSS; a separate ELF comparison confirms all five relocation types, offsets, targets, addends, bindings, visibility and definition/value/size/type agree, as do section bytes/type/flags/size/alignment. The link rule uses the compiled `igArkCore.o`; source-linked DOL SHA-1: `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`, identical to the original and expected checksum. Independent review found no blocking issues.

| Version-check task metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 8.677519925% → 8.680127643% | +0.002607718 percentage points | +108 bytes |
| Fully linked code | 8.337357590% → 8.339965308% | +0.002607718 percentage points | +108 bytes |
| Matched data | 10.988156013% → 11.011208310% | +0.023052297 percentage points | +346 bytes |

One newly matched function and one completed configured unit. **Denominator changes:** code remains 4,141,552 bytes; data decreases from 1,503,801 to 1,503,795 bytes because six zero alignment bytes around the diagnostic and suppression flag are now supplied by the linker. Recovery contributes +0.023008363 data percentage points at the old denominator; the denominator reduction contributes +0.000043934. Unit count rises from 5,132 to 5,134 because two original storage objects are split around the recovered bytes. The original remainder storage stays unrecovered. The configured engine category now contains 524 code bytes and 354 data bytes; its 100% applies only to the two configured units. Earlier lifecycle progress is preserved in [its detailed notes](docs/research/2026-09-29-alchemy-lifecycle.md).

## User-facing progress updates

At each completed-task handoff, show this fork's aggregate **matched code**, **fully linked code** and **matched data** percentages from the local report, with the source revision/date. These correspond to `.measures.matched_code_percent`, `.complete_code_percent` and `.matched_data_percent`; fuzzy similarity is not decompiled progress. Use two decimals for dashboard-style totals.

For source-recovery tasks, show each metric as `before% → after% (change in percentage points)` and include exact matched/linked byte gains. Calculate from unrounded totals; use enough decimal places for a small nonzero change to remain visible. Also identify newly matched functions/completed units. If the denominator or reporting configuration changed, flag the comparison instead of attributing all movement to recovery.

For documentation-only tasks, show the current verified totals and label progress unchanged. If fresh verification is unavailable, label the numbers as the last verified snapshot. The upstream decomp.dev dashboard tracks a different repository/revision and is not authoritative for our fork. Keep this ledger's snapshot current; Git history preserves previous checkpoints.

## Open findings and constraints

- The UART stub's semantic name/parameter list remains unknown. Its return-zero behavior is verified; retain the existing address-based name until there is stronger evidence.
- Alchemy `igGap.cpp` and the configured version-check split in `igArkCore.cpp` are complete; all other `igArkCore` methods remain unrecovered. The `igArkCore` bytes at `0x14` and `0x16..0x397` are explicitly unnamed; the full class semantics and constructor are unrecovered. Shared `_arkCore`, `kSuccess` and `kFailure` storage remains original. The configured game category contains zero bytes; its displayed 100% is not completed gameplay recovery.
- The current Mac needs `/opt/homebrew/bin/python3` because the login shell selects Python 3.7. Homebrew Python and pinned wibo/compiler execution were verified during the baseline build.
- The existing `FILE_POS.C` case warning is unchanged. Configuration also warns about the two explicit original remainder splits having no source configuration; they intentionally link generated original objects. The supplied image's header says GDJEB2 revision 0 despite the README's revision label; its DOL matches the project's pinned checksum.
- The inherited CI uses a private upstream container. Local checks establish completion; upstream CI availability is not required for work in our fork.

## Maintaining this ledger

After each task, update the completed-work table or current-task state with the functional commit, verified result and next action. Record unfinished attempts with their branch, evidence and remaining mismatch. Add a detailed note only when the investigation warrants it, and link it here.

Refresh the numeric snapshot after changes to code, splits, symbols or compiler configuration. Regenerate the normal build report and checksum checks; record the source revision and date so future sessions can distinguish a historical snapshot from current verification. Keep the full generated report, original game data and assembly ignored. Git commits preserve the history; this ledger supplies the current handoff.
