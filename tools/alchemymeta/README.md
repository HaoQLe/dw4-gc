# alchemymeta

Recovers Alchemy class metadata statically from the original DOL and turns it into class layout headers and function attributions. Run every step from the repository root with Homebrew Python, after a normal build and `tools/unknowngen/relindex.py`.

```sh
/opt/homebrew/bin/python3 tools/alchemymeta/extract.py
/opt/homebrew/bin/python3 tools/alchemymeta/enums.py
/opt/homebrew/bin/python3 tools/alchemymeta/headers.py
/opt/homebrew/bin/python3 tools/alchemymeta/attribute.py
/opt/homebrew/bin/python3 tools/alchemymeta/rename.py
```

| Step | What it does |
| --- | --- |
| `dol.py` | Shared helpers: symbols, strings, and register values at calls in straight-line code. |
| `extract.py` | Reads every class registration (`fn_80066204`: metaobject global, parent's register function, name, instance size, callbacks) and field registration (`fn_80065924` field-type getters, `fn_800659C0` name and offset tables). It also records each object-reference field's target class (the `getMeta` result stored into the field) and the class's vtable chain (from the `r10` callback, which constructs a temporary instance). Writes `build/GDJEB2/analysis/meta/classes.json`. |
| `enums.py` | Reads every enum registration (`fn_800635C8(name, value names, values, count)`). It records each enum's owning class (the single class whose functions call its getter) and the enum of each reflected enum field: field initializers store the getter's address into the field after fetching it. Writes `build/GDJEB2/analysis/meta/enums.json` and `enum_fields.json`. |
| `headers.py` | Writes:<br>• `include/meta/<class>.h` for every class and `include/meta/meta.h` including them all;<br>• `tools/alchemymeta/layouts.json`, each class's header, metaobject, parent and accessible members by offset, which the source generator reads;<br>• `build/GDJEB2/analysis/meta/check.cpp`, which asserts every class size and field offset. |
| `attribute.py` | Writes `config/GDJEB2/alchemy_class_functions.txt`: address, class, roles and name, one function per line.<br>• A role is recorded only where the code confirms it (see the tool's docstring).<br>• Functions claimed by several classes are left out.<br>• The name is `<class>_<role>`, for example `igSphere_getMeta` or `beWeapon_virtual88` (vtable byte offset 0x88). |
| `rename.py` | Renames every attributed function still named by its address, wherever the name appears as a whole token: `symbols.txt`, sources, headers, the generator's state files and templates. Names do not change code; the build checksum must not change. Run the generator's `emit.py` afterwards to put declarations back in its sorted order. |

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
- **Enums:** each enum is `struct <Name> { enum Value { … }; }` in `include/meta/enums.h`, so value names cannot clash. Enum fields are typed `<Name>::Value`. A name registered more than once (every game class has its own `MsgAction`) is prefixed with its owning class (`beWeapon_MsgAction`), or with its getter when the owner is unknown.
- **Non-reflected members:** members established from the code alone are listed in `headers.py`'s `EXTRA`, with their evidence in the header comment. So far there is one: `igObject::_refCount` at `+4`, decremented on release, with the object released when its low 23 bits reach 0.
- **Duplicate registrations:** `igModelViewMatrixBoneSelectList` is registered twice with the same size; one header is written.

The source generator (`tools/unknowngen`) uses `layouts.json` to write field accesses as `Meta::` members and includes the headers each unit needs.
