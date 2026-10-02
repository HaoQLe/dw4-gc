# Storage-allocation recovery — active batch

Date: 2026-10-02. Baseline `work`: `5cf7f79`. Authorized scope is three
functions / 380 original bytes at `0x8004155C..0x800416D8`. Two functions /
128 bytes are verified and source-linked in functional checkpoint `8df3ca9`. The 252-byte
allocator remains active; this is not batch closure or a hard blocker.
Local NonMatching experiment branch `task/storage-allocation-experiments`
retains tip `031a02b`. No experimental source is published.

## Selection and behavior

The adjacent reallocation/accessor/growth group reuses observed storage offsets
`+0x08/+0x0C/+0x10`, context/free helpers and the four-byte hidden-result ABI.
SDK reverb offers 1,148 bytes but has an independent floating-point register
mismatch. Later insertion/search routines add callback and live-range patterns.
This smaller group has stronger dependency reuse and ABI evidence.

| Function | Bytes | Status and behavior |
| --- | --- | --- |
| `fn_8004155C` | 252 | Active allocator: frees/resets on zero capacity, otherwise resolves metadata, allocates using element size, copies the smaller old/new capacity and frees old storage |
| `fn_80041658` | 8 | Exact and linked: returns original global `lbl_80561D3C` |
| `fn_80041660` | 120 | Exact and linked: starts from max(old capacity,4), doubles below 1,024 then adds 1,024 until sufficient, reallocates and writes count |

The source partition is synthetic and does not claim an original translation
unit. Globals and the allocator remain external/original. Signed comparisons,
unusual unchecked arithmetic/null assumptions and unchanged arguments remain
intact. No semantic names or broader class layouts are inferred.

Inspected dependencies establish metadata indexed lookup (`fn_800658E4`),
context lookup (`fn_80068430`) and null-guarded context freeing
(`fn_80068390`). Allocation helper `fn_80062BB8` uses metadata `+0x3C`,
unsigned-halfword virtual slot `0x64`, context slot `0xDC`, metadata-selected
storage offset, and a four-byte hidden result containing original success/failure.

## Exact checkpoint verification

Normal pinned GC/2.6 with the existing engine `-O4,s` profile reproduces both
checkpoint functions. Named old-capacity/max expression preserves the original
extra move; ordinary signed growth loop preserves its branches.

Commands run:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 tools/decomp.py scratch unknown80041658 --keep
/opt/homebrew/bin/python3 tools/decomp.py verify \
  build/GDJEB2/obj/Alchemy/src/igCore/unknown80041658.o \
  build/GDJEB2/src/Alchemy/src/igCore/unknown80041658.o
/opt/homebrew/bin/python3 build/GDJEB2/analysis/storage-allocation-recovery/checkpoint/verify.py
```

Strict objdiff (`functionRelocDiffs=data_value`) is 100% for both functions and
`.text`. Independent parser checks all 128 bytes, allocated section attributes,
full function metadata and both complete relocation records including target
metadata. Original target SHA-256 remains unchanged. Map/Ninja identify source
for both functions, with no UNUSED artifacts or extra code/data/BSS. Both DOL
SHA-1s equal repository-pinned `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.
All configured source compilation and the normal checksum target pass.
Independent review repeats fresh private pinned compilation and exact ELF checks,
checks architecture/type/flags and verifies provenance, artifacts, checksums and
report deltas; no blocking findings. All publication checks pass again after
integration into `work`.

| Metric | Baseline → checkpoint | Gain |
| --- | --- | --- |
| Matched code | 376,576 → 376,704 / 4,141,552 | +128 bytes; +0.003090629 pp |
| Fully linked code | 362,488 → 362,616 / 4,141,552 | +128 bytes; +0.003090629 pp |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 |
| Matched functions | 1,298 → 1,300 / 23,334 | +2 |
| Completed units | 201 → 202 | +1 |
| Total units | 5,162 → 5,164 | +2 from interior partition |

No code/data/function denominator changes. Earlier 348-byte/six-relocation UNUSED
destructor artifacts remain excluded. Configured engine becomes 17,736 code
bytes, 354 data bytes, 116 functions and 30 complete units.

## Active allocator investigation

Best candidate: 252 emitted / 252 original bytes; 96.82539% strict function
similarity. Accessor/growth are exact in that older candidate, but separate
publication leaves the allocator original. All allocator registers, operations
and relocations agree except the order of three instructions at `+0x70..+0x78`:

```text
Original:  mr r31,r3; mr r3,r30; lwz r12,0(r30)
Candidate: lwz r12,0(r30); mr r31,r3; mr r3,r30
```

Short-value reference reproduces signed extension after metadata lookup.
Context-return pointer-value reference retains the seventh saved register.
Separate declaration order fixes metadata/old-storage/size-provider registers;
copy-length declaration order fixes minimum registers. Default and size profiles
produce the same allocator residual. No compiler/tool pin changes.

Rejected source hypotheses include ternary/explicit minimum expressions,
aggregate and union state, signed/unsigned/volatile index views, pointer and
object reference views, context constness/word/concrete-pointer return views,
raw sizing table calls, volatile-qualified sizing receivers, inline index/size/
context helpers, sizing call as allocator argument, size truncation/return-width
variants and separate receiver/size declarations. None resolves final scheduling.
Ignored `variants.json`, saved candidate sources and private strict reports
record emitted sizes and scores; `only-load-order.cpp` is the best source.

The existing local GC/2.6 debugger produced frontend AST, backend PCode and
register graph dumps under ignored analysis storage. Emulator access needed host
cache information and a localhost debugger connection; normal pinned wibo
compilation remains the publication path. The backend gives the original B8
move/move/load order after register allocation. Late peephole forwarding replaces
the load base `r3` with `r30`; final scheduling moves the now-independent load
before both moves. Independent reviewer confirms this phase diagnosis.

Next concrete investigations: compare already recovered virtual calls with the
desired post-call move/move/load order and their backend forwarding; test a
pointer-value temporary for the sizing receiver and inspect backend15/16 for a
preserved dependency. Existing object-reference and plain receiver temporaries
are exhausted. This is an investigation stall, not an evidenced hard blocker.
Continue the authorized allocator automatically after checkpoint publication.
