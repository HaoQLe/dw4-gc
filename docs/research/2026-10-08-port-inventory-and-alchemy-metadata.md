# Port inventory and Alchemy class metadata (2026-10-08)

Investigation only: no game source changed. The project goal is a PC port, so the question was which code a port needs as readable source, and how much naming the engine's own reflection data can provide.

## Code by region

Regions are classified by the strings each function references (`ig…` Alchemy class names, `be…` game classes, CRI error and version strings, Lua messages, libpng and SDK strings). Configured library units count by their category. Bytes are from the report at `5e986d9`.

| Region | Addresses | Code | Share | Matched | Readable (not generated) |
| --- | --- | --- | --- | --- | --- |
| Alchemy engine | `0x80020400..0x8021C000` | 2,020,932 | 48.9% | 34.3% | 66,304 |
| Game (`be…` classes, menus, items, AI) | `0x802B2000..0x803C5000` | 1,125,960 | 27.2% | 33.2% | 0 |
| CRI middleware (ADX 9.31b, Sofdec) | `0x80290000..0x802AA000`, `0x803C5000..0x80403000` | 360,492 | 8.7% | 6.7% | 0 |
| Named libraries (SDK, MSL, zlib, libpng) | configured units | 356,132 | 8.6% | 99.7% | 354,984 |
| Alchemy and Lua 4.0.1 | `0x80269000..0x80290000` | 158,848 | 3.8% | 24.2% | 0 |
| Alchemy viewer | `0x80403000..` | 64,764 | 1.6% | 30.3% | 0 |
| Alchemy, late range | `0x802AA000..0x802B2000` | 33,500 | 0.8% | 53.1% | 0 |
| Other library gaps | `0x8021C000..0x80269000` | 15,060 | 0.4% | 9.5% | 0 |

Boundaries are approximate: they come from runs of string evidence, and translation units were not established.

**What a port needs from each region:**
- **Replaced:** the libraries, the SDK and CRI middleware get PC equivalents. CRI data formats (ADX audio, Sofdec video) have open decoders.
- **Taken from upstream:** Lua 4.0.1 is public source (the version string is `Lua 4.0.1`).
- **Needed as readable source:** the game region and the Alchemy engine's core, scene graph and resources. The rendering backend would be reimplemented.

None of the matched game code is readable; it is all generator output.

## Alchemy class metadata

Every Alchemy class registers a metaobject at startup, and the arguments are static. `tools/alchemymeta/extract.py` reads them from the DOL:

- **`fn_80066204`** registers a class. It takes the metaobject global (`r4`), the parent's register function (`r5`), the name string (`r8`), the instance size (`r9`) and four or five callbacks (`r6`, `r7`, `r10` and stack arguments).
- **`fn_80065924(meta, getters, n)`** appends `n` fields. Each entry of `getters` is a function that ensures a field-type class is registered and instantiates it from that class's metaobject, so the type resolves to a class name (`igFloatMetaField`, `igObjectRefMetaField`…).
- **`fn_800659C0(meta, names, slots, offsets, base)`** gives the fields their names and offsets from static tables.
- Per-field calls between the two set defaults. `fn_80065D88` returns the field count and `fn_800658E4` an indexed field.

Example: `igSphere` (register `fn_8011F60C`, size `0x18`, parent `igVolume`) has `_center` (`igVec3fMetaField`, `0x8`) and `_radius` (`igFloatMetaField`, `0x14`).

**Results:**

| Group | Classes | With fields | Fields |
| --- | --- | --- | --- |
| Alchemy (`ig…`) | 963 | 528 | 2,650 |
| Game (`be…`) | 458 | 297 | 1,437 |
| Other (plugins, particles) | 13 | 9 | 115 |
| **Total** | **1,434** | **834** | **4,202** |

- **Coverage:** every class has a size and a parent, and every extracted field has a type. 14 field-registration functions branch and were skipped.
- **Consistency:**
  - no field lies at or beyond its class size;
  - parent sizes grow monotonically (`igObject` 8, `igNamedObject` 12, `igInfoManager` 16, `beBaseInfoManager` 32, `beWeapon` 36);
  - `igObject`'s 8 bytes are a vtable plus the reference count at `+4` that generated units already decrement;
  - the hand-written `igNamedObject` header is empty, and the metadata adds `_name` (`igStringMetaField`, `0x8`).
