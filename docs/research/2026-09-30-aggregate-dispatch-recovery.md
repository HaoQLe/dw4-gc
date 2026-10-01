# Aggregate virtual-dispatch recovery

Date: 2026-09-30. Functional commit `357bfba` recovers the complete selected batch at `0x80040074..0x80040A80`: **20 functions / 2,572 original code bytes / 40 full relocation records**, source-linked with no owned data or BSS.

## Selection and result

The candidate comparison included the proposed `0x8003FD40` storage/format group, the constructor/wrapper group near `0x8003FF44`, and this aggregate dispatch family. The first offered 380–516 bytes with allocator, parsing, pooled-string and hidden-result uncertainty. The second was simpler but only about 304 bytes. The selected range offered the best expected verified bytes per effort because all 20 functions traverse the same object array and call adjacent virtual slots.

The recovered source records only observed layout: an aggregate-owned pointer at `0x34`, element count at `0x08`, element array at `0x10`, and virtual slots `0x6C..0xC4`. Meanings remain unnamed. The functions preserve maximum, fan-out, sum, failure-short-circuit and all-elements-true behavior. `fn_8004059C` retains its unsigned cached loop bound while the other observed bounds remain signed.

The normal default profile emitted individual register saves for the first seven wrappers. The already established per-unit `-O4,s` profile reproduced every original save/restore helper. Declaration order then controlled register assignment, while separate assignment order reproduced the original zero-initialization sequence. No compiler or tool pin changed, and no unrelated object uses the profile because of this recovery.

## Verification

Normal configuration, all configured source compilation, report generation and the source-linked DOL checksum pass:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 build/GDJEB2/analysis/allocator-dispatch-recovery/verify.py
```

Strict objdiff uses `functionRelocDiffs=data_value` and reports 100% for the 2,572-byte text section and all 20 functions. The independent ELF comparison confirms exact raw text, allocated section type/flags/alignment, complete function symbol metadata and all 40 relocations with their target metadata. The relocations are the expected `_savegpr`/`_restgpr` calls. The source object has no additional allocated section, emitted function, data, BSS or `UNUSED` artifact.

Ninja and the link map attribute the complete range to the configured source object. Original and rebuilt DOLs both have the repository-pinned SHA-1 `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. An independent reviewer forced a fresh compile of all 204 configured source objects and repeated strict objdiff, separate ELF parsing, map/provenance, artifact, checksum and progress checks with no findings.

Ignored evidence is under `build/GDJEB2/analysis/allocator-dispatch-recovery/`, including the pre-edit report, strict reports and independent verifier. Original inputs and generated artifacts remain ignored.

## Progress and next candidate

| Metric | Before → after | Delta |
| --- | --- | --- |
| Matched code | 370,404 → 372,976 / 4,141,552 | +2,572 bytes; +0.062102323 pp |
| Fully linked code | 356,316 → 358,888 / 4,141,552 | +2,572 bytes; +0.062102323 pp |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes; 0 pp |
| Matched functions | 1,246 → 1,266 / 23,334 | +20 |
| Completed units | 193 → 194 | +1 |
| Unit denominator | 5,154 → 5,156 | +2 from isolating an interior source range |

Code, data and function denominators are unchanged. The configured engine category becomes 14,008 code bytes, 354 data bytes, 82 functions and 22 complete units.

Next proposed candidate: inspect the three related offset-adjusted aggregate dispatchers at `0x80040A80..0x80040C84` (516 bytes), which reuse the recovered container and virtual layout but add base-offset and nested-container behavior. Compare that range with the unresolved `0x8003FD40` storage/format group before selecting another batch. This proposal does not start it.
