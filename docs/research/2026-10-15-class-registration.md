# Class registration as readable source (2026-10-15)

Every Alchemy class registers itself through a fixed set of small functions. About 754 KB of code (18% of the executable) belongs to them. Almost all of it already matched through the generator's units (`src/unknownGen`), but as anonymous code. This batch names that code and makes it readable, one file per class. The executable is unchanged.

## Result

- **1,384 class files**, covering 569,584 code bytes:
  - `src/Meta/<Class>.cpp` (1,210 files);
  - `src/Alchemy/src/Meta/<Class>.cpp` (174 files, in the identified Alchemy core range).
- **Configuration:** the files are listed in `config/GDJEB2/meta_units.txt`. The generated units they overlapped are reduced to their other functions; the total falls from 4,481 to 3,838.
- **Checks:**
  - `build.sha1` OK;
  - matched and linked code unchanged (1,532,240 and 1,530,768 bytes, 36.996758% and 36.961216%);
  - complete data unchanged (240,154 bytes);
  - all 3,838 remaining generated units verify (`relindex.py`, `verify_units.py --all`).
- **Matched data:** 234,146 → 208,266 bytes. This is an objdiff accounting artifact, not a code change; see [the exception-table note](#exception-table-accounting).
- **Not converted:**
  - 484 class blocks contain functions that still come from original assembly (357 `fieldInit`, 130 `vtableRead` and 23 `register`), or split across files;
  - 22 blocks use generated forms the translator does not handle (listed below).

### Names (no code change)

`tools/alchemymeta/regnames.py` names each class C's symbols. Its docstring gives the evidence for each.

| Name | What it is | Count |
| --- | --- | --- |
| `C_meta` | The metaobject global | 1,435 |
| `C_vtable` | The class's own vtable | 1,281 |
| `C_className` | The name string, only when its text is the class name | 1,408 |
| `C_arkRegister` | The register wrapper; five engine classes keep Alchemy's own name for it (`Gap::Core::igResource::arkRegister`, …) | 1,429 |
| `C_metaObject` | The metaobject, created unregistered if absent | 214 |
| `C_create(pool)` | Creates an instance in a pool | 538 |
| `C_fieldTypes`, `C_fieldNames`, `C_fieldStorage`, `C_fieldOffsets` | The field-setup tables | 539 classes |
| `C_dependencies` | `register`'s last argument: callbacks run after registration, usually the `arkRegister` functions of the classes C's fields refer to (in 87 field classes, setup functions instead) | 853 |

The registration API also gets names:
- `meta_registerClass`, `meta_registerNow`, `meta_newMetaObject`, `meta_createInstance`;
- `meta_fieldCount`, `meta_field`, `meta_appendFields`, `meta_setupFields`;
- `igObject_construct` and `igObject_vtable`.

## The registration functions

All of them appear in this address order; `include/meta/register.h` documents them.

| Function | What it does | Source form |
| --- | --- | --- |
| `C_create(pool)` | `C_arkRegister()`, then an instance from `C_meta` | `META_CREATE(C)` |
| `C_metaObject()` | `C_meta`, created by `meta_newMetaObject` (unregistered) if null | `META_METAOBJECT(C)` |
| `C_getMeta()` | `C_meta`, registering first unless `_validity` has the flag 4 | `META_GET_META(C)` |
| `C_vtableRead()` | Builds a temporary instance as the constructors do and returns its vtable pointer (the core keeps the vtable pointer's offset at `_arkCore+0x394`) | Named instance structs |
| `C_arkRegister()` | `meta_registerNow(C_register)`: registers, then runs the callbacks the registration returns | `META_ARK_REGISTER(C)` |
| `C_register()` | A module guard (18 distinct guard functions, for example `fn_802B1AC8` in 303 classes, `fn_8012FC48` in 236 and `fn_80021B94` in the core; 23 classes have none), then `meta_registerClass` | See below |
| `C_getMetaCall()` | `C_getMeta()` | `META_GET_META_CALL(C)` |
| `C_fieldInit()` | Appends C's fields and sets each one up | Typed field code |

`meta_registerClass(abstract, &C_meta, Parent_register, parentMeta, C_getMetaCall, C_className, size, C_vtableRead, C_fieldInit, callback2, C_dependencies)`:
- `abstract` is stored to `_abstractState`; `meta_createInstance` returns null when it is 1, which it is for 125 base classes;
- `parentMeta` returns the parent's metaobject (null for `igObject`). The class takes its parent, vtable pointer offset, alignment, sizes and inherited fields from it (`fn_80065640`);
- `callback2` (non-zero for 49 classes) and the `C_dependencies` entries go into the list `meta_registerNow` runs after registration.

### `fieldInit`

1. `base = meta_fieldCount(meta)`: the inherited fields come first.
2. `meta_appendFields(meta, C_fieldTypes, n)`: one type-creation function per field, for example `igLongMetaField_create`.
3. For each object-reference field `k` (`meta_field(meta, base + k)`), among other per-field stores (for example `_invarianceFunction`):
   - `_metaObject` = the target class's `metaObject()`;
   - then either `_refCounted = false` or `_construct = true`.
4. `meta_setupFields(meta, C_fieldNames, C_fieldStorage, C_fieldOffsets, base)` sets each field's `_fieldName`, `_externalEnumStorage` (a pointer to a per-field global next to `C_meta`), `_offset` and `_parentMetaObject`.

### `vtableRead`

The instance structs follow the class chain. Each level's destructor restores its class's vtable:
- levels are named `<Class>Instance` when that vtable is a named `C_vtable`, otherwise `Instance_<address>`;
- `igObjectInstance`'s constructor is `igObject_construct`;
- a few chains start from another out-of-line constructor (`BaseInstance`).

Members with destructors are `igStringMember` (released to the string pool) and `igObjectRefMember` (reference released). They are named from the class layout where a reflected member is at that offset.

The member destructors' null checks and the release through a parameter (`meta_release`) are needed for the code to match. Writing the same cleanup without destructors changes the code.

## Compiling a class as one file

Each class's code was spread over several generated units with different flags. In one file:
- **Optimization and `stmw`/`lmw`:** `#pragma optimize_for_size off|on` and `#pragma use_lmw_stmw on|off` reproduce the speed and `lmw` tags per function. The file takes the majority setting; only deviating functions are wrapped in `#pragma push`/`pop`.
- **Inlining:** `#pragma auto_inline off` keeps the calls out of line, as the original has them.
- **Function order:** functions are emitted in source order.
- **Data declarations:** declaring data with its real size gives small objects the original's small-data addressing, for example a `C_dependencies` table in `.sdata`. Game classes compile with `-sdata 0` (`nosdata`), because their metaobject globals are in `.bss`.
- **Callbacks:** each one passed to `meta_registerClass` is declared with the parameter's type.

### Exception-table accounting

With exceptions on, every non-leaf function has an exception-index entry. So do the weak out-of-line copies of the instance structs' inline destructors, which the compiler emits and the linker discards. The original was evidently compiled with the same destructors, because their null checks are in its code.

objdiff compares a unit's `extab`/`extabindex` sections as a whole, so a unit containing such copies is never 100% matched there. Before this batch, only the units holding a `vtableRead` with destructors were affected. Now each class's file holds that `vtableRead` together with its other functions:
- fully matched `extab` bytes fell from 26,760 to 16,408;
- fully matched `extabindex` bytes fell from 40,116 to 24,588;
- together, 25,880 bytes of matched data.

The linked executable and complete data are unchanged.

## Not converted

| Reason | Blocks |
| --- | --- |
| Contains original-assembly functions (357 `fieldInit`, 130 `vtableRead`, 23 `register`), or split across files | 484 |
| `fieldInit` with local vector or colour defaults (`UnknownGenL…` structs), or a store into `_abstractProxy` | 10 |
| `create`/`getMeta` calling a real-named `arkRegister` (5 engine classes) | 5 + 5 |
| `vtableRead` calling an out-of-line destructor in a destructor chain | 2 |

**Next:** the 484 blocks hold the registration code the generator never matched: 511 functions, 135,944 bytes (357 `fieldInit`, 105,080; 130 `vtableRead`, 28,276; 23 `register`, 2,512; one `getMeta`, 76).

Their `fieldInit` functions address the field tables as offsets from one data block. For example, `igAnimationTransitionParams_fieldInit` uses `lbl_804AAFB8 + 0x7900`, `+0x793C`, `+0x794C` and `+0x795C`. So the original translation units defined those tables themselves and held many classes' data, more than 31 KB from that block's start. Matching them needs module-sized files that own their `.data`, not per-class files over external data.