- **Not yet extracted:**
  - the target class of `igObjectRefMetaField` fields (868 fields; set by further calls after the field properties);
  - enum names;
  - meanings of the callback arguments.

### Naming reach (estimates, not applied)

- Register functions, field-registration functions and the callbacks passed at registration cover 5,389 functions (689,280 bytes).
- Runs of four or more `.text` pointers in data, a vtable heuristic that also catches other function tables, cover 7,024 functions (1,158,320 bytes).
- Together that is 12,413 functions (1,847,600 bytes, 45% of code) that could be attributed to a class. Method names beyond registration would initially be slot-based (`igSphere` virtual slot `0x14`) unless an Alchemy API name is known.

Output: `build/GDJEB2/analysis/meta/classes.json` (ignored). Run after a normal build and `tools/unknowngen/relindex.py`.

## Suggested next steps (not started)

1. **Apply class metadata as declarations:** generate headers with real class layouts (fields named and typed per the metadata, sizes and parents asserted), and attribute registration functions and vtables to their classes in `symbols.txt`. Verify vtable owners through constructors before naming.
2. **Extract object-reference targets and enums:** these give the types of the 868 reference fields.
3. **Re-express generated code against those headers:** for example, `fn_80068128` is used at about 300 sites as a type test against a class metaobject, so naming it and the metaobjects makes those sites readable. Keep matching and checksum gates.
4. **Recover one game subsystem readably as the template:** for instance the `beWeapon`/`beBaseInfoManager` family, whose layouts are now known.

## Batch: class headers and function attribution (2026-10-08)

The first proposed step, done on `task/alchemy-class-headers`. No game source or build input changed. The DOL SHA-1 is unchanged (`e409a88a…`).

- **Extraction additions** (`tools/alchemymeta/extract.py`):
  - **Object-reference targets:** after fetching field *k* (`fn_800658E4` with the field-count base plus *k*), the code calls the target class's `getMeta` and stores the result in the field. This resolves targets for 1,536 of 1,565 reference fields (for example `igNode._bound` → `igVolume`, `beWeapon._attachDataList` → `beWeaponAttachDataList`).
  - **Vtable chains:** the `r10` callback constructs a temporary instance on the stack, storing each constructor level's vtable at `0x8(r1)`, and reads it back with `lwzx` before any branch. The last vtable stored is the class's own: 1,280 classes, all distinct. In 558 of 568 classes whose parent has a vtable, the parent's own vtable appears earlier in the chain. Typed lists have an unregistered template level in between, and the 10 exceptions skip inlined levels.
  - **Callback roles, checked against the code:**
    - `r6` reads exactly the parent's metaobject (1,434 of 1,434 classes with a registered parent);
    - `r7` only calls the class's `getMeta`, which loads its own metaobject (1,434 of 1,435, all but the root);
    - the stack argument at `+8` is the field initializer.
  - **Duplicates:** `igModelViewMatrixBoneSelectList` is registered twice (engine and game range, same size).
- **Headers** (`tools/alchemymeta/headers.py`, `include/meta/`): 1,434 class layouts as structs in namespace `Meta`, each deriving from its registered parent.
  - Reflected fields are typed; reference fields are pointers to their target class.
  - Bytes no field covers are `unknownXX`, and the root's vtable pointer is an explicit member.
  - **Check:** a generated check file asserts all 1,434 sizes and 4,202 field offsets at compile time, and compiles with the pinned compiler. A deliberately wrong size is rejected.
  - Nothing includes the headers yet.
- **Attribution** (`tools/alchemymeta/attribute.py`, `config/GDJEB2/alchemy_class_functions.txt`): 11,858 functions (1,667,376 bytes) attributed to exactly one class:
  - by role: 5,367 virtual-method slots, 1,435 `register`, 1,434 `getMeta`, 1,434 `getMetaCall`, 1,281 `vtableRead`, 834 `fieldInit` and 112 `parentMeta`;
  - by group: 8,619 engine functions (1,013,716 bytes), 3,157 game functions (639,092 bytes) and 82 others;
  - 445 functions claimed by several classes are left out.

  Virtual slots are recorded by byte offset; their meanings are unknown.

