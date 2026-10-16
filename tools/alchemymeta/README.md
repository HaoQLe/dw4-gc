# alchemymeta

Recovers Alchemy class metadata statically from the original DOL and turns it into class layout headers and function attributions. Run every step from the repository root with Homebrew Python, after a normal build and `tools/unknowngen/relindex.py`.

```sh
/opt/homebrew/bin/python3 tools/alchemymeta/extract.py
/opt/homebrew/bin/python3 tools/alchemymeta/enums.py
/opt/homebrew/bin/python3 tools/alchemymeta/headers.py
/opt/homebrew/bin/python3 tools/alchemymeta/attribute.py
/opt/homebrew/bin/python3 tools/alchemymeta/rename.py
/opt/homebrew/bin/python3 tools/alchemymeta/funcindex.py
/opt/homebrew/bin/python3 tools/alchemymeta/regnames.py
/opt/homebrew/bin/python3 tools/alchemymeta/metasrc.py --apply
/opt/homebrew/bin/python3 tools/alchemymeta/metasrc.py --lift --apply
/opt/homebrew/bin/python3 tools/alchemymeta/poolsrc.py --apply
```

| Step | What it does |
| --- | --- |
| `dol.py` | Shared helpers: symbols, strings, and register values at calls in straight-line code. |
| `extract.py` | Reads every class registration (`fn_80066204`: metaobject global, parent's register function, name, instance size, callbacks) and field registration (`fn_80065924` field-type getters, `fn_800659C0` name and offset tables). It also records each object-reference field's target class (the `getMeta` result stored into the field) and the class's vtable chain (from the `r10` callback, which constructs a temporary instance). Writes `build/GDJEB2/analysis/meta/classes.json`. |
| `enums.py` | Reads every enum registration (`fn_800635C8(name, value names, values, count)`). It records each enum's owning class (the single class whose functions call its getter) and the enum of each reflected enum field (enum-typed fields only): field initializers store the getter's address into the field after fetching it. Writes `build/GDJEB2/analysis/meta/enums.json` and `enum_fields.json`. |
| `headers.py` | Writes:<br>• `include/meta/<class>.h` for every class and `include/meta/meta.h` including them all;<br>• `tools/alchemymeta/layouts.json`, each class's header, metaobject, parent and accessible members by offset, which the source generator reads;<br>• `build/GDJEB2/analysis/meta/check.cpp`, which asserts every class size and field offset. |
| `attribute.py` | Writes `config/GDJEB2/alchemy_class_functions.txt`: address, class, roles and name, one function per line.<br>• A role is recorded only where the code confirms it (see the tool's docstring).<br>• Functions claimed by several classes are left out.<br>• The name is `<class>_<role>`, for example `igSphere_getMeta` or `beWeapon_virtual88` (vtable byte offset 0x88). |
| `funcindex.py` | Writes `build/GDJEB2/analysis/reg/allfns.json`: every function's instructions, disassembled from the current original split objects. |
| `regnames.py` | Names each class's registration symbols, with the evidence for each listed in its docstring:<br>• data: `<C>_meta` (metaobject global), `<C>_vtable` (own vtable), `<C>_className` (name string, only when its text is the class name), `<C>_fieldTypes`, `<C>_fieldNames`, `<C>_fieldStorage`, `<C>_fieldOffsets` (the field-setup tables), `<C>_dependencies` (the arkRegister functions of the field target classes);<br>• functions: `<C>_arkRegister` (Alchemy's own name, kept by five engine classes), `<C>_metaObject` (the metaobject, created unregistered if absent), `<C>_create(pool)`;<br>• registration API: `meta_registerClass`, `meta_registerNow`, `meta_newMetaObject`, `meta_createInstance`, `meta_fieldCount`, `meta_field`, `meta_appendFields`, `meta_setupFields`, plus `igObject_construct` and `igObject_vtable`.<br>A class registered twice (`igModelViewMatrixBoneSelectList`) has its second set named with the metaobject's address (`igModelViewMatrixBoneSelectList_80534578_meta`). |
| `metasrc.py` | Writes readable class-registration source, one file per class (`src/Meta/<Class>.cpp`, or `src/Alchemy/src/Meta/` in the identified Alchemy core range), using the macros and helpers of `include/meta/register.h`. A class is converted only when all its registration functions are built from generated units, translate, and compile to the original: instructions, relocations, function order, exception-index entries, and no emitted data. With `--apply` it lists the files in `config/GDJEB2/meta_units.txt`, reduces the overlapped generated units to their other functions, and rewrites `splits.txt` (exception-table ranges from the executable's exception index). `--only`, `--limit` and `--debug` (prints the first difference) help with single classes. |
| `asmlift.py` | Lifts straight-line registration functions the generator never produced (`register`, `getMeta`, `vtableRead` plain objects and destructor chains, `fieldInit` including inherited-field replacement) from the original instructions (`build/GDJEB2/analysis/reg/allfns.json`) into the generated-source forms `metasrc.py` translates. `metasrc.py --lift` uses it, trying each lifted function's speed and `stmw`/`lmw` settings and its alternative store orders. |
| `poolsrc.py` | Builds units that own the data their code addresses from the unit's `.data` start (pooled `fieldInit` tables): merges the existing units in the pool's code range in address order, lifts the pooled functions, writes the pool's data from the executable, names the field tables in `symbols.txt`, and checks code, `.data` bytes and relocations, and exception-index entries. `--only <pool symbol>`, `--apply`, `--debug`. |
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
