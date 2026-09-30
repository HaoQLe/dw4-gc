# Alchemy igArkCore lifecycle recovery

Verified on 2026-09-30 against baseline `162efaf`. Functional commit is
recorded in [PROGRESS.md](../../PROGRESS.md). Only verified recovery is
published to personal-fork `work`; no upstream updates are part of this task.

## Recovered batch and synthetic partitions

All nine authorized lifecycle functions match and link from source:

| Function | Address | Original code bytes |
| --- | --- | --- |
| `fn_8003D49C` | `0x8003D49C` | 8 |
| `fn_8003D4A4` | `0x8003D4A4` | 8 |
| `fn_8003D4AC` | `0x8003D4AC` | 376 |
| `igArkCore::initCore()` | `0x8003D624` | 1,532 |
| `dtor_8003DC20` | `0x8003DC20` | 116 |
| `igArkCore::preExit()` | `0x8003DC94` | 88 |
| `igArkCore::exit()` | `0x8003DCEC` | 1,336 |
| `fn_8003E224` | `0x8003E224` | 120 |
| `igArkCore::exitBootstrap()` | `0x8003E29C` | 436 |
| **Lifecycle total** | `0x8003D49C..0x8003E450` | **4,020** |

Inspection justified expansion into the authorized helper region:
`initCore` calls `fn_8003E474`, bootstrap calls `fn_8003E848`, and both
teardown methods call `fn_8003E85C`. The remaining verified helpers reuse
the same opaque offsets, callback storage, allocation and bounded string
copy patterns. Fifteen helpers add **1,072 bytes**. The two unmatched
helpers contribute no published recovery.

| Source partition | Original range | Original code bytes |
| --- | --- | --- |
| `igArkCore.cpp` | `0x8003D1C8..0x8003E4FC` | 4,916 |
| `igArkCoreCallbacks.cpp` | `0x8003E574..0x8003E8B8` | 836 |
| `igArkCoreAllocation.cpp` | `0x8003E974..0x8003E9B4` | 64 |

The main partition includes the earlier 724 recovered bytes and four
36/64/36/36-byte wrappers. The callback partition contains
`fn_8003E574`, six buffer setters, `fn_8003E848` and `fn_8003E85C`.
The allocation partition contains `igArkCore::operator new/delete`.
The two small wrapper files select definitions from `igArkCore.cpp`;
all recovered implementation stays in the proposed source. These are
explicitly **synthetic recovery partitions**, chosen so exact subsets
link independently across two original-code holes. They do not establish
original translation-unit boundaries. Original data/global ownership,
symbols and compiler settings remain unchanged.

## Reusable assembly and matching evidence

- Path getters read the pooled-string pointers at `+0x398` and `+0x39C`.
  Path setup preserves pool acquisition, increment/release ordering and
  the temporary string's cleanup. The UART callee remains the previously
  recovered function; it was not recovered again.
- Object release decrements the word at `+4`, reloads it and tests its
  low 23 bits before calling `fn_80066E1C`. This differs from the pooled
  string's eight-byte prefix and zero-count release operation. Local ABI
  views preserve the observed operations without naming unknown fields.
- `initCore` uses the original external data anchor `lbl_80463100` plus
  observed offsets, original global storage and direct-call targets.
  Reference temporaries preserve assignment and end-of-scope cleanup.
  `exit` preserves list traversal, reverse callback order, virtual calls
  and release/reset ordering; `exitBootstrap` unwinds the bootstrap
  counts and storage using the established layout.
- Ignored four-byte virtual-call results use hidden stack return storage
  in `r3` and the receiver in `r4`. A nontrivial copy-constructor
  declaration reproduces this ABI without inferring a result meaning.
  The observed 64-bit argument/return pairs remain 64-bit. Boolean flag
  declarations reproduce the original scheduling for the used 0/1
  arguments; unused virtual-slot signatures remain placeholders.
- Explicit callback byte offsets and declaration/initialization order
  recover the original induction registers. The reverse callback lookup
  uses `index * sizeof(void*)`, preserving the unsigned offset arithmetic
  and original per-iteration shift. A local `auto_inline` pragma keeps
  the observed out-of-line path-setup call while explicit inline reference
  operations still match. The pinned engine flags are unchanged.