**Next:**
- use the attribution and headers in source: names for `fn_` symbols that the generator and existing units accept, and generated units re-expressed against `Meta::` types;
- recover one game subsystem readably as the template (for example `beWeapon`);
- extract enum names and the remaining callback roles (`spC`, `sp10`).

## Batch: class names and typed generated code (2026-10-09)

Second step, on `task/class-names-and-types`. Code is unchanged throughout: the DOL SHA-1 is `e409a88a…`, and the report totals are identical (matched code 1,528,468 bytes, linked 1,526,996, matched data 233,902, 16,986 functions).

### Names

- **Rename:** `tools/alchemymeta/rename.py` renamed 11,857 attributed functions from their address names to `<class>_<role>` across 4,671 files: `symbols.txt`, sources, headers, the generator's state files and templates. Examples: `igSphere_register`, `igSphere_getMeta`, `beWeapon_virtual88`.
- **Name choice:** a function gets the first of its roles in the order register, getMeta, getMetaCall, parentMeta, vtableRead, fieldInit, virtual. A later copy of a twice-registered class adds `_2`.
- **API functions:** the registration API functions themselves (`fn_80066204`, `fn_80065924`, …) are not attributed, and keep their address names.
- **Generator changes:**
  - generatable functions are those named by address or named from their class (`generatable()`), not those with a name prefix;
  - helper type names keep the function's address as their tag (`tag()`), so they are unchanged;
  - `fastcmp.py` takes function addresses from `symbols.txt` instead of parsing names.
- **Re-emission:** `emit.py` changed 913 units, all by the sorted order of extern declarations. All 4,497 units verify.

### Typed field accesses

- **Generator:** `gen.py` writes a field access as `reinterpret_cast<Meta::C *>(base)->member` when two things hold:
  - the base value's class is known;
  - the access matches a member in `tools/alchemymeta/layouts.json`: the same C type, or for word accesses, a pointer or an `int`.
- **How a value's class is known:**
  - a virtual function's first parameter;
  - a reference member read from a value of known class;
  - an inline cast tested against a class metaobject (`fn_80068128`);
  - a value passed as the first argument of one class's virtual functions;
  - metaobject globals and `getMeta` results (`igMetaObject`, which is itself reflected).
- **Headers:** units include only the headers they use.
- **`igObject::_refCount` at `+4`:** this member is not reflected. It comes from the release code, which decrements it and releases the object when its low 23 bits reach 0. It is listed in `headers.py`'s `EXTRA` with that evidence.
- **Result:** 499 units changed with 2,026 typed accesses. All of them verify, and the checksum and report are unchanged.
- **Reach:** this covers about 12% of field accesses in generated code; about 14,200 raw `reinterpret_cast<char *>` accesses remain. The class of most other pointers (parameters of non-virtual functions, call results, globals) is not known from current evidence.

Example (`beWeapon_virtual88`):

```cpp
value0=reinterpret_cast<Meta::beWeapon *>((void *)p0)->_attachDataList;
...
reinterpret_cast<Meta::beWeapon *>((void *)p0)->_attachDataList=(Meta::beWeaponAttachDataList *)0;
```

**Not done:**
- a full `cycle.sh` regeneration under the new names. Units were re-emitted from the existing results and verified, but the combined and isolation passes have not run since the rename;
- typed parameters in signatures (callers in other units declare them differently);
- names for non-attributed functions.

**Review.** An independent review found no blocking issues. It did a clean build and compared against `work`'s build:
- same SHA-1;
- identical measures;
- identical sets of matched functions once old names are mapped to new ones.

It also found:
- `symbols.txt` changed only in the names of the 11,857 renamed lines;
- no stale references to renamed functions;
- 749 changed units recompiled with their own flags, all matching under its own comparator (3,095 functions).

Two latent typing risks it raised, both absent from today's output, are now hardened (re-emission leaves every unit unchanged):
- **Shadowed members:** a member a more derived class hides behind the same name is now qualified with its own class.
- **Cast typing:** this now requires a conjunction with exactly one class test whose result must be non-zero, against a metaobject load at offset 0.

Remaining notes:
- **`this` assumption:** virtual functions are assumed to take `this` in `r3`. A hidden struct-return pointer would break this.
- **Reserved names:** eight class names start with `__internal…`, which are reserved identifiers in C++.
- **Dropped attribution:** `fn_80216104` lost its attribution because of the `_2` suffix for the twice-registered class.
