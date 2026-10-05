# unknowngen

This tool regenerates the exact boilerplate units in `src/Alchemy/src/unknownGen/` and `src/unknownGen/`. Run every step from the repository root with Homebrew Python, after a normal build of the original split objects (`configure.py`, `ninja`) and a report (`ninja build/GDJEB2/report.json`).

```sh
/opt/homebrew/bin/python3 tools/unknowngen/relindex.py
/opt/homebrew/bin/python3 tools/unknowngen/gen.py 80000000 80420000 build/GDJEB2/analysis/unknowngen/cand.cpp --calls
/opt/homebrew/bin/python3 tools/unknowngen/fastcmp.py build/GDJEB2/analysis/unknowngen/cand.cpp --res build/GDJEB2/analysis/unknowngen/res.json
/opt/homebrew/bin/python3 tools/unknowngen/emit.py build/GDJEB2/analysis/unknowngen/res.json 80020400 800A0000 Alchemy/src/unknownGen
/opt/homebrew/bin/python3 tools/unknowngen/emit.py build/GDJEB2/analysis/unknowngen/res.json 800A0000 80420000 unknownGen
/opt/homebrew/bin/python3 tools/unknowngen/apply.py
```

| Step | What it does |
| --- | --- |
| `relindex.py` | Indexes each original function's size and relocations from the split target objects. |
| `gen.py` | Writes one candidate source file for every unrecovered function that a template recognizes. The templates are described below. |
| `fastcmp.py` | Compiles the candidates with the pinned compiler. A function is accepted only if both checks pass:<br>• its bytes, with relocation fields masked, equal the original DOL;<br>• its relocations (offset, type, target, addend) equal the original object. |
| `emit.py` | Writes one unit per contiguous run of accepted functions, never crossing an existing split. It records each unit in `config/GDJEB2/generated_units.txt` and flags units whose functions own original `extabindex` entries as `eh`; `configure.py` builds those with C++ exceptions. |
| `apply.py` | Synchronizes `splits.txt` with that list. |

The templates in `gen.py`:
- **Family templates** match byte-for-byte representative functions after relocation masking.
- **`CALLS`** handles straight-line constant-argument calls, emulated from the original instructions.
- **`VT`** handles temporary-instance vtable reads.
- **Hand-written forms** are in `texttempl.py`.

Functions that `gen.py` never generates:
- functions referenced from `.ctors`;
- functions listed in `exclude.json`, with reasons.

Generated candidates are hypotheses until `fastcmp.py` accepts them. Publication still requires the normal build checksum, report and review gates.
