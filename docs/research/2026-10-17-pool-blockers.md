# Pool unit blockers and deleting destructors (2026-10-17)

The [registration lift](2026-10-16-registration-lift.md) left four pool units (units that define the field tables their code addresses from the unit's `.data` start) blocked by a few functions each. This batch recovers those functions and builds the four units, and on the way makes 46 more deleting destructors readable.

## Result

- **Totals** (from `work` at `42b69cfa`):
  - matched code 1,578,924 → 1,637,068 bytes (38.123970% → 39.527885%, +58,144);
  - linked code 1,577,452 → 1,635,596 (38.088425% → 39.492344%, +58,144);
  - matched data 248,430 → 269,799 (16.520205% → 17.941208%, +21,369);
  - complete data 285,458 → 306,827;
  - matched functions 17,204 → 17,337 (+133).
- **Checks:** `build.sha1` OK at every checkpoint; all 3,371 remaining generated units verify.
- **New pool units:** `Meta/igViewerStatisticsManager_module.cpp` (23 field setups), `Meta/igViewportAttr_module.cpp` (33), `Meta/igTextElement_module.cpp` (16 and a hand-written compound-field setup), `Meta/igVolume_module.cpp` (2).
- **Remaining registration functions:** 221 (64,892 bytes): 199 `fieldInit` and 22 `vtableRead`. Most are in the three large pools (`lbl_804AAFB8`, `igVertexBlending_className`, `igVirtualCFuncMetaField_className`), whose code ranges hold hundreds of other unmatched functions.

## Deleting destructors

`tools/alchemymeta/dtorsrc.py` makes an Alchemy class's out-of-line destructor `X *dtor(X *self, short flags)` readable. In the original code:
- `if (self)`, the class's vtable is stored and its own members are released in reverse order;
- each base level follows behind a `this` check (an inlined base destructor): its vtable, then its members;
- `if (flags > 0) fn_80066DFC(self)` frees the object; self is returned.

The form that compiles to it writes the top level in the function and the bases as a chain of structs with inline destructors, called once:

```cpp
extern "C" igGroupObject *dtor_80111290(igGroupObject *self, short flags)
{
    if (self) {
        self->__vtable = igGroup_vtable;
        self->_childList.~igObjectRefMember();
        self->igNodeObject::~igNodeObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
```

46 of 48 such functions are exact (32,096 bytes); the other two call another class's out-of-line destructor. Member names come from the class layouts; classes whose vtable has no name keep `Level_<address>` and `unknownXX`.

## Shapes recovered for the blockers

| Shape | Form that matches |
| --- | --- |
| A `vtableRead` whose most-derived constructor builds every level (bases with destructors only) | `ctors='top'` in `asmlift.lift_vtableread_chain` |
| An array member constructed element by element (`fn_800A33B8`, MWCC's array construction: array, element constructor, element destructor, size, count) and destroyed in a level's destructor (`fn_800A3340`) | the calls written in the constructor and in the inline destructor |
| A field default built on the stack (a vector or 4x4 matrix) | a local float array; with several calls, one array per call |
| A 64-bit constant in `r5:r6` | a `long long` argument written with `LL` (without it MWCC builds the halves in another order) |
| A `double` constant (`lfd`) argument | `*reinterpret_cast<const double *>(constant)` |
| A function's address as an argument or a stored value | declared as a function |

## Unit settings

The viewer statistics unit was compiled with `-sdata 0` but with small read-only data and read-only strings: its metaobjects are addressed through `lis` (in `.bss`), while a 1-byte `""` at the very end of `.sdata2` is addressed through `r2`. Two unit tags are added (`configure.py`, `tools/unknowngen/compiler.py`):
- `nosdata1`: `-sdata 0` only;
- `rostr`: `-str reuse,readonly`.

A unit can now own a small string literal it passes (the `""` above, in its own `.sdata2`), and its data objects of 8 bytes or less are placed in `.data` explicitly (`__declspec(section ".data")`), where MWCC would otherwise put them in small data.

Data declarations follow the original's addressing rather than the section: a symbol the original reaches through `lis`/`addi` is declared unsized (for example `lbl_8055DE2C`, in `.sdata` but not addressed as small data); read-only small data (`.sdata2`) is declared `const`.

## Hand-written pieces

`fn_80115248` sets up a compound field type's six members (each created in the default pool, named through the string pool, given an offset, finished and added). It is written by hand in `tools/alchemymeta/pieces/fn_80115248.cpp`; `poolsrc.py` takes a file there as the function's source, replacing `@POOL(offset)` with the name of the unit's data object at that offset. The string pool container is created on first use:

```cpp
void *container = fn_80054140(0x10);
if (container) container = fn_80053F28(container);
lbl_80562140 = container;
```

## Not recovered

- **Three large pools:** 189 `fieldInit` functions (57,572 bytes). Their units would have to hold every function from the first to the last user, and those ranges contain 297, 619 and 859 other unmatched functions.
- **Other registration functions:** about 32, mostly `vtableRead` functions whose bases have out-of-line destructors (the cleanup names them, so they need their C++ names) and register-colouring differences.
- **Two deleting destructors** (`fn_80329DE0`, `fn_8033A984`) that call another out-of-line destructor.

**Next:** with deleting destructors recoverable, the `vtableRead` functions that call them explicitly, and the large pools' other functions, become reachable: the remaining unmatched functions inside the three large pools' ranges are the path to their 57 KB of field setup.
