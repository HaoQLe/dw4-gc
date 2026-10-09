# Generator round 7: compound conditions, inline casts and switches (2026-10-08)

## Result

Matched and fully linked code each gained 30,140 bytes. Every generated unit is source-linked and the DOL SHA-1 is unchanged (`e409a88a…`).

| Metric | Before (`9daad44`) | After | Gain |
| --- | --- | --- | --- |
| Matched code | 1,498,328 (36.177937%) | 1,528,468 (36.905680%) | +30,140 bytes (+0.727743 pp) |
| Fully linked code | 1,496,856 (36.142395%) | 1,526,996 (36.870140%) | +30,140 bytes (+0.727745 pp) |
| Matched data | 233,582 (15.532835%) | 233,902 (15.554115%) | +320 bytes (+0.021280 pp) |

- **Functions:** 16,793 → 16,986 (+193 gained, none lost).
- **Units:** 7,465 → 7,643; completed units 4,544 → 4,737. Code, data and function denominators are unchanged. The unit count grows because isolated functions are units of their own.
- **Cycles:**
  - Cycle 1 (compound strategy, switch trees): +192 functions, +30,032 bytes.
  - Cycle 2 (jump tables): +1 function, +108 bytes, plus its 40-byte table in `.data`.
- **Matched data gain:** 320 bytes, from the new units' exception tables and the jump table.

All of this round's features are a separate **compound strategy** (`gen.py --compound`; isolation tags `IC`, and `ICV` with `var` joins). It applies only to functions generated alone, and they are recorded in `flow_cc.json` (192 functions, 6 of them also with `var` joins). Functions exact under earlier strategies are unaffected.

## Yield by feature

Counted from the emitted sources of the `flow_cc.json` functions (30,016 bytes):

| Feature present | Functions | Bytes |
| --- | --- | --- |
| Inline cast helper (with `&&` and a call in the condition) | 67 | 12,420 |
| `&&`/`||` without calls in the condition | 51 | 5,656 |
| `&&`/`||` with calls as comma expressions | 34 | 5,280 |
| Compare-tree or jump-table switch | 30 | 4,964 |
| Other (returns at the join, unsigned narrow compares) | 10 | 1,696 |

## Against the 568 KB "`&&` with else" pool

That pool was the round-6 tally of `exit shape` failures. A recount at the start of this round (all unrecovered candidates generated alone) found 1,144 functions (751 KB) failing with `exit shape`. Classified by the code after the failing branch:

- **Switches dominated:** 185 functions (281 KB) with conditional code after the target were compare-tree switches, not `&&` chains.
- **Compound conditions:** the strategy lets about 280 more functions generate and recovers about 25 KB. The pool was mostly blocked by other things.
- **What still fails:** after this round, `exit shape` still stops 473 functions (374 KB). Most functions that now generate but are not exact differ by register allocation or scheduling (`lwz`/`mr` placement), the general FLOW limitation already recorded in rounds 4–6.

## Inline casts

About 300 sites (291 of them in 220 unrecovered functions, 180 KB) follow one idiom:

```
lwz rX, off(rY); cmplwi rX,0; beq L; ...; bl fn_80068128; clrlwi. r0,r3,24; beq L; b M; L: li rX,0; M:
```

The `beq L; b M` pair is what an inline function returning either its argument or 0 compiles to. Plain `if`/`else`, `if(!c) x=0`, `goto` and ternaries all left the value in a second register or dropped the `b`. Only an inline helper applied directly to the field read is exact:

```c
static inline void *cast(void *q){ if(q && f(q,meta)) return q; return 0; }
value0 = cast(p->f20);
```

`fn_80068128` (92 bytes) is probably an `isOfType`-style metaobject test; its meaning is not recorded.

## Switches

- **Compare trees:** MWCC tests each node for equality first, so a region of `cmpwi x,K` and branches containing a `beq` is decoded by running it on each boundary value. Ranges become runs of case labels (at most 256).
- **Bodies:** bodies are in address order. Breaks reuse the loop `break` mechanism, so nested `if (c) break;` works. When the cases leave different return values to a return-only end, the cases are re-interpreted with `return`.
- **Jump tables:** these are taken from the original table. The candidate pool is small: of 115 unrecovered functions with `bctr`, only 3 generate (most fail on other features), and 1 is exact.
- **Unsupported variants:**
  - `bgtlr` defaults;
  - instructions scheduled between the dispatch compare and `bgt` (14 sites);
  - 10 tables lying inside existing explicit `.data` splits.

## Verification

- Cycle 1: `verify_units.py` checked 192 changed units, none failing, no exclusions added; `build.sha1` OK.
- Cycle 2: 1 changed unit, none failing; `build.sha1` OK. The map shows the jump table `@30` from `unknown8027668C.o` at `0x804C9FB0`, the original `jumptable_804C9FB0`.
- `fastcmp.py`'s table check rejects a candidate whose two case labels are swapped (identical code, different table entries).
- Reports were regenerated with `ninja all_source progress build/GDJEB2/report.json`. Against the baseline report: 193 functions gained, 0 lost.

## Remaining pools and next candidates

From the end-of-round tally of candidates generated alone:

| Cause | Functions | Bytes |
| --- | --- | --- |
| Unsupported instructions (`flow op`; `xoris` int-to-float, `subfc`/`subfe` comparisons, `bctr` remainder) | 639 | 410 KB |
| `exit shape` (branches out of nested blocks to non-exit code) | 473 | 374 KB |
| Address-taken local member loads / member types | 262 | 332 KB |

- **Near-misses:** 337 candidates differ in at most 2 instruction lines, mostly register choice or scheduling. These need source-shape variants, such as a declaration order search per function, rather than new control flow.
- **Ternaries:** `x = c ? a : b` (the `fn_800544CC` shape) is a small, distinct template candidate.
