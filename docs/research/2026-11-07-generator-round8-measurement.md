# Generator round 8: measuring what blocks the rest (2026-11-07)

Question: is another `tools/unknowngen` round worth more than hand-written batches?
Answer: no, beyond small fixes. The remaining code has no single large blocking cause.

## Method

A read-only harness (kept under ignored `build/GDJEB2/analysis/genmeasure/`) ran `gen.py` over
every function in report units with no configured source: 5,851 functions, 2,412,508 code bytes.
Each function is tried in the combined pass, then alone under all nine isolate strategies that
`cycle.sh` uses (`I IB IV IT IP IL IPL IC ICV`). A function's cause is the first error message of
the compound strategy, normalized.

Two earlier passes were misleading and are recorded so they are not repeated:

- Combined pass only: "backward branch" looked like 60% of the bytes. Loops are only modelled
  when a function is generated alone.
- Alone, default strategy only: "exit shape" looked like 29%. Switches and short-circuit
  conditions are only modelled under the compound strategy.

## Result (all strategies)

| Outcome | Bytes | Share | Functions |
| --- | --- | --- | --- |
| Generates, but already known inexact (mostly register allocation) | 425,412 | 17.6% | 2,122 |
| `exit shape` | 387,760 | 16.1% | 462 |
| `local member type` | 127,300 | 5.3% | 84 |
| `bo shape` | 97,036 | 4.0% | 135 |
| every other cause (about 570, each at most 3.6%) | rest | | |

## Exit shape is not one pattern

`exitpath` rejects a forward jump whose target code is not straight-line to the final `blr`.

- 332 of the 462 functions (313 KB) fail inside loop control flow: returns and breaks in the
  middle of loops, nested loops, loops after the jump target.
- 49 functions (27 KB) are `while` loops with a short-circuit condition
  (`b cond; …; cond: bc exit; …; bc body`). The loop detector requires the first branch after
  the entry jump to be the closing backward branch.
- 130 functions (75 KB) contain no loop. Some are compare-tree switches with a frame store
  scheduled between the first compare and branch, and one-target switches with a default
  (`case -3: case -2: case 0: break; default: f();`), which `swfinish` rejects.

Rejected hypotheses: a jump to an enclosing join through a forwarding `b` (`chase(join)==t`,
no change), and `continue` to a while condition (1 function).

## Experiment kept on `task/generator-round8`

`eadece96` lets `swtree` step over scheduled `mflr r0` and `stw` through `r1`. 10 exit-shape
functions then generate; 2 are exact alone (`fn_80068060`, `fn_800641C4`, ICV). It has not
been run through `cycle.sh`, so it emits no units.

## Recommendation

Return to hand-written, readable subsystems. Revisit the generator only if a new measurement
finds a single cause above about 10%. The short-circuit while-condition fix (27 KB pool,
expected yield about 20%) is the next-best small generator change.
