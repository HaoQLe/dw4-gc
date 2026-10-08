# unknowngen

This tool regenerates the exact boilerplate units in `src/Alchemy/src/unknownGen/` and `src/unknownGen/`. Run every step from the repository root with Homebrew Python, after a normal build of the original split objects (`configure.py`, `ninja`) and a report (`ninja build/GDJEB2/report.json`).

```sh
/opt/homebrew/bin/python3 tools/unknowngen/relindex.py
tools/unknowngen/cycle.sh
```

`cycle.sh` runs the whole pipeline. It stops at the first failure.

| Step | What it does |
| --- | --- |
| `relindex.py` | Indexes each original function's size and relocations from the split target objects. |
| `gen.py` | Writes one candidate source file for every unrecovered function that a template recognizes. The templates are described below. |
| `cycle.sh` | Runs everything below in order: a signature pass, then both flow argument strategies, all three join strategies and every compiler profile. |
| `gen.py --sigs-out` | The signature pass. It records prototypes in `signatures.json`, which later passes (and `emit.py`) seed before generating, so callers earlier in address order declare those functions the way the definitions need:<br>• a definition rejected because a caller declared it differently first records the signature it wanted;<br>• a FLOW or CALLS definition whose result some caller uses is recorded returning a pointer;<br>• recorded definitions are kept, so the record is stable across cycles;<br>• isolated functions keep their recorded signatures. |
| `fastcmp.py` | Compiles the candidates with the pinned compiler. A function is accepted only if both checks pass:<br>• its bytes, with relocation fields masked, equal the original DOL;<br>• its relocations (offset, type, target, addend) equal the original object. |
| `isolate.py` | Retries candidates the final pass left inexact, each generated alone (`gen.py --isolate`), under every strategy:<br>• a function generated alone is seeded only with its own prepass, so no other function's prototype needs constrain it; a recorded signature it cannot declare is dropped;<br>• alone-generated functions are packed into files whose prototypes agree; a file that does not compile is halved until each part compiles;<br>• functions exact alone are recorded in `isolated.json` (with their strategy in `flow_regs.json` or `flow_cf.json`), left out of the combined passes and emitted as units of their own. Callers still declare them with their recorded signatures. |
| `emit.py` | Writes one unit per contiguous run of accepted functions, never crossing an existing split. Each unit uses one compiler profile; a run ends where no common profile remains. It records units in `config/GDJEB2/generated_units.txt` with comma-separated flags, which `configure.py` applies:<br>• `eh`: the functions own original `extabindex` entries, so the unit builds with C++ exceptions;<br>• `nosdata`: the code addresses all globals without small-data relocations, so the unit builds with `-sdata 0 -sdata2 0`;<br>• `speed`: the code was optimized for speed, so the unit builds with `-O4,p`;<br>• `lmw`: the code saves registers with `stmw`/`lmw`, so the unit builds with `-use_lmw_stmw on`.<br>Runs never cross an existing non-generated split. Exception-enabled temporaries with destructors and isolated functions get units of their own; a run member that fails when its run is generated together is generated alone.<br>It deletes unit files that are no longer listed. |
| `verify_units.py` | Compiles every new or changed unit with its configured flags and checks every function. `cycle.sh` first moves a failing function to `isolated.json`; an isolated function that still fails is excluded (recorded in `exclude.json`). It then emits again. |
| `apply.py` | Synchronizes `splits.txt` with that list. |

The templates in `gen.py`:
- **Family templates** match byte-for-byte representative functions after relocation masking.
- **`CALLS`** handles straight-line constant-argument calls, emulated from the original instructions.
- **`VT`** handles temporary-instance vtable reads:
  - members are pooled strings or reference pointers, nested per destructor level;
  - a root class runs the base constructor;
  - an out-of-line destructor variant is supported.
- **`FLOW`** handles code passing:
  - constants, addresses and loaded globals, including stores to globals;
  - call results, field loads/stores and indexed loads/stores;
  - integer arithmetic, shifts and masks;
  - virtual calls, function-pointer calls and variadic calls;
  - stack locals whose address is passed to a call; a local with stores or reads at further offsets (below the frame's saves) becomes a struct with members of the accessed widths;
  - floating-point values in functions with floating-point instructions:
    - `float`/`double` fields, globals and small-data constants;
    - parameters in `f1`.., call arguments and call results, and returns in `f1`;
    - single and double arithmetic, negation, absolute value, rounding and `fcmpu`/`fcmpo` conditions;
    - a value left in `f1` that a statement consumes is scratch, not a return value;
    - float field reads are read into variables where the original loads them.

    Integer-only functions still let floating-point values pass through calls implicitly;
  - struct copies: consecutive single-use word reads stored to consecutive offsets of one base, where the original loads ahead of storing, become one assignment (`long long` when the high word is stored last, otherwise a word block);
  - stores to fixed hardware addresses (`lis` bases).

  Forward conditional branches become `if`/`else` blocks and early returns (null checks, comparisons, record-form tests). Loops and backward branches are not handled. Where paths join, one of three strategies applies:
  - `tail` (default): a join that only returns `r3` is duplicated into each path as a `return`;
  - `var`: registers that differ become variables assigned on each path;
  - `this`: like `tail`, but an untouched first parameter is returned.

  `flow_cf.json` records functions that match only with `var` or `this`. A field read before an intervening store or call is read into a variable at its original position.

  Parameters come from registers the function reads and from argument registers callers write specifically for the call. A function that reads a higher argument register without the lower ones is retried with all of them as parameters. A definition already declared with the same parameter count keeps those parameter types (`int` or `void *`), and one declared returning a pointer returns what is left in `r3`. `flow_regs.json` lists functions that match only when every set argument register is passed.
- **`LEAF`** handles two-instruction leaf functions.
- **Hand-written forms** are in `texttempl.py`. `T` entries must match a representative exactly. `IT` entries also mask immediates and substitute each member's own value for `{@K}` (instruction K).
- **Both compiler profiles:** each representative is also compiled without small data, so units built that way classify too.

Functions that `gen.py` never generates:
- functions referenced from `.ctors`;
- functions whose exception-table entry is referenced from other data;
- functions that start at, end at or contain a `.text` label; such a label at a unit boundary hangs the linker;
- functions listed in `exclude.json`, with reasons.

Exception-enabled units whose temporaries have destructors also contain the compiler's unused out-of-line destructor copies. The linker strips those copies and their exception entries, so the executable is exact, but object-level comparison then reports that unit's exception tables as unmatched data.

Generated candidates are hypotheses until `fastcmp.py` accepts them. `fastcmp.py` compiles without exceptions; for `eh` units the normal build verifies the exception tables. Publication still requires the normal build checksum, report and review gates.
