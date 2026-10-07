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
| `cycle.sh` | Runs everything below in order, using both flow argument strategies and every compiler profile. |
| `fastcmp.py` | Compiles the candidates with the pinned compiler. A function is accepted only if both checks pass:<br>• its bytes, with relocation fields masked, equal the original DOL;<br>• its relocations (offset, type, target, addend) equal the original object. |
| `emit.py` | Writes one unit per contiguous run of accepted functions, never crossing an existing split. Each unit uses one compiler profile; a run ends where no common profile remains. It records units in `config/GDJEB2/generated_units.txt` with comma-separated flags, which `configure.py` applies:<br>• `eh`: the functions own original `extabindex` entries, so the unit builds with C++ exceptions;<br>• `nosdata`: the code addresses all globals without small-data relocations, so the unit builds with `-sdata 0 -sdata2 0`;<br>• `speed`: the code was optimized for speed, so the unit builds with `-O4,p`;<br>• `lmw`: the code saves registers with `stmw`/`lmw`, so the unit builds with `-use_lmw_stmw on`.<br>Runs never cross an existing non-generated split. Exception-enabled temporaries with destructors get units of their own.<br>It deletes unit files that are no longer listed. |
| `verify_units.py` | Compiles every new or changed unit with its configured flags and checks every function. `cycle.sh` excludes failures (recorded in `exclude.json`) and emits again. |
| `apply.py` | Synchronizes `splits.txt` with that list. |

The templates in `gen.py`:
- **Family templates** match byte-for-byte representative functions after relocation masking.
- **`CALLS`** handles straight-line constant-argument calls, emulated from the original instructions.
- **`VT`** handles temporary-instance vtable reads:
  - members are pooled strings or reference pointers, nested per destructor level;
  - a root class runs the base constructor;
  - an out-of-line destructor variant is supported.
- **`FLOW`** handles straight-line code passing:
  - constants, addresses and loaded globals;
  - call results and field loads/stores;
  - virtual calls.

  Parameters come from registers the function reads and from argument registers callers write specifically for the call. `flow_regs.json` lists functions that match only when every set argument register is passed.
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
