# Metadata/storage follow-up recovery

The batch at `0x80042DEC..0x800442F8` is complete: 40 functions, 5,388 original code bytes and 150 full relevant relocations match and link from four synthetic source partitions. Baseline: `fcae0b0`; development branch: `task/metadata-followup-recovery`. Functional commit `baf4780` is integrated into `work`; publication status is recorded in [PROGRESS.md](../../PROGRESS.md).

## Selection and scope

The user requested a large batch. This group reuses verified storage offsets, insertion/removal helpers, low-23-bit reference release, pooled-string conventions and four-byte hidden results. It offered stronger dependency reuse and ABI evidence than the SDK reverb remainder (1,148 bytes with floating-point uncertainty) or standalone `fn_80369284` (7,704 bytes with extensive exception cleanup). Original bodies and dependencies were inspected before selecting the range. The previously paused `fn_8004291C` was excluded and remains original-linked; its experiment branches were preserved.

| Synthetic partition | Original range | Functions | Code bytes | Full relocations |
| --- | --- | --- | --- | --- |
| `unknown80042DEC.cpp` | `0x80042DEC..0x800433BC` | 13 | 1,488 | 35 |
| `unknown800433BC.cpp` | `0x800433BC..0x800439B4` | 3 | 1,528 | 46 |
| `unknown800439B4.cpp` | `0x800439B4..0x8004401C` | 14 | 1,640 | 41 |
| `unknown8004401C.cpp` | `0x8004401C..0x800442F8` | 10 | 732 | 28 |
| Total | `0x80042DEC..0x800442F8` | 40 | 5,388 | 150 |

These recovery boundaries permit independent source linking; they do not establish original translation-unit boundaries. The units own only `.text`, with no owned data/BSS. They use the existing pinned engine size profile; compiler and tool settings are unchanged.

## Reusable source and compiler findings

The shared header records observed offsets and virtual slots with address-based names. Broader semantic class and field meanings remain unknown. Provider results retain the four-byte hidden-result ABI. Factories preserve allocation, index assignment before retain, raw-pointer copying for insertion and owning-reference release afterward. The eight-argument creation call retains its observed argument order and calling convention.

Callback `fn_80043168` returns `bool` and accepts a `void *` context. Declaring its count local before converting the context reproduces the original register allocation. In the creation functions, declaring the target local before the metadata call preserves the entry register assignment; caching the callback before clearing the owner byte preserves the original load order.

Pointer search materializes a one-pointer standard-layout key. Viewing the address of its first member as the enclosing key type preserves the original stack load while respecting the first-member pointer relationship. Removal retains the observed volatile owner reload. The provider cleanup constructs the pointer-search key inside a small inline adapter; constructing it at that point preserves the ordering of the hidden-result stack slot and key temporary. Earlier direct construction reproduced the wrong `0x08`/`0x0C` stack-slot order. Private compiler tracing and distinct source-shape trials resolved that difference without changing optimization settings.

Reference release retains the original low-23-bit test. The reference default constructor is used only on paths that immediately assign its pointer before retaining. Pooled-string lifetimes, virtual result cleanup and floating-point conversion arguments are preserved. `fn_80043F4C` retains its unusual dead-release behavior; `fn_80043DE4` retains unchecked removal after a failed pointer search. No new validation or semantic names were added. Format globals remain external with their observed sizes and SDA relocations.

## Verification and artifact accounting

Normal configure and all-source compilation pass. Strict objdiff uses `functionRelocDiffs=data_value`; every original function and owned section is exact. An independently inspected raw ELF parser confirms ELF32 big-endian PowerPC headers, section attributes, original code bytes, function metadata and all 150 relocation records including target metadata. Original target-object SHA-256 hashes remain unchanged. Map and Ninja linkage confirm all forty functions come from their source objects, and the paused lookup still comes from its original object.

Three source units each emit the same weak reference destructor: 116 bytes and two relocations, totaling 348 emitted bytes and six relocations. The linker coalesces these definitions; the sole destructor map entry is `UNUSED`. All three definitions are excluded from recovered code and relocation totals. The provider unit emits no extra function. Exact linked ranges and the DOL checksum confirm the original executable is unchanged.

Both original and rebuilt DOL SHA-1 equal the repository pin, `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. An independent reviewer privately recompiled all four final units with the pinned compiler and separately verified the exact prefixes, function metadata and full relocations. Source/ABI review found no blocking issues. Final map, checksum and progress review passes with no blocking findings. Normal publication gates pass again after integration into `work`.

Ignored evidence is retained under `build/GDJEB2/analysis/metadata-followup-recovery/`: baseline/final reports, target list, original hashes, strict diffs, the independent ELF parser, aggregate verifier and private source-shape experiments. Compiler-trace evidence is retained under the ignored retained-register-recovery analysis directory. Original inputs and generated assembly are excluded from commits.

## Progress

| Metric | Before | After | Gain |
| --- | --- | --- | --- |
| Matched code | 382,648 / 4,141,552 (9.239241714%) | 388,036 / 4,141,552 (9.369337871%) | 5,388 bytes; +0.130096157 percentage points |
| Fully linked code | 368,560 / 4,141,552 (8.899079379%) | 373,948 / 4,141,552 (9.029175536%) | 5,388 bytes; +0.130096157 percentage points |
| Matched data | 165,586 / 1,503,795 (11.011208310%) | 165,586 / 1,503,795 (11.011208310%) | 0 bytes; 0 percentage points |
| Matched functions | 1,350 / 23,334 | 1,390 / 23,334 | 40 |
| Completed units | 209 / 5,171 | 213 / 5,175 | 4; total units +4 |

Code, data and function denominators are unchanged. Four synthetic partitions increase the unit denominator by four. Configured engine totals are 29,068 code bytes, 354 data bytes, 206 functions and 41 completed units.

No target in this batch remains unrecovered or blocked. A future selection should inspect the next original region beginning at `0x800442F8`, compare its dependency/ABI evidence with alternatives, and refresh the normal baseline before choosing scope. This proposal starts no new batch and does not resume the paused lookup.
