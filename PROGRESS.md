# Digimon World 4 fork progress

Updated: 2026-09-30. Development repository: [HaoQLe/dw4-gc](https://github.com/HaoQLe/dw4-gc), default branch `work`. Work stays in this fork; upstream PRs require an explicit user request. See [AGENTS.md](AGENTS.md) for the authoritative workflow.

## Resume here

- Current state: authorized `0x8003E9B4..0x8003ED10` batch investigated through all 14 functions (860 bytes). **Twelve functions / 564 original code bytes recovered and source-linked**, functional commit `06fc2d3`, integrated into personal-fork `work`. Two functions (296 bytes) remain original. Strict code/relocation checks, all configured source compilation, source-linked DOL checksum and independent review pass. See [post-lifecycle batch notes](docs/research/2026-09-30-post-lifecycle-batch.md).
- New local-only experiment: `task/igarkcore-post-lifecycle` at `67cb882` retains the full batch with all candidate units NonMatching. `fn_8003E9B4` (88 bytes, 60%) has individual GPR saves/restores instead of the original helpers; `fn_8003EA18` (208 bytes, 95.76923%) has a different zero-to-boolean conversion. Neither candidate is published or source-linked. Recorded bounded variants offer no improvement; seek new evidence before revisiting.
- Earlier local experiment preserved: `task/igarkcore-lifecycle` remains at `45030f5`. Its `fn_8003E4FC` and `fn_8003E8B8` candidates were not revisited, and both still link original code. UART, Alchemy lifecycle, version-check, constructor, bootstrap and the completed lifecycle/helper cluster remain verified.
- New synthetic source partitions cover `0x8003EA0C..0x8003EA18` (12 bytes), `0x8003EAE8..0x8003EB7C` (148 bytes), and `0x8003EB7C..0x8003ED10` (404 bytes). These preserve exact subsets across two original-code holes; they do not prove original translation-unit boundaries. Shared strings, globals and vtable storage remain original.
- Next proposed bounded candidate: `0x8003ED10..0x8003F0D8`, seven functions totaling 968 code bytes. Inspected assembly reuses the later object's `+0x10` / `+0x14` storage, four-byte elements, `fn_8004155C`, original success/failure globals and virtual calls. Investigate additional storage fields, hidden-result ABI and loop forms before setting source boundaries. This proposal is not authorization to start another batch; this task stops here.
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
| Post-lifecycle bounded batch | **Partial recovery complete and verified:** 12 of 14 functions, 564 code bytes and 22 full relevant relocation records match and link from three synthetic source partitions. All configured source compiles, expected DOL SHA-1 passes and independent review found no blocking issues. Two stalled functions remain original/local NonMatching. | Functional commit `06fc2d3`; [batch handoff](docs/research/2026-09-30-post-lifecycle-batch.md); local-only experiment `67cb882` |

The UART work also has historical [upstream PR #3](https://github.com/ivanno4317/dw4-gc/pull/3), created before the fork-first policy. Its review/merge status is independent of the verified fork result. This policy change does not modify that PR.

Throughput preference remains evidence-backed aggregate recovery, dependency reuse and strict publication gates. This batch investigated all 860 authorized bytes and preserves 564 verified bytes. Two compiler mismatches remain local after bounded experiments; their failure does not prevent exact independent subsets from source linking. Further attempts should seek new evidence instead of repeating recorded variants.

## Verified numeric snapshot

Source: local `build/GDJEB2/report.json`, refreshed on 2026-09-30 after integration of functional revision `06fc2d3`, compared with pre-edit baseline `96da874`. Percentages are calculated from exact byte totals rather than rounded report floats. Totals include inherited upstream matches.

| Metric | Verified value |
| --- | --- |
| Matched executable code | 365,764 / 4,141,552 bytes (8.831568%) |
| Fully linked source code | 351,676 / 4,141,552 bytes (8.491406%) |
| Matched functions | 1,225 / 23,334 |
| Completed units | 179 / 5,143 |
| Matched data | 165,586 / 1,503,795 bytes (11.011208%) |

Verification: `/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map` and `/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json` passed before editing and after integration. Strict objdiff (`functionRelocDiffs=data_value`) reports 100% for every original function and complete text section in the three new recovery partitions. Independent ELF comparison verifies 564 original code bytes, section attributes, all twelve function definitions and all 22 full relevant relocation records. No target renaming or artifact subtraction is needed in the new source objects. All shared data/BSS stays original and no data gain is claimed. The link map confirms all twelve recovered functions come from configured source objects and all four retained mismatches remain original. Both DOL SHA-1 values equal `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Independent review separately recompiled all three partitions using the pinned compiler/flags, reproduced strict matches, compared ELF contents and confirmed the verifier, map, checksums and report deltas; no blocking issues were found.

**Compiler artifacts remain excluded:** the previously emitted 116-byte string destructor and 116-byte reference-view destructor remain `UNUSED`, with four discarded relocations. Those 232 bytes are not original recovered bytes or executable progress. This batch emits no additional code artifacts. See [earlier artifact verification](docs/research/2026-09-30-igarkcore-lifecycle.md#exact-publication-checks-and-compiler-artifacts).

| Post-lifecycle batch metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 8.817950372% → 8.831568455% | +0.013618083 percentage points | +564 bytes |
| Fully linked code | 8.477788037% → 8.491406120% | +0.013618083 percentage points | +564 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Twelve newly matched functions; completed units increase 176 → 179. **Unit denominator changes: 5,138 → 5,143**, from three additional source partitions and two original-code holes. Code, data and function denominators remain 4,141,552 bytes, 1,503,795 bytes and 23,334 functions. The engine category now has 6,796 code bytes and 354 data bytes; its 100% applies only to seven configured source units, not the whole engine. Historical task comparisons remain in their linked handoffs.

## User-facing progress updates

At each completed-task handoff, show this fork's aggregate **matched code**, **fully linked code** and **matched data** percentages from the local report, with the source revision/date. These correspond to `.measures.matched_code_percent`, `.complete_code_percent` and `.matched_data_percent`; fuzzy similarity is not decompiled progress. Use two decimals for dashboard-style totals.

For source-recovery tasks, show each metric as `before% → after% (change in percentage points)` and include exact matched/linked byte gains. Calculate from unrounded totals; use enough decimal places for a small nonzero change to remain visible. Also identify newly matched functions/completed units. If the denominator or reporting configuration changed, flag the comparison instead of attributing all movement to recovery.

For documentation-only tasks, show the current verified totals and label progress unchanged. If fresh verification is unavailable, label the numbers as the last verified snapshot. The upstream decomp.dev dashboard tracks a different repository/revision and is not authoritative for our fork. Keep this ledger's snapshot current; Git history preserves previous checkpoints.

## Open findings and constraints

- The UART stub's semantic name/parameter list remains unknown. Its return-zero behavior is verified; retain the existing address-based name until there is stronger evidence.
- Alchemy `igGap.cpp` and the configured `igArkCore` version-check, constructor, bootstrap, nine-function lifecycle cluster and 15-helper subset are complete and source-linked. Other unconfigured methods/helpers remain original. The `igArkCore` bytes at `0x14` and `0x16..0x397` remain explicitly unnamed. Constructor write widths, offsets and values are verified; the full class layout and semantic meanings remain unrecovered. The bootstrap dependency declarations and local vtable view preserve only observed calling conventions; unused slot signatures and semantic types remain unrecovered. Shared `_arkCore`, `kSuccess`, `kFailure` and bootstrap-global storage remains original. The configured game category contains zero bytes; its displayed 100% is not completed gameplay recovery.
- Two nearby helpers remain unmatched on local-only `task/igarkcore-lifecycle` (`45030f5`). `fn_8003E4FC` (120 bytes): best bounded experiment 55.333332%, with original loop registers but individual GPR saves/restores instead of `_savegpr_28` / `_restgpr_28`. Member forms, accessor views, callback return types and induction variants did not resolve it. `fn_8003E8B8` (188 bytes): best 92.97872%, with capacity in `r4` instead of `r3` and signed division emitted as `srwi/add/srawi` instead of `srawi/addze`. Preserve its observed unusual growth expression; conventional 1.5× growth is not equivalent. Source-expression and local/type-view variants produced no exact match. Both remain original in published `work`; compiler settings remain pinned.
- Two functions in the post-lifecycle batch remain unmatched on local-only `task/igarkcore-post-lifecycle` (`67cb882`). `fn_8003E9B4` (88 bytes): 60% strict match, 96 emitted bytes, individual GPR saves/restores replace `_savegpr_29` / `_restgpr_29`; return, dependency-argument, signed-count and target-local variants did not improve it. `fn_8003EA18` (208 bytes): 95.76923%, 212 emitted bytes, `neg/or/srwi` replaces original `subic/subfe` in zero-to-boolean conversion; integer/long/volatile, byte-output and conversion/expression variants did not resolve it. Both remain original in published `work`; detailed notes preserve the observed parsing behavior. The twelve verified functions have no unresolved mismatches.
- The current Mac needs `/opt/homebrew/bin/python3` because the login shell selects Python 3.7. Homebrew Python and pinned wibo/compiler execution were verified during the baseline build.
- The existing `FILE_POS.C` case warning is unchanged. Configuration also warns about the two explicit original remainder splits having no source configuration; they intentionally link generated original objects. The supplied image's header says GDJEB2 revision 0 despite the README's revision label; its DOL matches the project's pinned checksum.
- The inherited CI uses a private upstream container. Local checks establish completion; upstream CI availability is not required for work in our fork.

## Maintaining this ledger

After each task, update the completed-work table or current-task state with the functional commit, verified result and next action. Record unfinished attempts with their branch, evidence and remaining mismatch. Add a detailed note only when the investigation warrants it, and link it here.

Refresh the numeric snapshot after changes to code, splits, symbols or compiler configuration. Regenerate the normal build report and checksum checks; record the source revision and date so future sessions can distinguish a historical snapshot from current verification. Keep the full generated report, original game data and assembly ignored. Git commits preserve the history; this ledger supplies the current handoff.
