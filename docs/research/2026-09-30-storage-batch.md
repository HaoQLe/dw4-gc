# Storage helper matching recovery

Investigated from published baseline `c51275c` on 2026-09-30. Authorized
scope: `0x8003ED10..0x8003F0D8`, seven functions, 968 original code bytes.
Six functions / **748 bytes** match and link from source in functional
commit `90b4fc8`. One 220-byte function remains original. The task stops
after this batch; no later source recovery is included.

## Investigation and recovery boundaries

The sequence was baseline refresh, assembly/dependency/global/relocation
inspection, targeted compilation and strict objdiff iteration, then exact
ELF and whole-build verification. Compiler settings remain pinned. Earlier
completed work and all four earlier local mismatches were left untouched.

| Function | Original bytes | Result |
| --- | ---: | --- |
| `fn_8003ED10` | 224 | Exact, source-linked |
| `fn_8003EDF0` | 56 | Exact, source-linked |
| `fn_8003EE28` | 56 | Exact, source-linked |
| `fn_8003EE60` | 228 | Exact, source-linked |
| `fn_8003EF44` | 80 | Exact, source-linked |
| `fn_8003EF94` | 220 | Original; local NonMatching experiment |
| `fn_8003F070` | 104 | Exact, source-linked |

Two synthetic partitions preserve the verified subset around the remaining
hole: `unknown8003ED10.cpp` owns `0x8003ED10..0x8003EF94` (644 bytes), and
`unknown8003F070.cpp` owns `0x8003F070..0x8003F0D8` (104 bytes). The local
header shares the observed ABI view. Address adjacency and these splits
do not establish an original translation-unit boundary. No data or BSS
ownership changes, replacement vtable, strings or new globals are needed.

## Reusable evidence

The object stores pointers at `+0x10/+0x14`. Their storage has signed words
at `+0x08/+0x0C` and a four-byte-element pointer at `+0x10`.
Dependency `fn_8004155C` changes the allocation and stores its signed size
argument at `+0x0C`; `fn_80041660` chooses an allocation size, calls that
dependency and stores its requested value at `+0x08`. `fn_80041AF8` appends
four-byte elements with `memcpy`. These implementations were inspected;
they remain original and are outside the recovered byte total.

Original table `lbl_804731E0` contains `fn_8003EE28` at slot `0x5C`,
`fn_8003EE60` at `0x60`, `fn_8003EF44` at `0x64`, `fn_8003EF94` at `0x68`,
`fn_8003F070` at `0x6C` and `fn_8003F0D8` at `0x70`. The table and both
four-byte `.sbss` globals `kSuccess__3Gap` / `kFailure__3Gap` remain original.
Only used virtual signatures are declared; other slots are placeholders.

- `fn_8003ED10` performs the observed zero-size operations on both storage
  objects, including the repeated operation and later null test for `+0x14`.
  It preserves that ordering rather than folding the repeated operation.
- `fn_8003EDF0` calls slot `0x60` with zero, using a four-byte stack result
  in `r3` and receiver in `r4`. The result view's declared nontrivial copy
  constructor establishes hidden-result ABI; it emits no copy or destructor.
- `fn_8003EE28` counts zero words over a signed element count and advances
  the pointer by four bytes per iteration.
- `fn_8003EE60` has hidden result storage in `r3`, receiver in `r4`, and
  signed input in `r5`. Zero input performs the zero-size operation and
  copies the original success word to return storage. The loop advances
  its index and found count but **does not advance the element pointer**.
  On the selected count it requests `index + 1` and returns the original
  success word; otherwise it returns the original failure word. This odd
  loop is the original instruction behavior. Declaring the index before
  the found counter, while initializing it in the loop, gives exact
  `r4`/`r7` allocation and instruction scheduling.
- `fn_8003EF44` rejects a negative/out-of-range index or null backing
  pointer, then returns the element pointer only when index zero or its
  preceding word is zero.
- `fn_8003F070` calls slot `0x70`, returning its value unless it is `-1`,
  in which case it calls slot `0x68` with the original input.

