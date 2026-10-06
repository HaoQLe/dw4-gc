# unknowngen

This tool regenerates the exact boilerplate units in `src/Alchemy/src/unknownGen/` and `src/unknownGen/`. Run every step from the repository root with Homebrew Python, after a normal build of the original split objects (`configure.py`, `ninja`) and a report (`ninja build/GDJEB2/report.json`).

```sh
/opt/homebrew/bin/python3 tools/unknowngen/relindex.py
/opt/homebrew/bin/python3 tools/unknowngen/gen.py 80000000 80420000 build/GDJEB2/analysis/unknowngen/cand.cpp --calls
R=build/GDJEB2/analysis/unknowngen
/opt/homebrew/bin/python3 tools/unknowngen/fastcmp.py $R/cand.cpp --res $R/res.json
/opt/homebrew/bin/python3 tools/unknowngen/fastcmp.py $R/cand.cpp --no-sdata --res $R/res-nosdata.json
/opt/homebrew/bin/python3 tools/unknowngen/emit.py $R/res.json $R/res-nosdata.json 80020400 800A0000 Alchemy/src/unknownGen
/opt/homebrew/bin/python3 tools/unknowngen/emit.py $R/res.json $R/res-nosdata.json 80000000 80020400 unknownGen
/opt/homebrew/bin/python3 tools/unknowngen/emit.py $R/res.json $R/res-nosdata.json 800A0000 80420000 unknownGen
/opt/homebrew/bin/python3 tools/unknowngen/apply.py
```

| Step | What it does |
| --- | --- |
| `relindex.py` | Indexes each original function's size and relocations from the split target objects. |
| `gen.py` | Writes one candidate source file for every unrecovered function that a template recognizes. The templates are described below. |
| `fastcmp.py` | Compiles the candidates with the pinned compiler. A function is accepted only if both checks pass:<br>• its bytes, with relocation fields masked, equal the original DOL;<br>• its relocations (offset, type, target, addend) equal the original object. |
| `emit.py` | Writes one unit per contiguous run of accepted functions, never crossing an existing split. Each unit uses one compiler profile; a run ends where no common profile remains. It records units in `config/GDJEB2/generated_units.txt` with comma-separated flags, which `configure.py` applies:<br>• `eh`: the functions own original `extabindex` entries, so the unit builds with C++ exceptions;<br>• `nosdata`: the code addresses all globals without small-data relocations, so the unit builds with `-sdata 0 -sdata2 0`.<br>It deletes unit files that are no longer listed. |
| `apply.py` | Synchronizes `splits.txt` with that list. |

The templates in `gen.py`:
- **Family templates** match byte-for-byte representative functions after relocation masking.
- **`CALLS`** handles straight-line constant-argument calls, emulated from the original instructions.
- **`VT`** handles temporary-instance vtable reads.
- **`LEAF`** handles two-instruction leaf functions.
- **Hand-written forms** are in `texttempl.py`. `T` entries must match a representative exactly. `IT` entries also mask immediates and substitute each member's own value for `{@K}` (instruction K).
- **Both compiler profiles:** each representative is also compiled without small data, so units built that way classify too.

Functions that `gen.py` never generates:
- functions referenced from `.ctors`;
- functions whose exception-table entry is referenced from other data;
- functions that start at, end at or contain a `.text` label; such a label at a unit boundary hangs the linker;
- functions listed in `exclude.json`, with reasons.

Generated candidates are hypotheses until `fastcmp.py` accepts them. Publication still requires the normal build checksum, report and review gates.
