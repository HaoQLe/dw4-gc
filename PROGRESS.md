# Digimon World 4 fork progress

Updated: 2026-09-30. Development repository: [HaoQLe/dw4-gc](https://github.com/HaoQLe/dw4-gc), default branch `work`. Work stays in this fork; upstream PRs require an explicit user request. See [AGENTS.md](AGENTS.md) for the authoritative workflow.

## Resume here

- Current state: authorized lifecycle batch complete and verified as functional commit `901ff2b`, integrated into personal-fork `work`. All nine functions at `0x8003D49C..0x8003E450` (4,020 bytes) and 15 justified helpers (1,072 bytes) match and link from source: **5,092 new code bytes**. UART, Alchemy lifecycle, version-check, constructor and bootstrap recovery are preserved. See [lifecycle batch notes](docs/research/2026-09-30-igarkcore-lifecycle.md).
- Retained local experiment: `task/igarkcore-lifecycle` at `45030f5`, with the entire candidate source unit NonMatching. Unfinished `fn_8003E4FC` (120 bytes) and `fn_8003E8B8` (188 bytes) remain original in published `work`. The experiment is not an ancestor of published recovery and is not pushed. Concrete mismatch evidence is below and in the linked notes.
- Recovery partitions: `igArkCore.cpp` now covers `0x8003D1C8..0x8003E4FC`; synthetic callback and allocation partitions cover `0x8003E574..0x8003E8B8` and `0x8003E974..0x8003E9B4`. Two small wrapper files select definitions from the proposed source. These boundaries preserve independently verified subsets across the two unfinished helpers; they do not prove original translation-unit boundaries.
- Next proposed bounded candidate: `0x8003E9B4..0x8003ED10`, 14 functions totaling 860 code bytes. Inspect assembly/dependencies before choosing source boundaries; reuse established ABI and offset patterns only where supported. Revisit the retained helpers when new evidence offers a better approach. This proposal is not authorization to start another batch; the current task stops here.
- Before editing next time: inspect Git status/recent commits, read completed-work notes and refresh the normal report. Preserve user changes and avoid repeating completed recovery.

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
| Alchemy bootstrap (`igArkCore.cpp`) | **Complete and linked from source.** `initBootstrap()` matches all 420 bytes and 45 relocation records. The extended split preserves the earlier code, diagnostic data and five relocations. Shared globals remain original; field meanings and virtual-slot semantics remain unnamed. All configured source compiles and whole-DOL checksum passes; independent review found no issues. | Functional commit `40b83bf`; [bootstrap handoff](docs/research/2026-09-29-igarkcore-bootstrap.md) |
| Alchemy remaining lifecycle and helper batch | **Complete authorized nine-function cluster; complete verified 15-helper subset, all linked from source.** 5,092 new code bytes, exact original code/data and 267 relevant relocation records across three source partitions. All configured source compiles, source-linked DOL checksum passes and independent review found no blocking issues. Two helper mismatches remain original/local NonMatching. | Functional commit `901ff2b`; [batch handoff](docs/research/2026-09-30-igarkcore-lifecycle.md); local-only experiment `45030f5` |

The UART work also has historical [upstream PR #3](https://github.com/ivanno4317/dw4-gc/pull/3), created before the fork-first policy. Its review/merge status is independent of the verified fork result. This policy change does not modify that PR.

Throughput preference remains evidence-backed aggregate recovery, dependency reuse and strict publication gates. This batch recovered all 4,020 authorized lifecycle bytes plus 1,072 justified helper bytes. Repeated experiments on the two remaining helper mismatches produced no exact improvement, so independently verified ranges were preserved using synthetic splits. Further work on those helpers should seek new evidence rather than repeat the recorded register/prologue experiments.

## Verified numeric snapshot

Source: local `build/GDJEB2/report.json`, refreshed on 2026-09-30 for functional revision `901ff2b`, compared with the pre-edit baseline at `162efaf`. Percentages are calculated from exact byte totals rather than rounded report floats. Totals include inherited upstream matches.

| Metric | Verified value |
| --- | --- |
| Matched executable code | 365,200 / 4,141,552 bytes (8.817950%) |
| Fully linked source code | 351,112 / 4,141,552 bytes (8.477788%) |
| Matched functions | 1,213 / 23,334 |
| Completed units | 176 / 5,138 |
| Matched data | 165,586 / 1,503,795 bytes (11.011208%) |

Verification: `/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map` and `/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json` passed. Strict objdiff (`functionRelocDiffs=data_value`) reports 100% for every original function and owned code/data/BSS section across all three recovery partitions. Independent ELF comparison verifies 5,816 original code bytes (including the earlier 724), the existing 345 diagnostic bytes and one BSS byte, section attributes and all 267 relevant relocation records in full target metadata. Source offsets account only for exact UNUSED artifact ranges; unique compiler-local label numbers are normalized after requiring identical target metadata and owned bytes. External target names are unchanged. The link map confirms every recovered function comes from the configured source objects, while both unfinished helpers remain original. Both DOL SHA-1 values equal `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Independent review separately recompiled all three partitions and confirmed strict comparisons, the verifier, map, checksum and report deltas; no blocking issues were found.

**Compiler artifacts remain excluded:** the pre-existing compiler-emitted 116-byte string destructor is still `UNUSED`, with two extra relocations. The local reference view also emits an UNUSED 116-byte destructor and two relocations. These 232 discarded bytes and four records are not original recovered bytes or executable progress. The complete source ELF therefore differs by these artifacts. See [exact verification details](docs/research/2026-09-30-igarkcore-lifecycle.md#exact-publication-checks-and-compiler-artifacts).

| Lifecycle batch metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 8.695001294% → 8.817950372% | +0.122949078 percentage points | +5,092 bytes |
| Fully linked code | 8.354838959% → 8.477788037% | +0.122949078 percentage points | +5,092 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Twenty-four newly matched functions (nine lifecycle + fifteen helpers); completed units increase 174 → 176. **Unit denominator changes: 5,134 → 5,138**, from two additional source partitions and two original-code holes. Code, data and function denominators remain 4,141,552 bytes, 1,503,795 bytes and 23,334 functions. The engine category now has 6,232 code bytes and 354 data bytes; its 100% applies only to four configured source units, not the whole engine. Historical bootstrap, constructor, version-check and lifecycle comparisons remain in their linked handoffs.

## User-facing progress updates

At each completed-task handoff, show this fork's aggregate **matched code**, **fully linked code** and **matched data** percentages from the local report, with the source revision/date. These correspond to `.measures.matched_code_percent`, `.complete_code_percent` and `.matched_data_percent`; fuzzy similarity is not decompiled progress. Use two decimals for dashboard-style totals.

For source-recovery tasks, show each metric as `before% → after% (change in percentage points)` and include exact matched/linked byte gains. Calculate from unrounded totals; use enough decimal places for a small nonzero change to remain visible. Also identify newly matched functions/completed units. If the denominator or reporting configuration changed, flag the comparison instead of attributing all movement to recovery.

For documentation-only tasks, show the current verified totals and label progress unchanged. If fresh verification is unavailable, label the numbers as the last verified snapshot. The upstream decomp.dev dashboard tracks a different repository/revision and is not authoritative for our fork. Keep this ledger's snapshot current; Git history preserves previous checkpoints.

## Open findings and constraints

- The UART stub's semantic name/parameter list remains unknown. Its return-zero behavior is verified; retain the existing address-based name until there is stronger evidence.
- Alchemy `igGap.cpp` and the configured `igArkCore` version-check, constructor, bootstrap, nine-function lifecycle cluster and 15-helper subset are complete and source-linked. Other unconfigured methods/helpers remain original. The `igArkCore` bytes at `0x14` and `0x16..0x397` remain explicitly unnamed. Constructor write widths, offsets and values are verified; the full class layout and semantic meanings remain unrecovered. The bootstrap dependency declarations and local vtable view preserve only observed calling conventions; unused slot signatures and semantic types remain unrecovered. Shared `_arkCore`, `kSuccess`, `kFailure` and bootstrap-global storage remains original. The configured game category contains zero bytes; its displayed 100% is not completed gameplay recovery.
- Two nearby helpers remain unmatched on local-only `task/igarkcore-lifecycle` (`45030f5`). `fn_8003E4FC` (120 bytes): best bounded experiment 55.333332%, with original loop registers but individual GPR saves/restores instead of `_savegpr_28` / `_restgpr_28`. Member forms, accessor views, callback return types and induction variants did not resolve it. `fn_8003E8B8` (188 bytes): best 92.97872%, with capacity in `r4` instead of `r3` and signed division emitted as `srwi/add/srawi` instead of `srawi/addze`. Preserve its observed unusual growth expression; conventional 1.5× growth is not equivalent. Source-expression and local/type-view variants produced no exact match. Both remain original in published `work`; compiler settings remain pinned.
- The current Mac needs `/opt/homebrew/bin/python3` because the login shell selects Python 3.7. Homebrew Python and pinned wibo/compiler execution were verified during the baseline build.
- The existing `FILE_POS.C` case warning is unchanged. Configuration also warns about the two explicit original remainder splits having no source configuration; they intentionally link generated original objects. The supplied image's header says GDJEB2 revision 0 despite the README's revision label; its DOL matches the project's pinned checksum.
- The inherited CI uses a private upstream container. Local checks establish completion; upstream CI availability is not required for work in our fork.

## Maintaining this ledger

After each task, update the completed-work table or current-task state with the functional commit, verified result and next action. Record unfinished attempts with their branch, evidence and remaining mismatch. Add a detailed note only when the investigation warrants it, and link it here.

Refresh the numeric snapshot after changes to code, splits, symbols or compiler configuration. Regenerate the normal build report and checksum checks; record the source revision and date so future sessions can distinguish a historical snapshot from current verification. Keep the full generated report, original game data and assembly ignored. Git commits preserve the history; this ledger supplies the current handoff.
