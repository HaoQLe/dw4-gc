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
