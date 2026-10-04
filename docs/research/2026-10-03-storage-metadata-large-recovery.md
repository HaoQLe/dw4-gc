# Storage, ordering, wrappers and metadata recovery

The authorized batch remains **active**: 50 functions / 5,908 original code
bytes at `0x800416D8..0x80042DEC`, baseline `85c1520`. The user requested a
5,000–10,000-byte batch. Its current checkpoints recover **48 functions /
4,796 bytes / 106 original relocations** in five source partitions.

## Selection and source boundaries

The range reuses independently established storage count/capacity/array offsets
`+0x08/+0x0C/+0x10`, insertion/growth helpers, low-23-bit reference release,
virtual slots and four-byte hidden-result conventions. It offered stronger
reuse than the remaining SDK reverb helper (1,148 bytes with floating-point
uncertainty) or standalone `fn_80369284` (7,704 bytes with extensive exception
and destructor ownership). The partitions are synthetic recovery boundaries;
they do not assert original translation units or semantic class names.

| Source partition | Original functions | Original bytes | Original relocations |
| --- | ---: | ---: | ---: |
| `unknown800416D8.cpp`, `0x800416D8..0x80041E40` | 12 | 1,896 | 34 |
| `unknown80041E40.cpp`, `0x80041E40..0x80042134` | 3 | 756 | 17 |
| `unknown800424B4.cpp`, `0x800424B4..0x80042824` | 27 | 880 | 31 |
| `unknown80042824.cpp`, `0x80042824..0x8004291C` | 1 | 248 | 6 |
| `unknown800429F4.cpp`, `0x800429F4..0x80042DEC` | 5 | 1,016 | 18 |

Functional commits: first storage checkpoint `fe3044d`; additional 36 functions
/ 2,900 bytes in `54b37bf`. Both are independently verified checkpoints within
the same selected batch. Remaining targets are 896-byte `fn_80042134` and
216-byte `fn_8004291C`; their published partitions use original objects.

## Recovered source and compiler evidence

All units use the existing pinned GC/2.6 engine size profile. No compiler,
wrapper, linker or tool pin changed.

The ordering insertion helper needs its pointer temporaries declared before
the loop counters to reproduce the original register allocation. The rebuild
helper captures the temporary storage after content release/clear, with the
observed late volatile read, then preserves its pointer through release. Local
index/count state reproduces the release loop's original registers. Storage
count reads, increment-before-insert and low-23-bit release checks remain as
observed.

Wrapper recovery preserves four-byte hidden results, byte-return hooks and
pooled-string ownership. Pair wrappers capture each scalar rather than copying
a pair into extra stack storage. Search retains the original behavior when the
starting index exceeds the count. Metadata replacement captures volatile old
and new pointer references at the observed points and loads metadata globals
after lookup calls. It preserves original unchecked failure behavior.

`fn_80042A44` captures its entry while preparing the first virtual call. The
capture occurs before that call can alter the array, and the next virtual call
uses the captured entry. A local aggregate reproduces the original saved entry
and byte-offset registers. This is valid C++ and matches all 216 original bytes;
it does not require the earlier raw-table experiment.

## Checkpoint verification

Normal configure, all configured source compilation, progress/report generation
and the normal DOL checksum check pass. Strict objdiff uses
`functionRelocDiffs=data_value`. An independently parsed ELF comparison checks
allocated-section attributes and bytes, every original function's binding,
type, visibility, offset and size, and all 106 full relocations including target
metadata. Original split-object hashes remain unchanged. Map and Ninja checks
establish source linking for recovered functions and original linking for the
two remaining targets.

The original and rebuilt DOL SHA-1s both equal pinned
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. An independent reviewer performed
fresh pinned compilations and compared complete fresh/configured ELF contents;
all publication gates pass. The generic whole-section comparison for the tail
reports its known extra destructor; the contextual comparison verifies every
original byte and relocation independently.

The metadata tail emits weak `__dt__24Unknown80042824ReferenceFv`, **116 bytes /
two relocations**, following its 1,016 original bytes. The map marks it UNUSED.
Its relocations target the original release helper and deletion operator. Those
bytes/relocations are excluded from recovery. Earlier three destructors
(**348 bytes / six relocations**) remain UNUSED and excluded too. No owned data
or BSS is added.

| Metric | Baseline → checkpoint | Exact gain |
| --- | --- | ---: |
| Matched code | 376,956 → 381,752 / 4,141,552 | 4,796 bytes |
| Fully linked code | 362,868 → 367,664 / 4,141,552 | 4,796 bytes |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes |
| Matched functions | 1,301 → 1,349 / 23,334 | 48 |
| Completed units | 203 → 208 | 5 |
| Total units | 5,164 → 5,171 | 7 synthetic partitions |

Matched and linked code each increase **0.115801999 percentage points**. Code,
data and function denominators are unchanged. Generated reports, assembly,
private variants, compiler traces and verifiers remain ignored under
`build/GDJEB2/analysis/storage-metadata-large-recovery/`.

## Active remainders

`fn_80042134` emits its original 896-byte size. The best retained source reaches
99.75446% strict similarity: all later instructions and relocations match, but
the initial insertion step swaps the first storage alias and current pair
registers (`r29/r26`). A different declaration shape matches the first phase
and shifts the pending/ready/index registers in the second phase. The compiler
trace shows loop-hoisted storage aliases and promoted local fields being
coalesced into different registers. Declaration placement, aggregate fields,
reference binding, pointer capture, constructor spelling, inline insertion
helpers and search-local ordering have been compared. Next: inspect the
coalescing order of the first alias and pair against the later pending/ready
live ranges, then test a source expression that preserves the desired captures.

`fn_8004291C` emits its original 216-byte size at 93.888885% strict similarity.
Control flow and relocations match. The original moves incoming `r4` to `r5`
and retains the search result in `r4`; the current compiler propagates the
incoming pointer into physical `r4`, uses another register for the result and
moves that result into `r4` just before the call. Compiler PCode confirms the
input copy is removed before allocation. Declaration orders, search state,
result references, parameter types, member/continuation helpers and pointer
capture variants have not yet resolved it. Next: investigate the frontend
binding and copy-propagation constraint that keeps the input separate from the
index across the final comparison.

A three-argument function-pointer probe improved the latter's registers by
making the input live through the call. Independent ABI review rejected it:
`fn_80042B1C` overwrites `r5` before reading it, and 25 original call sites across
20 functions supply no consistent third argument. Calling its two-argument
definition through an incompatible pointer is not sound C++. The recovered ABI
remains two arguments; the probe is investigation evidence only.

Neither remainder has an evidenced hard blocker. The task continues
automatically after checkpoint publication until both are exact or a genuine
external/tool limitation is established.
