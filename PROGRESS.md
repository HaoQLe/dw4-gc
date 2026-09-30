# Digimon World 4 fork progress

Updated: 2026-09-29. Development repository: [HaoQLe/dw4-gc](https://github.com/HaoQLe/dw4-gc), default branch `work`. Work stays in this fork; upstream PRs require an explicit user request. See [AGENTS.md](AGENTS.md) for the authoritative workflow.

## Resume here

- Current state: no source task in progress; the verified constructor recovery is integrated into `work` as `62ef4b4`. The `igArkCore.cpp` split now includes `checkAlchemyVersion(int)` and the 196-byte constructor, with exact original code/data/relevant relocations, source linking and checksum verification. Other class methods remain original. UART and Alchemy lifecycle recovery are preserved.
- Next proposed target: investigate `Gap::Core::igArkCore::initBootstrap()` at `0x8003D2F8` (420 bytes). Inspect call targets and global storage before extending the configured split. This is a candidate, not work already started.
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
| Alchemy constructor (`igArkCore.cpp`) | **Complete and linked from source.** `igArkCore()` matches all 196 bytes and has no relocations. The expanded split preserves the original version-check code/data and all five relocations. Null string initialization and observed opaque-storage writes are recovered without semantic field names. All configured source compiles and whole-DOL checksum passes; independent review found no blocking issues. | Functional commit `62ef4b4`; [constructor handoff](docs/research/2026-09-29-igarkcore-constructor.md) |

The UART work also has historical [upstream PR #3](https://github.com/ivanno4317/dw4-gc/pull/3), created before the fork-first policy. Its review/merge status is independent of the verified fork result. This policy change does not modify that PR.

## Verified numeric snapshot

Source: local `build/GDJEB2/report.json`, refreshed on 2026-09-29 for functional revision `62ef4b4`, compared with the pre-edit report at `839a7f2`. Percentages below are calculated from exact byte totals, avoiding report floating-point rounding. These numbers include inherited upstream matches, not just our own contributions.

| Metric | Verified value |
| --- | --- |
| Matched executable code | 359,688 / 4,141,552 bytes (8.684860%) |
| Fully linked source code | 345,600 / 4,141,552 bytes (8.344698%) |
| Matched functions | 1,188 / 23,334 |
| Completed units | 174 / 5,134 |
| Matched data | 165,586 / 1,503,795 bytes (11.011208%) |

Verification: `/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map` and `/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json` passed, including after integration into `work`. Strict objdiff (`functionRelocDiffs=data_value`) reports 100% for both functions and original code/data/BSS. A separate ELF comparison confirms all 304 original code bytes, 345 data bytes, one BSS byte and all five original relocation records, including target metadata. Section types, flags and alignment match. **Compiler artifact:** the source object additionally emits a 116-byte string destructor and two relocations; the map labels it `UNUSED`, and it contributes no executable bytes or reported recovery. The complete ELF objects therefore differ only by this discarded artifact. The compiled `igArkCore.o` supplies the constructor at `0x8003D234`; source-linked DOL SHA-1: `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`, identical to the original and expected checksum. Independent review found no blocking issues.

| Constructor task metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 8.680127643% → 8.684860168% | +0.004732525 percentage points | +196 bytes |
| Fully linked code | 8.339965308% → 8.344697833% | +0.004732525 percentage points | +196 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

One newly matched function; completed units remain 174 because the existing Matching split was extended. **No denominator changes:** code remains 4,141,552 bytes; data remains 1,503,795 bytes; function and unit totals remain 23,334 and 5,134. The configured engine category now contains 720 code bytes and 354 data bytes; its 100% applies only to the two configured units. Earlier task comparisons and split changes are preserved in the [version-check notes](docs/research/2026-09-29-alchemy-version-check.md) and [lifecycle notes](docs/research/2026-09-29-alchemy-lifecycle.md).

## User-facing progress updates

At each completed-task handoff, show this fork's aggregate **matched code**, **fully linked code** and **matched data** percentages from the local report, with the source revision/date. These correspond to `.measures.matched_code_percent`, `.complete_code_percent` and `.matched_data_percent`; fuzzy similarity is not decompiled progress. Use two decimals for dashboard-style totals.

For source-recovery tasks, show each metric as `before% → after% (change in percentage points)` and include exact matched/linked byte gains. Calculate from unrounded totals; use enough decimal places for a small nonzero change to remain visible. Also identify newly matched functions/completed units. If the denominator or reporting configuration changed, flag the comparison instead of attributing all movement to recovery.

For documentation-only tasks, show the current verified totals and label progress unchanged. If fresh verification is unavailable, label the numbers as the last verified snapshot. The upstream decomp.dev dashboard tracks a different repository/revision and is not authoritative for our fork. Keep this ledger's snapshot current; Git history preserves previous checkpoints.

## Open findings and constraints

- The UART stub's semantic name/parameter list remains unknown. Its return-zero behavior is verified; retain the existing address-based name until there is stronger evidence.
- Alchemy `igGap.cpp` and the configured version-check/constructor split in `igArkCore.cpp` are complete; all other `igArkCore` methods remain unrecovered. The `igArkCore` bytes at `0x14` and `0x16..0x397` remain explicitly unnamed. Constructor write widths, offsets and values are verified; the full class layout and semantic meanings remain unrecovered. Shared `_arkCore`, `kSuccess` and `kFailure` storage remains original. The configured game category contains zero bytes; its displayed 100% is not completed gameplay recovery.
- The current Mac needs `/opt/homebrew/bin/python3` because the login shell selects Python 3.7. Homebrew Python and pinned wibo/compiler execution were verified during the baseline build.
- The existing `FILE_POS.C` case warning is unchanged. Configuration also warns about the two explicit original remainder splits having no source configuration; they intentionally link generated original objects. The supplied image's header says GDJEB2 revision 0 despite the README's revision label; its DOL matches the project's pinned checksum.
- The inherited CI uses a private upstream container. Local checks establish completion; upstream CI availability is not required for work in our fork.

## Maintaining this ledger

After each task, update the completed-work table or current-task state with the functional commit, verified result and next action. Record unfinished attempts with their branch, evidence and remaining mismatch. Add a detailed note only when the investigation warrants it, and link it here.

Refresh the numeric snapshot after changes to code, splits, symbols or compiler configuration. Regenerate the normal build report and checksum checks; record the source revision and date so future sessions can distinguish a historical snapshot from current verification. Keep the full generated report, original game data and assembly ignored. Git commits preserve the history; this ledger supplies the current handoff.
