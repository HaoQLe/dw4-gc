# Alchemy creation and lookup recovery

Date: 2026-10-01. Baseline `work`: `73f7969`. Selected scope: five functions /
408 original code bytes at `0x800413C4..0x8004155C`. All five are exact and
source-linked; `task/creation-lookup-recovery` is integrated into `work`. No
remainder or owned data/BSS.
Functional commit: `0b2bddb`. Independent fresh-compile review passes with no
blocking issues; its exact, strict, provenance, checksum and report-delta checks
pass. Normal configure, all-source/report build, strict and exact ELF checks,
provenance, artifact exclusion, pinned checksums and report deltas pass again
on integrated `work`.

## Selection and behavior

This group reuses recovered metadata lookup, the low-23-bit reference release
mask and storage offsets. The SDK reverb remainder offers 1,148 bytes but retains
an independent floating-point/compiler mismatch; the adjacent 252-byte storage
allocator introduces metadata sizing and a hidden-result allocation ABI.
Inspected creation, ancestry-test and append helper bodies establish pointer
returns, unsigned-byte tests, direct arguments and storage access. The five-hook
group has the strongest dependency reuse for this batch.

| Function | Original bytes | Observed behavior |
| --- | --- | --- |
| `fn_800413C4` | 256 | Looks up metadata and an existing value, otherwise creates and conditionally appends a value |
| `fn_800414C4` | 4 | Empty hook |
| `fn_800414C8` | 8 | Returns one |
| `fn_800414D0` | 132 | Searches receiver storage with the original ancestry-test helper |
| `fn_80041554` | 8 | Returns minus one |

Creation returns null when metadata lookup fails. It first searches existing
storage; only a missing value invokes metadata-driven creation with the
receiver's allocation context. A created value calls virtual slot `0x70` with
the receiver. A zero low byte releases the value and returns null. A nonzero
byte appends through the original helper, drops the temporary reference and
calls slot `0x74` before returning the value. The original release-before-call
ordering, null assumptions and low-23-bit mask remain intact.

Search reads the receiver's storage pointer at `+0x10`, signed count at storage
`+0x08` and element array at `+0x10`. It calls `fn_80068128`, whose body compares
the value's slot-`0x58` metadata and its `+0x38` ancestry chain, and reloads the
matching element after the call. The synthetic views retain offset names;
semantic class, field and slot names remain unknown. Globals, helpers and vtables
remain original. This source partition does not assert an original translation
unit boundary.

## Compiler and verification evidence

The first candidate is exact under the already established engine size profile
`-O4,s`, explicit inline reference release and scoped `auto_inline off`. No source
shape experiments or compiler/tool pin changes were needed. The ordinary signed
index loop reproduces the original separate index and four-byte offset registers.
No extra allocated sections, weak helpers or UNUSED artifacts are emitted.

Commands run from the repository root:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 tools/decomp.py scratch unknown800413C4 --keep
/opt/homebrew/bin/python3 tools/decomp.py verify \
  build/GDJEB2/obj/Alchemy/src/igCore/unknown800413C4.o \
  build/GDJEB2/src/Alchemy/src/igCore/unknown800413C4.o
/opt/homebrew/bin/python3 build/GDJEB2/analysis/creation-lookup-recovery/verify.py
```

Strict objdiff with `functionRelocDiffs=data_value` reports 100% for all five
functions and `.text`. Independent ELF comparisons check all 408 bytes,
section type/flags/alignment, complete function lists with offsets/sizes/binding/
visibility, and all 12 relocation records with target metadata. Original target
SHA-256 remains unchanged. Map and Ninja provenance identify the source object
for every selected function. Both original and source-linked DOL SHA-1 equal the
repository-pinned `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. All configured
source compilation and the normal checksum target pass.

| Metric | Before → after | Exact gain |
| --- | --- | --- |
| Matched code | 376,168 → 376,576 / 4,141,552 | +408 bytes; +0.009851379 pp |
| Fully linked code | 362,080 → 362,488 / 4,141,552 | +408 bytes; +0.009851379 pp |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes; 0 pp |
| Matched functions | 1,293 → 1,298 / 23,334 | +5 |
| Completed units | 200 → 201 | +1 |
| Unit denominator | 5,161 → 5,162 | +1 from isolating the original prefix |

Code/data/function denominators remain unchanged. Configured engine totals become
17,608 code bytes, 354 data bytes, 114 functions and 29 completed units. Earlier
348-byte / six-relocation UNUSED destructor artifacts remain excluded.
Ignored baseline/final reports, original assembly, target hash, strict report and
independent verifier are under `build/GDJEB2/analysis/creation-lookup-recovery/`.

Next proposed investigation: compare the storage helper region beginning at
`0x8004155C` against other reusable engine candidates and the SDK reverb remainder.
Confirm the allocation helper's four-byte hidden-result ABI, metadata sizing and
owned-data boundaries before selecting scope. This proposal starts no new batch.
