# Proposed parallel Alchemy recovery batch

Date: 2026-10-01. Selection-only request; no recovery source, split, symbol,
compiler setting or source-link status changed. Baseline: clean personal-fork
`work` at `86c666a`. Historical experiment tips remain intact.

## Recommendation and ownership

Use one coordinator and three recovery workers. Each worker owns one proposed
synthetic source partition under `src/Alchemy/src/igCore/`. These boundaries
support independent compilation and integration; they do not establish
original translation-unit boundaries.

| Worker | Proposed file | Range (end exclusive) | Functions | Original bytes | Text relocations |
| --- | --- | --- | ---: | ---: | ---: |
| A: storage and byte conversion | `unknown8003FD40.cpp` | `0x8003FD40..0x8003FF44` | 6 | 516 | 15 |
| B: constructor/wrapper/accessor | `unknown8003FF44.cpp` | `0x8003FF44..0x80040074` | 8 | 304 | 11 |
| C: aggregate string builder | `unknown80040DDC.cpp` | `0x80040DDC..0x80041020` | 1 | 580 | 21 |
| **Total** | | | **15** | **1,400** | **47** |

Function inventory, with decimal original sizes:

- A: `fn_8003FD40` 88, `fn_8003FD98` 12, `fn_8003FDA4` 84,
  `fn_8003FDF8` 108, `fn_8003FE64` 88, `fn_8003FEBC` 136.
- B: `fn_8003FF44` 76, `fn_8003FF90` 60, `fn_8003FFCC` 60,
  `fn_80040008` 32, `fn_80040028` 8, `fn_80040030` 52,
  `fn_80040064` 8, `fn_8004006C` 8.
- C: `fn_80040DDC` 580.

## Why this batch

A reuses established byte parsing/formatting and four-byte hidden-result
patterns. B closely mirrors the exact constructor and wrapper shapes in
`unknown8003EB7C.cpp`. C extends the recovered aggregate layout and concentrates
new owning-string lifetime questions in one file. Taking the complete A and B
groups also covers the entire 820-byte original remainder before the recovered
aggregate dispatchers. B provides a useful independent lane instead of dividing
the smaller A group between workers.

The two ledger candidates alone total 1,096 bytes and could support two workers,
or three by dividing storage from conversion. Adding B raises the selected
potential to 1,400 bytes without adding a new shared implementation dependency.
Read-only worker scouting confirmed the ABI reuse and lack of source ownership
conflicts; the coordinator independently counted functions, bytes and full
relocations from the refreshed report and original ELF objects.

Two alternatives were inspected:

- SDK `reverb_std.c` has one unmatched 1,148-byte `ReverbSTDCreate` and five
  matched functions. A fresh pinned scratch reproduces 97.83972% function
  similarity, but exact verification fails: emitted text is 3,552 versus 2,620
  bytes, and `.sdata2` is 88 versus 56 bytes with different flags. Six extra
  code functions and local math constants require artifact/linking investigation
  as well as register allocation. Reserve it for a separate SDK task.
- `0x80041020..0x800413C4` contains six functions / 932 bytes, including a
  628-byte lazy metadata initializer. It introduces masked object reference
  counts, metadata traversal and registry dependencies. Its larger potential
  does not outweigh the new ABI/layout investigation for this first batch.

Exclude adjacent `fn_80041020` and `fn_80041024`: original tables associate them
with the metadata group rather than the aggregate string builder.

## Dependencies, unknowns and first experiments

A's receiver uses words at `+0x20` and `+0x34` and virtual slot `0x8C`;
slot `0xD0` belongs to the provider returned by `fn_80037E48`.
Preserve the signed fill-loop bound and repeated count load. The parser uses
original `%d%n`, truncates its parsed integer to a byte and returns consumed
count. The formatter takes a signed byte and returns a four-byte owning string
through hidden storage. Adapt exact `unknown8003EA18.cpp` and
`unknown8003EAE8.cpp` shapes, retaining the latter's nontrivial copy declaration
and integer-form stack-address null check. GPR declaration order remains an
experiment for the wrappers.

B calls original `fn_8006388C`, `fn_800638E0`, `fn_800639E4` and `fn_80063B1C`;
those bodies corroborate initialization, copy and release calling conventions.
Use the exact `unknown8003EB7C.cpp` source shapes, including scoped
`auto_inline off` where needed to preserve the constructor's direct initializer
call. Keep `lbl_80473F24` external. The virtual wrapper passes a stack byte to
slot `0x8C`; the final accessor loads an unsigned halfword at `+0x14`.

C uses hidden result `r3`, receiver `r4`, arguments `r5/r6`, owner slot `0x5C`,
owner storage `+0x34`, storage count `+0x08`, array `+0x10`, element offset
`+0x08` and owning-string slot `0xE4`. Start with the established aggregate
size profile and a nontrivial four-byte result view; compare the original
`0x40` frame, stack locals and `_savegpr_20` before register tuning. Preserve
retain/release order, the observed string offsets and the absence of reference
array cleanup. Review implicit destructor and UNUSED emissions. This lane has
the greatest compiler/lifetime uncertainty.

A and C share the established pool-acquisition signatures and original
`lbl_80562140`, not a dependency on recovering each other's functions. Freeze
compatible declarations before dispatch, or keep narrowly scoped local views.
No worker needs to edit `igStringRef.h`. Original pool/global storage, format
strings and vtables remain original; no owned data/BSS is selected. The table
`lbl_80473F24` references A and B but causes no edit conflict when left external.

## Preparation and completion gates

Follow [the parallel workflow](../decomp/parallel-workflow.md). Before workers
start, the coordinator must prepare the three NonMatching source partitions:
A/B currently share `auto_03_8003FD40_text`; C is the prefix of
`auto_03_80040DDC_text`, which extends to `0x800946A0`. Generate exact pinned
compiler commands and original target objects, then create three worktrees from
one prepared revision. Keep the configured coordinator build root immutable
during private worker iteration. Only the coordinator edits configuration,
splits, symbols, shared headers and the ledger. Workers return focused source
commits and private scratch evidence.

Success requires all 1,400 original code bytes, 15 functions and 47 relocations
to pass strict objdiff and independent contextual ELF checks, with original
target metadata and any emitted artifacts explicitly accounted for. Promote
only independently exact subsets, verify map source provenance, compile all
configured source, check the pinned DOL and obtain independent review. Exact
checkpoints do not close unresolved targets. Potential bytes are not gains.

## Refreshed baseline and evidence

Normal configure and `ninja all_source progress build/GDJEB2/report.json` pass.
Original and source-linked DOL SHA-1 both equal
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`, agreeing with `build.sha1`.

- Matched code: 373,836 / 4,141,552 bytes (9.026471%).
- Fully linked code: 359,748 / 4,141,552 bytes (8.686309%).
- Matched data: 165,586 / 1,503,795 bytes (11.011208%).
- Matched functions: 1,272 / 23,334; completed units: 196 / 5,158.

Selection adds zero recovered bytes/functions/units and changes no denominator.
Ignored aggregate totals are saved in
`build/GDJEB2/analysis/parallel-batch-selection-2026-10-01/baseline-totals.json`.
Original evidence is in `config/GDJEB2/symbols.txt`,
`build/GDJEB2/asm/auto_03_8003FD40_text.s`,
`build/GDJEB2/asm/auto_03_80040DDC_text.s`, and the original data/sdata assembly.
The preceding [aggregate continuation handoff](2026-10-01-aggregate-dispatch-continuation.md)
records the already recovered layout. **Recovery remains proposed, not active.**
