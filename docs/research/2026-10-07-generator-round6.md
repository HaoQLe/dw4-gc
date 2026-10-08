# Generator round 6: isolation, loops and more instruction forms (2026-10-07)

## Result

Matched and fully linked code each gained 133,472 bytes. Every generated unit is source-linked and the DOL SHA-1 is unchanged (`e409a88a…`).

| Metric | Before (`94ff74d`) | After (`275fe25`) | Gain |
| --- | --- | --- | --- |
| Matched code | 1,364,856 (32.955182%) | 1,498,328 (36.177937%) | +133,472 bytes (+3.222755 pp) |
| Fully linked code | 1,363,384 (32.919640%) | 1,496,856 (36.142395%) | +133,472 bytes (+3.222755 pp) |
| Matched data | 227,642 (15.137835%) | 233,582 (15.532835%) | +5,940 bytes (+0.395000 pp) |

- **Functions:** 16,000 → 16,793 (+793 gained, 133,472 bytes; none lost).
- **Units:** 6,970 → 7,465; completed units 3,747 → 4,544. Code, data and function denominators are unchanged; the unit count grows because isolated functions are units of their own.
- **By stage:**

  | Stage | Commit | Functions | Bytes |
  | --- | --- | --- | --- |
  | Isolation (prototype conflicts resolved per function) | `ebcb89b` | 579 | 99,812 |
  | Loops and instruction forms in isolated functions | `275fe25` | 214 (87 with loops, 11,972 bytes) | 33,660 |

- **Retained losses:** all 42 are recovered (22 round-4 losses, 1,484 bytes; 20 round-5 losses, 1,676 bytes).

**Against the round-5 plateau estimate.** Round 5 lowered the generator plateau to about 34–35%, with loops as the last template-scale pool. This round reached 36.18%. The estimate was low because prototype conflicts were blocking far more than the 42 tracked losses: isolation recovered 579 functions, most of them never exact before. Loops themselves gave 12 KB.

## Isolation: resolving prototype conflicts by bytes

Generated functions share one `extern "C"` namespace per generated file, so the first declaration of a symbol wins and conflicting definitions or callers fail. Round 5 always let template prototypes win. Since generated units link by name, a function only needs consistent prototypes within its own unit.

- **`gen.isolated(n)`** generates one function seeded only with its own prepass. A recorded signature the definition cannot declare (for example a caller's arity, as for `fn_80053D30` and `fn_80065338`) is dropped on retry.
- **`isolate.py`** retries every candidate the final combined pass leaves inexact, generated alone, under all strategies (default, register arguments, `var`/`this` joins and the loop variants). Alone-generated functions are packed into files whose prototypes agree; a file that does not compile is halved until each part compiles (a few generated bodies do not compile alone).
- Exact functions are recorded in `isolated.json`, left out of combined passes and emitted as units of their own. Callers still declare them with their recorded signatures, so the combined pass context is unchanged.
- **`emit.py`** generates a run member alone when it fails as part of its run, instead of dropping it. `cycle.sh` first isolates a function that is inexact in its emitted unit and excludes it only if it still fails alone.

The decision is made by compiled bytes: whichever form compiles exact is kept.

## Signature pass stability

A rerun of `gen.py --sigs-out` after the isolation cycle reproduced the committed `signatures.json` byte for byte. Before isolation, the round-5 record still changed in three entries on a rerun (`fn_80065338` alternated between a 6-parameter definition and a 1-parameter caller signature). Isolated functions now keep their recorded signatures, which removes that oscillation.

## Loops (isolated functions only)

Combined passes still reject backward branches, so loop support cannot change the prototypes of functions generated together.

- **Shapes:** `b` to a bottom test closed by a backward conditional branch (`while`), a bottom-tested body without the entry branch (`do … while`) and count-register loops (`mtctr n; cmpwi n,0; ble/beq; …; bdnz` → `while(i<n){…; i=i+1;}`).
- **Variables:** registers an iteration reads before writing, in execution order from the loop head, and writes become variables, assigned before the loop and updated at the end of the body in dependency order.
- **Strength-reduced indexes:** a variable stepping by `k<<s` alongside a counter stepping by `k` is written `(i<<s)`.
- **Other:** condition updates (`while((v=v-1)>=n)`), `break`, clobbered volatile registers at the head of loops with calls, and a full argument-register scan (including `mtctr`) for a loop function's own definition.
- **Variants** (`flow_loop.json`): `param` (a parameter used only as the loop variable's start is the variable) and `last` (loop variables declared after other locals). `last` matched 18 functions that differ only in register allocation otherwise.

Among the about 2,100 single- and multi-loop candidates, about 365 generate; about 20% of those are exact. Misses are mostly register allocation (MWCC's choices depend on source details not visible in the code, such as `((h<<5)+(h>>2))+c` versus `(h<<5)+((h>>2)+c)`) and short-circuit conditions.

## Instruction forms (isolated functions only)

- `rlwinm` masks wrapping around, bit-field extracts (`((unsigned)x>>n)&m`) and masked shifts;
- `rlwimi` bit-field inserts;
- `srawi` + `addze` → signed division by a power of two;
- `fctiwz` float-to-integer conversion through a stack slot;
- a join variable merging a `void` call's result is not a return value (also consults header prototypes), which unblocked functions releasing references through `fn_80066E1C`;
- `fneg`/`fabs` operand types are inferred during interpretation (previously a `NameError`).

## Remaining pools

Failure tally over the 6,964 candidates left before this round's features (generation failures, by bytes):

| Cause | Functions | Bytes |
| --- | --- | --- |
| Short-circuit `&&` with an else part (then-block jumps past its block), often with a call inside the condition | 827 | 568 KB |
| Unconditional/other exit shapes | 280 | 174 KB |
| Unsupported instructions (largest: `bcctr` switches 90 KB, `xoris` int-to-float 58 KB) | 707 | 369 KB |
| Address-taken local member loads, local member types | 233 | 277 KB |

The `&&`-with-else pool needs compound conditions that can contain calls (comma expressions or statement hoisting); it is the next template-scale candidate. Int-to-float conversion needs the original's `.sdata2` constant and is not reachable by generated units.

## Verification

- Cycle 1 (isolation): `verify_units.py` checked 591 changed units, none failing; no exclusions added; `build.sha1` OK.
- Cycle 2 (loops and forms): 215 changed units, none failing; `build.sha1` OK.
- Reports regenerated with `ninja all_source progress build/GDJEB2/report.json` after each cycle.
- Independent review: a clean rebuild of `275fe25` compared all 4,304 generated units (15,256 functions, 1,073,056 bytes, 81,298 relocations) with an independent comparator, confirmed map provenance for all 793 gained functions and all 608 isolated functions, unchanged non-generated splits, no units mixing exception and non-exception functions, and byte-identical regeneration of all 608 isolated units. The only object-level differences are the known extab entries of unused weak destructor copies (287 units).
- Known inconsistency: isolated definitions can be declared differently by callers in other units (1,007 symbols declared inconsistently across generated units, up from 677). Linking by name keeps the executable exact; a PC port would need to reconcile them.
