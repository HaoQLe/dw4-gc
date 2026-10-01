# Aggregate dispatch continuation recovery

Date: 2026-10-01. Functional commit `130de4b` recovers the complete selected batch at `0x80040C84..0x80040DDC`: **3 functions / 344 original code bytes / 9 full relocation records**, source-linked with no owned data or BSS.

## Selection and recovered behavior

The candidate comparison included the 516-byte storage/format group at `0x8003FD40..0x8003FF44`, the adjacent 580-byte string-building function `fn_80040DDC`, and this three-function continuation. The storage/format group spans six functions with allocator, parser, pooled-string and constructor ABIs. `fn_80040DDC` reuses the aggregate layout but adds temporary allocation and pooled-string ownership. The selected range offered the best expected verified bytes per effort because it extends the exact aggregate traversal and virtual layout while keeping its parser and result behavior bounded.

`fn_80040C84` returns the original four-byte global at `lbl_80561E14`. `fn_80040C8C` traverses the aggregate storage at owner `+0x34` and fans the supplied value out through element virtual slot `0xD4`. `fn_80040D00` parses an offset from the supplied text, obtains a nested aggregate through owner slot `0x5C`, calls each element's slot `0xE0` with its `+0x08` adjustment, then performs the second parse and returns the sum of both parsed values. The source preserves the signed loop bounds and observed uninitialized second stack local without assigning semantic names.

The established per-unit `-O4,s` profile emits the original register-save helpers. Declaration order reproduces the fan-out loop's `r30/r31` allocation, the parser's `r29..r31` allocation and its `0x08/0x0C` stack-local order. No compiler or tool pin changed.

## Verification

Normal configuration, all configured source compilation, report generation and the source-linked DOL checksum pass:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 build/GDJEB2/analysis/aggregate-dispatch-continuation/verify.py
```

Strict objdiff uses `functionRelocDiffs=data_value` and reports 100% for the 344-byte text section and all three functions. Independent ELF comparison confirms exact raw text, allocated `.text` type/flags/alignment, all function and auxiliary symbol metadata, and all nine relocations with complete target metadata. These comprise the global accessor's SDA21 relocation, four `_savegpr`/`_restgpr` calls, two format-string SDA21 relocations and two `sscanf` calls. The source object emits no additional allocated section, function, data, BSS or `UNUSED` artifact.

Ninja and the link map attribute the complete range to the configured source object. Original and rebuilt DOLs both have the repository-pinned SHA-1 `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. An independent reviewer compiled the unit from source to a fresh temporary directory and repeated strict objdiff, separate ELF parsing, full relocation-target checks, map/provenance, artifact, checksum and progress-delta checks with no findings. Publication checks pass again after integration into `work`.

Ignored evidence is under `build/GDJEB2/analysis/aggregate-dispatch-continuation/`, including the pre-edit report, strict reports, scratch candidate and independent verifier. Original inputs and generated artifacts remain ignored.

## Progress and next candidate

| Metric | Before → after | Delta |
| --- | --- | --- |
| Matched code | 373,492 → 373,836 / 4,141,552 | +344 bytes; +0.008306065 pp |
| Fully linked code | 359,404 → 359,748 / 4,141,552 | +344 bytes; +0.008306065 pp |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes; 0 pp |
| Matched functions | 1,269 → 1,272 / 23,334 | +3 |
| Completed units | 195 → 196 | +1 |
| Unit denominator | 5,157 → 5,158 | +1 from isolating a source prefix from the trailing original remainder |

Code, data and function denominators are unchanged. The configured engine category becomes 14,868 code bytes, 354 data bytes, 88 functions and 24 complete units.

Next proposed candidate: compare `fn_80040DDC` (580 bytes), which reuses the nested aggregate layout but adds allocation and pooled-string ownership, with the unresolved `0x8003FD40..0x8003FF44` storage/format group (516 bytes). This proposal does not start another batch.
