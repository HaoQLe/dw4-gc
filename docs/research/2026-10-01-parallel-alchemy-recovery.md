# Parallel Alchemy recovery

Date: 2026-10-01. The selected three-worker batch recovers **15 functions /
1,400 original code bytes / 47 full relocation records**, source-linked.
No selected function remains unrecovered. Baseline `work`: `88215ca`;
functional source-link commit: `1f046ae`.

## Worker results and integration

The [selection note](2026-10-01-parallel-batch-selection.md) explains the scope
and rejected alternatives. Coordinator preparation `931fb49` supplied three
NonMatching synthetic partitions and exact pinned compilation commands. Three
sibling worktrees started from that same revision, with the coordinator's
configured build root frozen during private worker iteration. Workers owned
only their respective source files; configuration, splits, headers and the
ledger remained coordinator-owned.

| Worker | Range (end exclusive) | Functions / bytes / relocations | Worker commit | Integrated source commit |
| --- | --- | --- | --- | --- |
| A: storage/byte conversion | `0x8003FD40..0x8003FF44` | 6 / 516 / 15 | `c8bb907` | `e7a16cb` |
| B: constructor/wrapper/accessor | `0x8003FF44..0x80040074` | 8 / 304 / 11 | `af37fab` | `191406f` |
| C: aggregate string builder | `0x80040DDC..0x80041020` | 1 / 580 / 21 | `1fc29bf` | `d6b2236` |

Recovery ran concurrently. B finished first, then A; their independent reviews
ran while C continued its lifetime and register experiments. After all source
commits returned, the coordinator reviewed and integrated them individually,
enabled source linking, and ran whole-build verification. Integration is a
single-writer step, not sequential recovery dispatch.

Worker branches remain local and clean at their exact-source commits. Previous
experiment tips were preserved. Source partitions are justified synthetic
recovery boundaries, not assertions about original translation units.

## Recovered behavior and compiler findings

A preserves receiver byte-storage pointer `+0x20`, signed word bound `+0x34`,
receiver slot `0x8C`, and provider slot `0xD0` on the object returned by
`fn_80037E48`. Its accessor loads the complete word before masking the low
16 bits. The fill loop reloads its signed bound and preserves increment order.
The parser initializes both stack integers, parses the original `%d%n`, stores
the truncated byte and returns consumed count. The formatter promotes a signed
byte, uses the original `%d`, and returns the four-byte pooled string through
hidden-result storage.

A's default-profile candidate already matched the accessor/parser/formatter,
but two wrappers used individual saves instead of the original helper calls.
A private experiment with the existing per-unit `-O4,s` profile reproduced all
six functions without optimization pragmas. B retains default `-O4,p`; C uses
the established `-O4,s` aggregate profile. Compiler/tool pins and other objects'
settings did not change.

B reuses exact constructor, initialization, copy-shaped and forwarding patterns.
It stores the original external vtable before the observed null guard, retains
the constructor's direct initializer call with scoped `auto_inline off`, passes
a stack byte to slot `0x8C`, and loads an unsigned halfword at `+0x14`.

C extends the known aggregate layout through hidden-result slot `0xE4`.
Assignment retains the incoming string, releases the destination, stores the
pointer and releases the temporary. The final result retains its copy before
the local string releases. Original buffer offsets, signed loops, and the
absence of reference-array cleanup remain intact. Matching the library's
`isPooled`/`getId` release shape, local declaration order and signed size
expression reproduces the original `0x40` frame and `_savegpr_20` allocation.
Class/field/slot meanings remain unnamed.

Original format strings, pooled-string global/storage and vtables stay external.
No owned data/BSS is added or counted.

## Verification and artifact accounting

Normal configuration, all configured source compilation, report generation and
the source-linked DOL checksum pass:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 build/GDJEB2/analysis/parallel-alchemy-recovery/verify.py
```

Strict objdiff uses `functionRelocDiffs=data_value`. All selected functions and
original text bytes match 100%. Independent ELF parsing checks raw bytes,
allocated section type/flags/alignment, function offsets/sizes/binding/visibility,
and all 47 relocation records with complete target metadata. Original target
object hashes remain identical to the prepared baseline. Function symbol-table
entry order is normalized; emitted offsets and all symbol metadata remain exact.

A and B have no additional emitted code/data/BSS. C emits the weak destructor
`__dt__21Unknown80040DDCStringFv`, **116 bytes**, following the 580-byte function.
Its two extra REL24 records target pooled release and `__dl__FPv` at object
offsets 648 and 664. Generic whole-object equality correctly rejects C's larger
text section; contextual comparison establishes the exact original function.
The link map explicitly marks the destructor **UNUSED**. Its 116 bytes and two
relocations are excluded from recovery progress. No compiler artifact is
represented as original source-linked code.

Ninja and the link map attribute every selected function to its configured
source object. Original and rebuilt DOL SHA-1 both equal the repository-pinned
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.

Independent fresh-compile reviews of each worker's source found no blocking
issues, covering behavior, ABI, exact bytes/metadata/full relocation targets and
artifacts. The coordinator then checked integrated provenance, UNUSED exclusion,
checksums and aggregate deltas. Final integration review and checks on `work`
are recorded in the ledger at publication.

Ignored evidence lives under `build/GDJEB2/analysis/parallel-alchemy-recovery/`,
including baseline/final reports, prepared totals, immutable target manifest, strict
reports, independent parser and the batch verifier. Original inputs, generated
assembly and compiler outputs remain ignored.

## Progress and next investigation

| Metric | Before → after | Exact gain |
| --- | --- | --- |
| Matched code | 373,836 → 375,236 / 4,141,552 | +1,400 bytes; +0.033803753 pp |
| Fully linked code | 359,748 → 361,148 / 4,141,552 | +1,400 bytes; +0.033803753 pp |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes; 0 pp |
| Matched functions | 1,272 → 1,287 / 23,334 | +15 |
| Completed units | 196 → 199 | +3 |
| Unit denominator | 5,158 → 5,160 | +2 from synthetic partition preparation |

Code/data/function denominators are unchanged. Configured engine totals become
16,268 code bytes, 354 data bytes, 103 functions and 27 completed units.

Next proposed candidate: the six-function metadata construction/access group
`0x80041020..0x800413C4`, 932 original bytes, compared with the independent SDK
reverb remainder. First inspect `fn_8004102C`'s masked object-reference counts
and registry/helper calling conventions; this batch establishes pooled-string
ownership but does not establish those new object/metadata views. This proposal
does not start recovery.
