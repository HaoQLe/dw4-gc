# Digimon World 4 fork progress

Updated: 2026-09-29. Development repository: [HaoQLe/dw4-gc](https://github.com/HaoQLe/dw4-gc), default branch `work`. Work stays in this fork; upstream PRs require an explicit user request. See [AGENTS.md](AGENTS.md) for the authoritative workflow.

## Resume here

- Current state: no source task in progress; verified bootstrap recovery is integrated into `work` as `40b83bf`. The `igArkCore.cpp` split now includes `checkAlchemyVersion(int)`, the constructor and the 420-byte `initBootstrap()`, with exact original code/data/relevant relocations, source linking and checksum verification. Other class methods remain original. UART and Alchemy lifecycle recovery are preserved.
- Next proposed batch: the remaining `igArkCore` lifecycle cluster at `0x8003D49C..0x8003E450`: nine functions totaling 4,020 code bytes, including the two path getters, `fn_8003D4AC`, `initCore`, `dtor_8003DC20`, `preExit`, `exit`, `fn_8003E224` and `exitBootstrap`. Reuse the verified opaque layout, string references and bootstrap calling conventions. Inspect additional dependencies, reference-count operations and virtual slots before configuring splits; the contiguous range is a candidate region, not an established source-unit boundary. Retain independently verified subsets if larger methods stall. This batch is proposed, not started.
- Scope escalation: inspect the nearby `0x8003E450..0x8003E9B4` helper region (17 functions, 1,380 bytes) if it resolves dependencies or exposes repeatable matching patterns. It is also unrecovered; include it only when justified by the active task's authorized scope. Target selection follows [AGENTS.md](AGENTS.md#recovery-throughput).
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
| Alchemy bootstrap (`igArkCore.cpp`) | **Complete and linked from source.** `initBootstrap()` matches all 420 bytes and 45 relocation records. The extended split preserves the earlier code, diagnostic data and five relocations. Shared globals remain original; field meanings and virtual-slot semantics remain unnamed. All configured source compiles and whole-DOL checksum passes; independent review found no issues. | Functional commit `40b83bf`; [bootstrap handoff](docs/research/2026-09-29-igarkcore-bootstrap.md) |

The UART work also has historical [upstream PR #3](https://github.com/ivanno4317/dw4-gc/pull/3), created before the fork-first policy. Its review/merge status is independent of the verified fork result. This policy change does not modify that PR.

Throughput preference updated on 2026-09-29: select larger coherent batches when existing evidence supports them, amortize investigation and verification across related functions, and preserve the exact matching/publication gates. The next-batch byte counts above were checked against `config/GDJEB2/symbols.txt`. Original assembly shows that `initCore` has 53 distinct direct-call targets and `exit` has 20, so the larger scope requires dependency inspection rather than assuming that all methods are easy. This documentation-only update recovers no additional bytes; the verified numeric snapshot below is unchanged.

## Verified numeric snapshot

Source: local `build/GDJEB2/report.json`, refreshed on 2026-09-29 for functional revision `40b83bf`, compared with the pre-edit report at `dcc6b0a`. Percentages below are calculated from exact byte totals, avoiding report floating-point rounding. These numbers include inherited upstream matches, not just our own contributions.

| Metric | Verified value |
| --- | --- |
| Matched executable code | 360,108 / 4,141,552 bytes (8.695001%) |
| Fully linked source code | 346,020 / 4,141,552 bytes (8.354839%) |
| Matched functions | 1,189 / 23,334 |
| Completed units | 174 / 5,134 |
| Matched data | 165,586 / 1,503,795 bytes (11.011208%) |

Verification: `/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map` and `/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json` passed, including after integration into `work`. Strict objdiff (`functionRelocDiffs=data_value`) reports 100% for all three functions and original code/data/BSS. A separate ELF comparison confirms all 724 original code bytes, 345 data bytes, one BSS byte and all 50 original relocation records, including target metadata (45 bootstrap + five version-check). Section types, flags and alignment match. **Compiler artifact:** the source object still emits the additional 116-byte string destructor and two relocations; the map labels it `UNUSED`, and it contributes no executable bytes or reported recovery. It lies between constructor and bootstrap in the source object, so the original-byte comparison excludes that range and adjusts later relocation offsets by 116. The complete ELF objects therefore differ by this discarded artifact. The compiled `igArkCore.o` supplies bootstrap at `0x8003D2F8`; source-linked DOL SHA-1: `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`, identical to the original and expected checksum. Independent review found no issues and separately confirmed the byte/relocation comparison, map, checksum and report deltas.

| Bootstrap task metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 8.684860168% → 8.695001294% | +0.010141126 percentage points | +420 bytes |
| Fully linked code | 8.344697833% → 8.354838959% | +0.010141126 percentage points | +420 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

One newly matched function; completed units remain 174 because the existing Matching split was extended. **No denominator changes:** code remains 4,141,552 bytes; data remains 1,503,795 bytes; function and unit totals remain 23,334 and 5,134. The configured engine category now contains 1,140 code bytes and 354 data bytes; its 100% applies only to the two configured units. Earlier task comparisons and split changes are preserved in the [constructor notes](docs/research/2026-09-29-igarkcore-constructor.md), [version-check notes](docs/research/2026-09-29-alchemy-version-check.md) and [lifecycle notes](docs/research/2026-09-29-alchemy-lifecycle.md).

## User-facing progress updates

At each completed-task handoff, show this fork's aggregate **matched code**, **fully linked code** and **matched data** percentages from the local report, with the source revision/date. These correspond to `.measures.matched_code_percent`, `.complete_code_percent` and `.matched_data_percent`; fuzzy similarity is not decompiled progress. Use two decimals for dashboard-style totals.

For source-recovery tasks, show each metric as `before% → after% (change in percentage points)` and include exact matched/linked byte gains. Calculate from unrounded totals; use enough decimal places for a small nonzero change to remain visible. Also identify newly matched functions/completed units. If the denominator or reporting configuration changed, flag the comparison instead of attributing all movement to recovery.

For documentation-only tasks, show the current verified totals and label progress unchanged. If fresh verification is unavailable, label the numbers as the last verified snapshot. The upstream decomp.dev dashboard tracks a different repository/revision and is not authoritative for our fork. Keep this ledger's snapshot current; Git history preserves previous checkpoints.

## Open findings and constraints

- The UART stub's semantic name/parameter list remains unknown. Its return-zero behavior is verified; retain the existing address-based name until there is stronger evidence.
- Alchemy `igGap.cpp` and the configured version-check/constructor/bootstrap split in `igArkCore.cpp` are complete; all other `igArkCore` methods remain unrecovered. The `igArkCore` bytes at `0x14` and `0x16..0x397` remain explicitly unnamed. Constructor write widths, offsets and values are verified; the full class layout and semantic meanings remain unrecovered. The bootstrap dependency declarations and local vtable view preserve only observed calling conventions; unused slot signatures and semantic types remain unrecovered. Shared `_arkCore`, `kSuccess`, `kFailure` and bootstrap-global storage remains original. The configured game category contains zero bytes; its displayed 100% is not completed gameplay recovery.
- The current Mac needs `/opt/homebrew/bin/python3` because the login shell selects Python 3.7. Homebrew Python and pinned wibo/compiler execution were verified during the baseline build.
- The existing `FILE_POS.C` case warning is unchanged. Configuration also warns about the two explicit original remainder splits having no source configuration; they intentionally link generated original objects. The supplied image's header says GDJEB2 revision 0 despite the README's revision label; its DOL matches the project's pinned checksum.
- The inherited CI uses a private upstream container. Local checks establish completion; upstream CI availability is not required for work in our fork.

## Maintaining this ledger

After each task, update the completed-work table or current-task state with the functional commit, verified result and next action. Record unfinished attempts with their branch, evidence and remaining mismatch. Add a detailed note only when the investigation warrants it, and link it here.

Refresh the numeric snapshot after changes to code, splits, symbols or compiler configuration. Regenerate the normal build report and checksum checks; record the source revision and date so future sessions can distinguish a historical snapshot from current verification. Keep the full generated report, original game data and assembly ignored. Git commits preserve the history; this ledger supplies the current handoff.