Unknown field meanings and result semantics beyond the observed global
copies remain unnamed. No relation to `igArkCore`'s class layout is inferred.

## Retained mismatch and bounded variants

Local-only `task/igarkcore-storage` at `ad82114` retains all seven candidates
in one NonMatching unit. It is not an ancestor of published recovery and
is not pushed. The best retained `fn_8003EF94` has strict similarity
**77.61818%**, emitting **232 bytes** versus the original **220**.

The body recovers the null-terminated four-byte-element scan, `count + 1`,
previous storage size, conditional doubled allocation, `fn_80041AF8`,
optional slot `0x78` call and return of the previous size. It allocates the
four long-lived values in the original `r28..r31`. Remaining differences:
individual GPR saves/restores replace `_savegpr_28` / `_restgpr_28`, count
initialization moves earlier, and the capacity check reuses `r31` instead
of reloading storage `+0x08` into `r0`. The epilogue consequently differs.

Bounded attempts included count increment versus separate length, early
length/previous declarations, unsigned length, long return, an inline
storage-size comparison view and a volatile storage view. The inline view
and previous-value declaration improved 71.43636% to 77.61818%; the other
variants did not resolve the mismatch. Compiler flags were unchanged.
Seek new evidence before revisiting these variants.

Earlier branches remain `task/igarkcore-lifecycle` at `45030f5` and
`task/igarkcore-post-lifecycle` at `67cb882`; their four mismatches still
link original code and were not revisited.

## Exact verification

Strict objdiff with `functionRelocDiffs=data_value` gives 100% for all six
functions and both complete original text sections. Independent big-endian
ELF comparison verifies **748 original code bytes**, section attributes,
all six function definitions and **ten full relocation records** (all in
the 644-byte partition). Records agree in location, type, addend and full
target symbol metadata; only relocation-controlled instruction bits are
masked. There is no target renaming or compiler artifact subtraction.
Neither new object emits extra code or owns data/BSS.

All configured source compilation passes. The link map confirms all six
recovered functions come from source and all five retained mismatches
come from original objects. Both original and rebuilt DOL SHA-1 equal
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. The earlier UNUSED 116-byte
string and 116-byte reference-view destructors remain excluded from all
recovered-byte totals.

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
# Targeted compilation and strict objdiff for both new partitions.
/opt/homebrew/bin/python3 build/GDJEB2/analysis/storage/verify.py --linked
shasum orig/GDJEB2/sys/main.dol build/GDJEB2/main.dol
git diff --check
```

Generated comparison reports, source variants and supplemental ELF verifier
remain ignored under `build/GDJEB2/analysis/storage/`. Final independent
review and post-integration verification are recorded in `PROGRESS.md`.

## Progress and next proposed candidate

| Metric | Before → after | Percentage-point delta | Exact byte gain |
| --- | --- | --- | --- |
| Matched code | 8.831568455% → 8.849629318% | +0.018060862 | +748 |
| Fully linked code | 8.491406120% → 8.509466982% | +0.018060862 | +748 |
| Matched data | 11.011208310% → 11.011208310% | 0 | 0 |

Matched code: 365,764 → 366,512; linked code: 351,676 → 352,424.
Matched functions: 1,225 → 1,231. Completed units: 179 → 181.
**Unit denominator changes: 5,143 → 5,146**, from two source partitions
and one original-code hole. Code/data/function denominators remain
4,141,552 / 1,503,795 / 23,334. Engine totals now cover nine configured
source units, 7,544 code bytes and 354 data bytes, not the whole engine.

Next proposed bounded candidate: `0x8003F0D8..0x8003F5B4`, four functions,
1,244 bytes. Assembly inspection shows unsigned four-byte-element sequence
comparison, secondary-storage lookup/probing, slot `0x74/0x78/0x7C` calls,
allocation dependencies and object release at `+0x04` with the low-23-bit
test. Additional dependencies include `fn_80068430`, `fn_800363B0`,
`fn_80066E1C` and original global `lbl_8055D7B0`. Verify ABI signatures,
pointer-difference division, new reference storage and register-save forms
before choosing boundaries. This proposal does not start or authorize the
next batch.
