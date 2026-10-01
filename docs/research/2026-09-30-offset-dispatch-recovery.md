# Offset-adjusted aggregate dispatch recovery

Date: 2026-09-30. Functional commit `784bf49` recovers the complete selected batch at `0x80040A80..0x80040C84`: **3 functions / 516 original code bytes / 6 full relocation records**, source-linked with no owned data or BSS.

## Selection and recovered behavior

The candidate comparison included this range, the equal-sized storage/format group at `0x8003FD40..0x8003FF44`, the 304-byte constructor/accessor group at `0x8003FF44..0x80040074`, and the adjacent 124-byte accessor/dispatcher pair. The selected range offered the best expected verified bytes per effort because it directly extends the recovered aggregate layout and compiler shape. The storage/format alternative spans parsing, pooled-string allocation, globals and distinct ABIs; the other alternatives offer fewer bytes.

`fn_80040A80` and `fn_80040B2C` traverse the aggregate storage at owner `+0x34`, accumulate results from element virtual slots `0xC8` and `0xCC`, and adjust their first two arguments by element `+0x08` minus owner `+0x08`. `fn_80040BD8` obtains a nested aggregate through owner virtual slot `0x5C`, fans out through element slot `0xD0`, advances its supplied value by owner unsigned halfword `+0x14`, and repeats for the supplied signed count. These names and types claim only observed offsets, widths and calling conventions.

The established per-unit `-O4,s` profile emitted the original save/restore helpers and exact sizes. Declaration order reproduced the first two functions' `r27..r31` allocation. An explicit current-value local reproduced the nested loop's observed `r26..r31` allocation without changing behavior. All three functions emit exactly 172 bytes.

## Verification

Normal configuration, all configured source compilation, report generation and the source-linked DOL checksum pass:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 build/GDJEB2/analysis/offset-dispatch-recovery/verify.py
```

Strict objdiff uses `functionRelocDiffs=data_value` and reports 100% for the 516-byte text section and all three functions. Independent ELF comparison confirms exact raw text after masking only verified relocation fields, allocated `.text` type/flags/alignment, complete function symbol metadata and all six relocations with full target metadata. The relocations are paired `_savegpr_22`/`_restgpr_22` calls for the two sum wrappers and `_savegpr_25`/`_restgpr_25` for the nested loop. The source object emits no additional allocated section, function, data, BSS or `UNUSED` artifact.

Ninja and the link map attribute the complete range to the configured source object. Original and rebuilt DOLs both have the repository-pinned SHA-1 `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. An independent reviewer forced pinned recompilation and repeated strict objdiff, separate ELF parsing, relocation-target checks, map/provenance, artifact, checksum and progress checks with no findings.

Ignored evidence is under `build/GDJEB2/analysis/offset-dispatch-recovery/`, including the pre-edit report, strict reports and independent verifier. Original inputs and generated artifacts remain ignored.

## Progress and next candidate

| Metric | Before → after | Delta |
| --- | --- | --- |
| Matched code | 372,976 → 373,492 / 4,141,552 | +516 bytes; +0.012459097 pp |
| Fully linked code | 358,888 → 359,404 / 4,141,552 | +516 bytes; +0.012459097 pp |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes; 0 pp |
| Matched functions | 1,266 → 1,269 / 23,334 | +3 |
| Completed units | 194 → 195 | +1 |
| Unit denominator | 5,156 → 5,157 | +1 from isolating a source prefix from the trailing original remainder |

Code, data and function denominators are unchanged. The configured engine category becomes 14,524 code bytes, 354 data bytes, 85 functions and 23 complete units.

Next proposed candidate: compare the unresolved storage/format group at `0x8003FD40..0x8003FF44` with the adjacent accessor/dispatch functions beginning at `0x80040C84`. The former offers 516 bytes but more ABI and ownership uncertainty; the latter reuses the now-verified aggregate layout. This proposal does not start another batch.
