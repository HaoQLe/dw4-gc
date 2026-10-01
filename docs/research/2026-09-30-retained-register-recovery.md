# Retained register recovery continuation

Date: 2026-09-30. This continues the user-targeted ten-function retained batch from the seven-function checkpoint `9849800`. The standing continuation rule kept all unfinished targets active through investigation stalls and execution interruptions.

## Result

All three remaining functions / **804 original bytes** now match and source-link. The full retained batch therefore recovers **ten functions / 3,316 code bytes**, with 69 full relocation records and no additional owned data/BSS. The local experiment branches are preserved unchanged.

| Function | Bytes | Full relocations | Profile | Functional commit |
| --- | ---: | ---: | --- | --- |
| `fn_8003F2B8` hash | 104 | 0 | Existing default `-O4,p` | `5a2992f` |
| `fn_8003F320` probe | 220 | 2 | Existing per-unit `-O4,s` | `bee25a8` |
| `fn_8003F0D8` lookup | 480 | 0 | Existing default `-O4,p` | `45a1e2d` |

Compiler/tool pins and shared ABI declarations are unchanged. Source partitions isolate these verified functions without asserting historical translation-unit ownership. All game inputs, emitted assembly, compiler traces and failed candidates remain ignored.

## Source changes that resolved the mismatches

The hash ternary introduced a frontend compiler temporary for count and swapped its register with the storage pointer. Declaring storage, sum and count in that order and assigning count through explicit branches keeps the scalar named and reproduces all 104 bytes with normal settings. Simply permuting declarations while retaining the ternary did not solve it.

The probe's plain backing-pointer read was hoisted out of the unsuccessful loop. Volatile access retained the reload, but a named pointer exchanged registers with the byte offset; temporary-reference forms alone also failed. Binding the volatile-loaded pointer value to a constant reference and assigning `byteOffset` in the indexed read preserves the pointer snapshot for the guarded store, the original loop reload and all original registers. Existing return/guard behavior, including zero count and an empty slot with an invalid index, remains intact. Both helper relocation records and their targets match.

Lookup initially differed only in cached count versus comparison-word registers. A local aggregate holding storage and count makes the comparison word match, but reading count through that cached storage swaps the two state registers. Reading count through `object->unknown14` after capturing storage produces the original allocation. The two reads have no intervening call or write, and both follow the virtual slot call as in the original. The aggregate is local state, not a recovered external structure or ABI claim. Sentinel returns, wraparound, comparison ordering and the fallback scan remain unchanged. The lookup also matches under the existing size profile, but uses normal default settings in the published build.

## Verification

Normal configure, all configured source compilation and source-linked DOL checksum pass. Strict objdiff uses `functionRelocDiffs=data_value`. Independent ELF comparisons check exact allocated-section attributes, normalized raw code, function symbol binding/type/visibility/size and every relevant relocation with full target metadata. Lookup and hash have no relocations; probe has two. The new objects emit only their recovered text, no additional functions/data/BSS or UNUSED artifacts. Earlier compiler artifacts remain excluded from totals.

Ninja and the link map confirm all ten functions use configured source objects. Original and rebuilt DOLs both have the pinned SHA-1 `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Independent reviews cover each checkpoint. Existing seven units and both shared-header consumers remain exact. Publication checks passed again after integration into `work`.

Ignored reproducible checks are `build/GDJEB2/analysis/retained-register-recovery/verify_continuation.py` for these three and `build/GDJEB2/analysis/retained-recovery/verify.py` without its obsolete `--linked` assumption for the prior seven. The first script uses the pre-continuation report baseline. The old linked check intentionally still encodes the historical three-original-functions checkpoint and must not be used unchanged.

| Continuation metric | Before → after | Delta |
| --- | --- | --- |
| Matched code | 369,600 → 370,404 / 4,141,552 | +804 bytes |
| Fully linked code | 355,512 → 356,316 / 4,141,552 | +804 bytes |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes |
| Matched functions | 1,243 → 1,246 / 23,334 | +3 |
| Completed units | 190 → 193 | +3 |
| Unit denominator | 5,152 → 5,154 | +2 from isolating hash between two original remainders |

## Investigation infrastructure and preserved evidence

Frontend AST, backend PCode and register graphs from the existing GC/2.6 compiler made the successful hypotheses concrete. The primary-source [mwcc-debugger](https://github.com/cadmic/mwcc-debugger) instrumentation ran through a local retrowin32 GDB stub and a small Python remote adapter because native GDB was unavailable. Unicorn execution required host cache information outside the sandbox. The debugger runner's version-resource display differs from wibo; the compiler executable hash and diagnostic text/relocations were checked against normal pinned compilation. Publication always uses normal Ninja commands, not the debugger runner.

The reusable ignored wrapper is `build/GDJEB2/analysis/retained-register-recovery/debug_run.py`. Temporary runner/adapter paths are under `/private/tmp` and may need reconstruction if cleared. Compiler traces, strict reports and distinct failed variants are indexed in the ignored analysis directory. The hash, probe and lookup breakthroughs were respectively `hash_named_phi`, `probe_offset_assignment_1_2` and `lookup_state_layout_4`; configured recompilation is the final authority.

Prior local tips remain lifecycle `45030f5`, post-lifecycle `67cb882`, storage `ad82114`, continuation `fe8ce09`, string/parser `c14e101` and retained experiments `ec1093d`. Their mismatches are historical evidence, not outstanding targets. No target from this batch remains hard blocked or unrecovered.

The next candidate is the allocator/storage dispatch near `fn_8003FD40`. Its calling conventions and virtual layout still need inspection before selecting a new batch. This proposal does not start that batch.