## Exact publication checks and compiler artifacts

All configured source compiles with pinned `GC/2.6`, `-O4,p`,
`-inline auto` and the existing ABI options. Strict objdiff with
`functionRelocDiffs=data_value` reports 100% for every original function
and owned code/data/BSS section in all three partitions.

An independent big-endian ELF comparison verifies **5,816 original code
bytes**, the existing **345 diagnostic bytes and one BSS byte**, section
types/flags/alignment and **267 relevant relocation records** (252 main,
13 callbacks, two allocation). Relocation type, addend and full target
metadata agree after removing only discarded artifact ranges from source
offsets. Unique compiler-local label numbers change from `@24` to `@42`
and `igonce$15` to `igonce$33`; the comparison normalizes only these names
after independently requiring their identical section/value/size/binding/
type/visibility and owned bytes. External target names are unchanged.

The source main object's text is **5,148 bytes**, not 4,916. The existing
**116-byte `igStringRef` destructor** remains `UNUSED`, with two extra
relocations. The local reference view additionally emits an **UNUSED
116-byte `UnknownObjectRef` destructor**, also with two relocations. The
comparison excludes exactly these 232 artifact bytes and four records;
neither destructor contributes executable bytes or reported recovery.
The complete ELF objects are therefore not described as identical.

The link map independently confirms every recovered function comes from
the three source objects, while `fn_8003E4FC` and `fn_8003E8B8` still come
from original objects. Both original and source-linked DOL SHA-1 equal
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.

Commands used:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
# Strict objdiff was run separately for each of the three source partitions.
/opt/homebrew/bin/python3 build/GDJEB2/analysis/verify_igArkCore_lifecycle.py
shasum orig/GDJEB2/sys/main.dol build/GDJEB2/main.dol
git diff --check
```

Generated assembly, strict outputs, the supplemental ELF verifier and
compiler experiments remain ignored under `build/`. Independent review
found no blocking issues and separately recompiled all three partitions,
checked strict results, the ELF comparison, map, checksums and deltas.

## Progress and retained mismatches

| Metric | Before → after | Percentage-point delta | Exact byte gain |
| --- | --- | --- | --- |
| Matched code | 8.695001294% → 8.817950372% | +0.122949078 | +5,092 |
| Fully linked code | 8.354838959% → 8.477788037% | +0.122949078 | +5,092 |
| Matched data | 11.011208310% → 11.011208310% | 0 | 0 |

Matched bytes: 360,108 → 365,200; linked bytes: 346,020 → 351,112.
Matched functions: 1,189 → 1,213 (+24). Completed units: 174 → 176 (+2).
**Unit denominator changes: 5,134 → 5,138**, from two additional source
partitions and two original-code holes. Code/data/function denominators
remain 4,141,552 bytes / 1,503,795 bytes / 23,334 functions. The engine
category's 100% covers only its four configured units (6,232 code bytes
and 354 data bytes), not the whole unrecovered engine.

The full NonMatching experiment remains local on `task/igarkcore-lifecycle`
at `45030f5`, including both unfinished bodies. It is not an ancestor of
published recovery and is not pushed:

- `fn_8003E4FC` (120 bytes): best bounded experiment 55.333332%; loop
  registers can match, but the compiler emits individual register
  saves/restores instead of `_savegpr_28` / `_restgpr_28`. Member syntax,
  accessors, callback return types and induction variants did not resolve
  the prologue/epilogue mismatch.
- `fn_8003E8B8` (188 bytes): best 92.97872%; capacity remains in `r4`
  instead of `r3`, and signed division emits `srwi/add/srawi` instead of
  `srawi/addze`. Preserve the observed unusual growth expression; do not
  replace it with conventional 1.5× growth. Reordered expressions and
  typed/local views produced no exact match.

Next proposed bounded candidate: `0x8003E9B4..0x8003ED10`, 14 functions
and 860 code bytes. Inspect dependencies and original assembly before
setting source boundaries; reuse this task's ABI/offset patterns only
where supported. Revisit the two retained mismatches when new evidence
offers a better approach. This task stops here; the next batch is not
started or authorized by this proposal.
