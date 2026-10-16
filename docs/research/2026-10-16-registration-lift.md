# Lifting the remaining registration functions (2026-10-16)

The [class registration batch](2026-10-15-class-registration.md) left 511 registration functions (135,944 bytes) built from original assembly: the generator never produced them. This batch recovers 206 of them as readable source and explains the rest.

## Result

- **Totals** (from the previous batch's `work`):
  - matched code 1,532,240 → 1,578,924 bytes (36.996758% → 38.123970%, +46,684);
  - linked code 1,530,768 → 1,577,452 (36.961216% → 38.088425%, +46,684);
  - matched data 208,266 → 248,430 (+40,164);
  - complete data 240,154 → 285,458 (+45,304);
  - matched functions 16,998 → 17,204 (+206).
- **Checks:** `build.sha1` OK after every checkpoint; all 3,567 remaining generated units verify.
- **Remaining:** 323 registration functions, 93,272 bytes (see [Not recovered](#not-recovered)).

## Lifting from the original instructions

`tools/alchemymeta/asmlift.py` runs a straight-line function symbolically (register values as symbols, constants, call results, loads and stack addresses) and writes the generated-source form that `metasrc.py`'s translators already turn into readable class files. `metasrc.py --lift` uses it for every function no generated unit holds.

| Shape | Lifted form |
| --- | --- |
| `register` | `meta_registerClass`'s register and stack arguments, with or without a module guard |
| `getMeta` | the fixed form |
| `vtableRead`, plain object | the stores, the vtable read and an explicit destructor call `fn(&object, -1)` |
| `vtableRead`, destructor chain | the class chain read from the destructor code (below) |
| `fieldInit` | the field-setup calls, member stores, calls with arguments (including a `long long` in `r5:r6` and a float in `f1`), nested calls |
| field replacement | find an inherited field by name, copy it, set the copy up, put it back, release it (below) |

The speed and `stmw`/`lmw` settings of a lifted function are not known, so each combination is tried; a function with an exception-index entry is compiled with exceptions on.

### Destructor chains

After the vtable read, the inline destructors run from the most-derived level down: each level that has one stores its vtable again, then releases its own members. The lifter reads from that code:
- the chain's levels (the vtable stores before the read, in order);
- which level owns each released member, and its kind: a reference (`fn_80066E1C`), a string released inline, or a string whose pool item comes from `fn_801ACC5C` (`igStringMemberLookup` in `include/meta/register.h`);
- which levels have a destructor at all (a level whose vtable is never stored again has a trivial one).

Members set up by a call (`fn_801285A0` sets a 4x4 matrix to identity) and zeroed members are placed by class size where it is known. The stores are written either in the function body or in each level's constructor (in their original order, or stores first); all forms are tried.

### Field replacement

A class can replace an inherited field with a modified copy, inside `fieldInit` or in a separate function:

```cpp
Meta::igCharMetaField *shallowCopyMethodField = static_cast<Meta::igCharMetaField *>(fn_800658F8(meta, lbl_80463690));   // "_shallowCopyMethod"
int shallowCopyMethodIndex = fn_80053998(meta->_metaFields, shallowCopyMethodField);
shallowCopyMethodField = static_cast<Meta::igCharMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(shallowCopyMethodField)->virtual54(1));   // a copy of it
fn_80040030(shallowCopyMethodField, 2);
shallowCopyMethodField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805615BC);
fn_8006588C(meta, shallowCopyMethodIndex, shallowCopyMethodField);
meta_release(shallowCopyMethodField);
```

- `fn_800658F8(meta, name)` searches `meta->_metaFields` by name; `fn_80053998(list, item)` returns an item's index; `fn_8006588C(meta, index, field)` puts a field at an index. They keep their address names.
- The copy must go back into the field's own variable: a separate variable swaps two registers.
- The field's name and type come from its name string in the executable and the class chain's fields.

## Units that own their data

About 300 `fieldInit` functions load one base address and add offsets to it for their tables. MWCC does this for data the translation unit itself defines (globals included): it loads the unit's `.data` start (`...data.0`) into a saved register. Declaring the data `extern`, as a struct, or through a local pointer does not reproduce it; the address is formed again after every call.

So such a function only matches in a unit that defines its tables, and a unit's code is contiguous: the unit holds every function from the pool's first user to its last. `tools/alchemymeta/poolsrc.py` builds that unit:
1. the code range, widened to whole existing units, must contain only units, pooled `fieldInit` functions and separate field-replacement functions;
2. the existing units' sources are merged in address order, each in its own namespace (their local types collide) and keeping its speed, `lmw` and exception settings through `#pragma optimize_for_size`, `use_lmw_stmw` and `exceptions`;
3. the pool's data is written from the executable: strings as `char[]`, word tables as pointer arrays with their relocations, other objects as bytes. dtk's data symbols often merge a string with the table after it; they are split at those boundaries, and each pooled class's tables are named in `symbols.txt` (`<C>_fieldTypes`, `_fieldNames`, `_fieldStorage`, `_fieldOffsets`);
4. the unit is checked function by function, `.data` byte and relocation, and exception-index count.

| Unit | Classes' field setups |
| --- | --- |
| `Meta/igGamecubeAudioContext_fields.cpp` | 1 |
| `Meta/igInterfaceManager_module.cpp` | 3 |
| `Meta/igSerialScheduler_module.cpp` | 9 |
| `Meta/igSearchSceneGraph_module.cpp` | 1 |
| `Meta/igCreateCollisionDatabase_module.cpp` | 4 |
| `Meta/igVisualContextCapabilityManager_module.cpp` | 8, and a field replacement |
| `Meta/igObjectRegistryMap_module.cpp` | 6, and a field replacement |

Most of the data gain is these units' `.data`, now built from source.

## Verification notes

- `tools/hwdiff.py` compares relocation targets named `lbl_…`, `@N` or section symbols as one placeholder. The source-linked checksum is what verifies them; it passed at every checkpoint.
- An exception action naming a weak inline-destructor copy keeps that copy in the executable, which the original does not have. A body-form `vtableRead` calling a member setup function after its object was complete did this: every function matched, but `.text` grew by 0xE0. `metasrc.py` and `poolsrc.py` now reject such files. The failed apply is kept on the local branch `task/registration-lift-badapply`.
- Five audio sample words in `.rodata` (`0x8045DD18..0x8045DD28`, value `0x80008000`) were taken for an exception-table address; they are blocked as relocations in `config/GDJEB2/config.yml`.
- The register arity of a call cannot be read from the registers written before it (a zero constant can be in `r6`); the field-replacement helpers' argument counts are fixed in `asmlift.ARITY`.

## Not recovered

| Reason | Functions | Bytes |
| --- | --- | --- |
| Pooled `fieldInit` in `lbl_804AAFB8`, `igVertexBlending_className`, `igVirtualCFuncMetaField_className`: their ranges hold 297, 619 and 859 other unmatched functions | 189 | 57,572 |
| Pooled `fieldInit` in four modules blocked by a few functions: `igVisualContextAttrDefaultManager_className` (`fn_800AC6A0`, a destructor, and others), `igViewerStatisticsManager_dependencies` (`fn_80403D78`, a destructor), `lbl_80494570` (`igGuiSystemModel_vtableRead`, `dtor_80111290`), `lbl_804981F0` (local vector defaults) | about 74 | about 22,000 |
| `vtableRead` whose bases have out-of-line destructors: the original's cleanup names them, so they need their C++ names in `symbols.txt` | 17 | 3,652 |
| Register colouring (`vtableRead` with unnamed middle levels; one 64-bit constant) | about 15 | about 4,000 |
| Exception actions that would keep a weak copy (`beModelCtrlInfoRideOn*`, `beHitLandModel`, `beCameraCtrl`) | 6 | about 1,700 |

**Next:** recovering the four modules' blocking functions (two out-of-line destructors, one `vtableRead`, a field setup with local vectors) unlocks about 22 KB of pooled field setup with its data; the three large pools follow the recovery of their modules.
