# Generator round 4: control flow (2026-10-06)

## Result

The FLOW template now handles forward branches. Matched and fully linked code each gained 77,524 bytes. All generated units are source-linked, and the DOL SHA-1 is unchanged (`e409a88a…`).

| Metric | Before (`41344b0`) | After | Gain |
| --- | --- | --- | --- |
| Matched code | 1,248,112 (30.136335%) | 1,325,636 (32.008194%) | +77,524 bytes (+1.871859 pp) |
| Fully linked code | 1,246,640 (30.100792%) | 1,324,164 (31.972652%) | +77,524 bytes (+1.871860 pp) |
| Matched data | 225,222 (14.976909%) | 226,422 (15.056707%) | +1,200 bytes (+0.079798 pp) |

- **Functions:** matched functions rose from 14,499 to 15,290 (+791).
- **Units:** 6,564 → 6,744; completed units 3,339 → 3,474.
- **Denominators:** code, data and function denominators are unchanged.
- **Gained and lost functions:**
  - 838 functions (80,656 bytes) are newly generated.
  - 47 functions (3,132 bytes) that were generated before are lost (see below).
- **Exception-table artifact:** complete minus matched data is 5,908 bytes (round 3: 5,740). As before, this is unused destructor copies in isolated exception-enabled units; the executable is exact.

## What changed in FLOW

**Structure.** The emulator interprets word ranges recursively. A forward conditional branch becomes an `if` around the fall-through range. A trailing `b` over a second range makes that range an `else`. Chained branches are followed to their final target. A branch into the straight-line code that ends the function becomes an early `return`. Conditional returns (`beqlr` and similar) become `if (...) return ...;`. Backward branches are rejected, so loops are out of scope.

**Conditions.** These come from `cmpwi`, `cmplwi`, `cmpw` and `cmplw`, and from record forms (`mr.`, `rlwinm.`, `extsb.`, `extsh.`, `addic.`, `andi.`). Signed compares become `(int)` comparisons. Unsigned compares against zero become pointer truth tests, and other unsigned compares become `(unsigned int)` comparisons.

**Joins.** Where paths join, one of three strategies applies; `flow_cf.json` records the 30 functions that need a non-default one:
- `tail` (default): when the join only returns `r3`, each path gets its own `return`;
- `var`: registers that differ become variables assigned on each path;
- `this`: like `tail`, but an untouched first parameter is returned.

**Return values.** A function returns a value if a non-call instruction set `r3` on some path. It is treated as void when a path returns the result of a call that is declared `void`.

**Value reads.** A field read before an intervening store or call is read into a variable at its original position. Other repeated reads stay inline so the compiler's own common-subexpression elimination reproduces the original order. Naming every field read used across a branch was tried and lost about 50 functions.

**New operations:**
- integer arithmetic, shifts and masks (`add`, `subf`, `mullw`, `divw`, `neg`, logical operations, `slwi`/`srwi`, `mulli`, `ori`, `andi.`);
- indexed loads and stores;
- `signed char`/`short` loads (`lbz` + `extsb`);
- stores to globals;
- function-pointer calls through `mtctr`;
- variadic calls (marked by `crclr 6`);
- stack locals whose address is passed to a call.

  Locals are declared in reverse offset order, which reproduces the original stack layout.

**Globals.** In branchy code, a global addressed through `@ha`/`@l` is declared without a size, so the compiler does not use small-data addressing. Mangled C++ globals are left to their typed declarations.

## Pipeline changes

- `cycle.sh` generates the four candidate files (default, all-registers, `var`, `this`) in parallel. Before generating, it deletes old strategy result files so stale results cannot be merged.
- The template prepass seeds every prototype the templates declare: their own signatures, callees and pointer globals. FLOW callers earlier in address order now adapt to those prototypes. Before this fix, new branchy callers declared callees such as `fn_800658F8` first and broke 113 established template functions.
- The exit-path check is bounded to straight-line code. Without that bound, interpreting the remainder at every join made large branchy functions exponentially slow.
- Full generation now takes about 8 minutes per strategy; the whole cycle takes about 44 minutes.

## Losses and retained candidates

- **Lost functions:** 47 functions (3,132 bytes), mostly small wrappers, are no longer generated. Each fails on a prototype conflict with a FLOW-generated caller or callee earlier in the file. A second generation pass seeding every definition's own signature would likely recover them, at the cost of doubling generation time.
- **Branchy pool:** of the 2,751 unmatched functions with at most six forward branches (396 KB), about 1,300 now produce candidates and about 730 (about 60 KB) are exact.
- **Common causes of the remaining misses:**
  - struct copies and initialized local structs (loads scheduled before stores);
  - inline string-pool releases through locals;
  - pointer-arithmetic evaluation order;
  - register choice across joins;
  - floating-point code, which is not modeled.

## Projection

The remaining unmatched code is 2,816 KB (68.0% of code). It breaks down as follows:

| Shape | Bytes | Share of all code | Of which use floating point |
| --- | --- | --- | --- |
| Loops | 1,520 KB | 36.7% | 606 KB |
| More than six forward branches | 657 KB | 15.9% | 174 KB |
| At most six forward branches | 349 KB | 8.4% | 73 KB |
| Straight-line, not yet generated | 290 KB | 7.0% | 76 KB |

Generator yields by round have been +155 KB, +233 KB and now +78 KB. In the pools this round targeted, the hit rate is about 15% of bytes. Extending the template further (float arguments, struct copies, a second signature pass, simple counted loops) could plausibly reach another 100–150 KB. That would put matched code at about 34.5–35.5%. Beyond that, 52% of all code is in loops or heavily branched functions. There, exact register allocation and scheduling make template generation unproductive, and recovery would need per-function decompilation with an objdiff loop. Expect the generator to plateau at about 35–37%.

## Verification

- The full `cycle.sh` run reproduces every unit.
- An independent review clean-rebuilt `05f7803`, compared all 13,753 generated functions (900,364 bytes, 66,431 relocations) exactly, and confirmed map provenance, unchanged non-generated splits and symbols, and the gained/lost counts.
- `verify_units.py` checked 673 changed units with their configured flags; none failed. Two functions failed in their emitted unit and were added to `exclude.json`.
- The normal build matches `build.sha1` (`./build/GDJEB2/main.dol: OK`).
- The report was regenerated with `ninja all_source progress build/GDJEB2/report.json`.
