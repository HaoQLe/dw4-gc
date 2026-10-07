# Generator round 3 (2026-10-06)

## Result

Both matched and fully linked code now exceed 30%. All generated units are source-linked, and the DOL SHA-1 is unchanged (`e409a88a…`).

| Metric | Before (`c5cdee8`) | After | Gain |
| --- | --- | --- | --- |
| Matched code | 1,014,728 (24.501154%) | 1,248,112 (30.136335%) | +233,384 bytes (+5.635181 pp) |
| Fully linked code | 1,013,256 (24.465612%) | 1,246,640 (30.100792%) | +233,384 bytes (+5.635180 pp) |
| Matched data | 222,582 (14.801353%) | 225,222 (14.976909%) | +2,640 bytes (+0.175556 pp) |

Matched functions rose from 13,177 to 14,499. Units now total 6,564 (from 8,777), of which 3,339 are complete (from 4,816). The drop is from consolidation: generated runs are no longer split at earlier generated-unit boundaries, so 3,099 generated units replace the previous 4,576. The code, data and function denominators are unchanged.

## What recovered the bytes

**Vtable-read temporaries with members: about 165 KB.** A temporary is constructed out of line, receives inline vtable stores, has the word at `_arkCore+0x394` read, and is then destroyed inline. Several parts of the source shape had to match the original:
- **Nested destructor levels.** Each class level restored after the read owns the members released right after its vtable store, so the generated hierarchy has one class per level and destruction interleaves exactly.
- **Members.** They are pooled strings or reference pointers, zero-initialized right after their owner's constructor vtable store.
- **Root class.** In exception-enabled units, the object must be fully constructed by the out-of-line base constructor, as in the original, so that no cleanup action is registered. A root class with a trivial destructor runs that constructor.
- **Inline class `operator delete`.** It keeps the compiler's unused deleting destructors from referencing an undefined global delete.
- **Out-of-line destructor variant.** The temporary's class is destroyed by a call with flags `-1`.

**Compiler profiles.** Some game-side units were built:
- optimized for speed (`-O4,p`): stores registers individually instead of calling `_savegpr`;
- with `-use_lmw_stmw on`: saves registers with `stmw`/`lmw`.

Units carry `speed` or `lmw` flags beside the existing `eh` and `nosdata` flags.

**FLOW template.** It handles straight-line code passing:
- constants, addresses and loaded globals;
- call results;
- word/byte/halfword field loads and stores;
- virtual calls, through a per-call class with real virtual slots (function-pointer spellings allocate the wrong vtable register).

Parameters come from argument registers the function itself reads and from those callers write specifically for a call. That distinguishes, for example, a registration function from callers that merely leave a loaded value in `r3`. `flow_regs.json` lists functions that match only when every set argument register is passed.

**Consolidation and verification.**
- `emit.py` no longer treats earlier generated boundaries as fixed, splits a run into contiguous successful pieces when some members fail as one file, and isolates exception-enabled temporaries with destructors into units of their own.
- `verify_units.py` compiles every new or changed unit with its flags and checks each function. Functions that are exact in the combined candidate file but not in their own unit (declaration context) are excluded with a reason.

## Known artifacts and losses

- **Isolated exception-enabled temporaries.** The compiler emits unused out-of-line copies of the temporaries' destructors along with exception-table entries for them. The linker strips both, so the executable is exact. At object level, though, those units' exception tables compare as unmatched data: 5,740 bytes in 287 units are counted as complete but not matched. Each function's own exception entry is exact. Isolation keeps this from spreading to other functions' exception tables; without it, matched data fell by about 39 KB.
- **Lost functions.** Fifteen functions recovered before this round (744 bytes), mostly 32-byte forwarding wrappers whose targets now get inferred-parameter prototypes, are no longer generated. They are linked from original objects again. The `fn_80021E10` factory family also remains.
- **Remaining non-exact candidates.** 68 vtable-read temporaries (about 11 KB) differ only in register allocation; about 130 call/flow candidates are not exact. Most remaining code has branches, which these straight-line templates do not cover.

## Verification

Independent review of `b03f148` passed all eight checks:
- clean builds of the branch and its base, both with the pinned DOL SHA-1;
- report totals exact;
- a separate comparison of all 12,962 generated functions with each unit's configured flags;
- each isolated unit's own exception entry exact (the 5,740-byte object-level gap is wholly the unused destructor copies);
- link-map provenance, with the UNUSED entries all compiler-emitted UnknownGen destructors and `@N` locals;
- non-generated splits and symbols unchanged;
- a full `cycle.sh` run reproducing the commit with no diff.

Non-blocking notes:
- inferred parameter counts can exceed actual use;
- placeholder types and casts are synthetic;
- `verify_units.py` checks only changed units by default.

## Reproduction

```sh
/opt/homebrew/bin/python3 tools/unknowngen/relindex.py
tools/unknowngen/cycle.sh
```
