# Storage, ordering, wrappers and metadata recovery

The authorized batch remains **active**: 50 functions / 5,908 original code
bytes at `0x800416D8..0x80042DEC`, baseline `85c1520`. The user requested a
5,000–10,000-byte batch. Its current checkpoints recover **49 functions /
5,692 bytes / 123 original relocations** in six source partitions.

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
| `unknown80042134.cpp`, `0x80042134..0x800424B4` | 1 | 896 | 17 |
| `unknown800424B4.cpp`, `0x800424B4..0x80042824` | 27 | 880 | 31 |
| `unknown80042824.cpp`, `0x80042824..0x8004291C` | 1 | 248 | 6 |
| `unknown800429F4.cpp`, `0x800429F4..0x80042DEC` | 5 | 1,016 | 18 |

Functional commits: first storage checkpoint `fe3044d`; additional 36 functions
/ 2,900 bytes in `54b37bf`; ordering adds 896 bytes in `a308886`. These are
independently verified checkpoints within the same selected batch. Only the
216-byte `fn_8004291C` remains active; its published partition uses the original
object. Local exact ordering development commit `9ac1f74` stays on the task
branch; the clean landing copies the full source without its experiment ancestors.

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
type, visibility, offset and size, and all 123 full relocations including target
metadata. Original split-object hashes remain unchanged. Map and Ninja checks
establish source linking for recovered functions and original linking for the
remaining lookup target.

The original and rebuilt DOL SHA-1s both equal pinned
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. An independent reviewer performed
fresh pinned compilations and compared complete fresh/configured ELF contents;
all publication gates pass. The generic whole-section comparison for the tail
reports its known extra destructor; the contextual comparison verifies every
original byte and relocation independently.

The ordering unit emits weak `__dt__24Unknown80041E40ReferenceFv`, **116 bytes /
two relocations**, after its 896 original bytes. It is UNUSED and excluded.

The metadata tail emits weak `__dt__24Unknown80042824ReferenceFv`, **116 bytes /
two relocations**, following its 1,016 original bytes. The map marks it UNUSED.
Its relocations target the original release helper and deletion operator. Those
bytes/relocations are excluded from recovery. Earlier three destructors
(**348 bytes / six relocations**) remain UNUSED and excluded too. No owned data
or BSS is added.

| Metric | Baseline → checkpoint | Exact gain |
| --- | --- | ---: |
| Matched code | 376,956 → 382,648 / 4,141,552 | 5,692 bytes |
| Fully linked code | 362,868 → 368,560 / 4,141,552 | 5,692 bytes |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes |
| Matched functions | 1,301 → 1,350 / 23,334 | 49 |
| Completed units | 203 → 209 | 6 |
| Total units | 5,164 → 5,171 | 7 synthetic partitions |

Matched and linked code each increase **0.137436401 percentage points**. Code,
data and function denominators are unchanged. Generated reports, assembly,
private variants, compiler traces and verifiers remain ignored under
`build/GDJEB2/analysis/storage-metadata-large-recovery/`.

## Ordering completion on 2026-10-04

The complementary plain-pair/pending-reference candidate already matched the
first loop. Bounded local decomp-permuter runs on several initial candidates
made no improvement; a run on this complementary candidate found a useful
pointer capture used by the tail removal loop and final append. Targeted
compilation reached 99.95536% / 896 bytes: every register agreed, with only two
copy instructions exchanged around the pending-pointer reload.

A fresh compiler AST/PCode trace identified the copy order in loop code motion.
The tail pointer capture after the initial copy was hoisted after the clear/copy
alias. Moving its assignment into the tail loop condition makes that capture
hoist first, reproducing the original `mr r25; lwz r26; mr r29; mr r30` sequence.
The cleaned source reaches **100% for all 896 original bytes and 17 full
relocations** under the pinned compiler. No compiler options or ABI changed.

The assignment runs on the condition check even if the tail loop body executes
zero times, so its final append always uses an initialized pointer. It captures
the storage object; operations may change the count/backing array and later
reads observe those changes. The owning reference remains alive through every
use. The pending pointer reference binds to a lifetime-extended pointer
prvalue; the earlier volatile pointer reload is unnecessary for this shape.
Independent review confirmed the source, fresh exact compilation, complete ELF
metadata/relocations, UNUSED artifact, map/Ninja provenance, DOL checksum and
report deltas. Integrated `work` repeats those publication checks.

Tool setup, random candidates and compiler traces remain ignored under build
analysis storage; the tool ran locally and changed no project dependency or pin.

## Active remainder

On 2026-10-04, `fn_8004291C` improved from 93.888885% to **99.25926%**
strict similarity, retaining its original 216-byte size and all three full
relocations. Local-only commit `bae7d2f` on
`task/storage-metadata-large-recovery` preserves the improved NonMatching
candidate; earlier candidate commit `51aff11` remains in its history. Published
`work` still links the original function. The candidate captures the pointer
argument before using its word as the search-index workspace. Every search
exit assigns that workspace; integer-valued pointer temporaries are converted
back to indices without dereferencing them. The external pointer parameter and
two-argument getter declaration remain intact. Independent fresh compilation
and review confirm complete symbol metadata and relocations agree, with just
eight instruction differences: the target pointer and array pointer use swapped
`r5/r6` registers. All other registers now agree with the original.

Declaration permutations, promoted search fields, pointer/reference bindings,
capture helpers, array views and comparison helpers did not remove that last
swap. The earlier compiler evidence identified copy propagation as the cause
of the input/index collision; the workspace approach resolves it. Next:
investigate allocation priority of the preserved target versus generated array
temporaries. The next experiment applies the ordering trace lesson to a named
array capture in the search condition, then checks whether loop code motion
changes array/target priority without changing the instruction sequence.

The 2026-10-04 all-source build, report and integrated verification pass with
49 functions / 5,692 original bytes recovered. The lookup is still NonMatching
and local-only. Register declarations, wide pointer captures, pointer-view
copy/comparison helpers, identity conversions and the bounded initial permuter
runs did not improve its 99.25926% match. This is investigation evidence, not a
hard-blocker claim.

A three-argument function-pointer probe improved the latter's registers by
making the input live through the call. Independent ABI review rejected it:
`fn_80042B1C` overwrites `r5` before reading it, and 25 original call sites across
20 functions supply no consistent third argument. Calling its two-argument
definition through an incompatible pointer is not sound C++. The recovered ABI
remains two arguments; the probe is investigation evidence only.

The remaining lookup has no evidenced hard blocker. The task continues
automatically after checkpoint publication until it is exact or a genuine
external/tool limitation is established.
