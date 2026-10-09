# alchemymeta

Recovers Alchemy class metadata statically from the original DOL and turns it into class layout headers and function attributions. Run every step from the repository root with Homebrew Python, after a normal build and `tools/unknowngen/relindex.py`.

```sh
/opt/homebrew/bin/python3 tools/alchemymeta/extract.py
/opt/homebrew/bin/python3 tools/alchemymeta/headers.py
/opt/homebrew/bin/python3 tools/alchemymeta/attribute.py
```

| Step | What it does |
| --- | --- |
| `extract.py` | Reads every class registration (`fn_80066204`: metaobject global, parent's register function, name, instance size, callbacks) and field registration (`fn_80065924` field-type getters, `fn_800659C0` name and offset tables). It also records each object-reference field's target class (the `getMeta` result stored into the field) and the class's vtable chain (from the `r10` callback, which constructs a temporary instance). Writes `build/GDJEB2/analysis/meta/classes.json`. |
| `headers.py` | Writes `include/meta/<class>.h` for every class and `include/meta/meta.h` including them all, plus `build/GDJEB2/analysis/meta/check.cpp`, which asserts every class size and field offset. |
| `attribute.py` | Writes `config/GDJEB2/alchemy_class_functions.txt`, recording each function's class and role. A role is recorded only where the code confirms it (see the tool's docstring); functions claimed by several classes are left out. |

Check the headers with the pinned compiler:

```sh
/opt/homebrew/bin/python3 -c "import sys,subprocess; sys.path.insert(0,'tools/unknowngen'); import compiler; sys.exit(subprocess.run(compiler.command()+['-c','build/GDJEB2/analysis/meta/check.cpp','-o','build/GDJEB2/analysis/meta/check.o']).returncode)"
```

## Header conventions

- **Namespace:** classes are structs in namespace `Meta`. The original `Gap::` module is known for only five classes, so it is not guessed.
- **Vtable pointer:** the root class declares the vtable pointer as an explicit `void *__vtable` member. Layouts therefore do not depend on the compiler's vtable placement, and no virtual functions are declared yet.
- **Unknown bytes:** bytes no reflected field covers are `unknownXX` arrays (`XX` is the hex offset). Their meaning is unknown.
- **Field types:**
  - object-reference fields are pointers to their target class;
  - enums are `int`;
  - strings are `const char *`;
  - vectors and matrices are `float` arrays;
  - arrays and struct fields take their size from the space up to the next member, and say so in the header.
- **Name collisions:** names differing only in case get a numeric suffix on the file name, not the class (`beModelCtrlAIMap_2.h`).
- **Duplicate registrations:** `igModelViewMatrixBoneSelectList` is registered twice with the same size; one header is written.

Nothing includes these headers yet. They are evidence for replacing generated code with typed source.
