# Alchemy igArkCore bootstrap recovery

Verified on 2026-09-29 from baseline `dcc6b0a`, on
`task/igarkcore-bootstrap`, integrated into personal-fork `work`.
Functional commit: 40b83bf.
Scope: `Gap::Core::igArkCore::initBootstrap()` at `0x8003D2F8`, 420 bytes.
The existing Matching split gains only this function; other class methods
remain original. UART, lifecycle, version-check and constructor recovery
are preserved.

## Original evidence and recovery

The original function contains 105 instructions, 37 direct calls and two
virtual calls. Its 45 relocation records comprise 37 `R_PPC_REL24` calls
and eight `R_PPC_EMB_SDA21` references. The function owns no new data or BSS.

Recovery followed three checks: refresh the normal report before edits;
inspect original instructions, dependencies, offsets and storage; then
compare compiled bytes/relocations and verify a source-linked executable.
The extended split was temporarily NonMatching during experimentation.
Before implementation, strict objdiff showed the existing two functions
matching and the entire 420-byte bootstrap function missing.

The observed operations, in execution order, are:

1. Write byte `1` at `this + 0x14`, call `fn_80092280`, then clear the word
   at `this + 0x394`. The callee initializes storage guarded by
   `lbl_80562394`; its semantic name remains unknown.
2. If `lbl_805621C8` is null, allocate `0x19F4` bytes through `fn_8006070C`
   and, for a nonnull result, call constructor-shaped `fn_8005AF08`.
   Store the resulting pointer in the same global, including null on
   allocation failure. Call its vtable slot at offset `0xA8` without an
   additional null guard, as the original does.
3. Pass `lbl_805621E0` to `fn_800607F4`, then pass the returned `r3` to
   `fn_8002DB4C`; store the result at `this + 0x18`. Inspect that object's
   pointer at `+0x08`: null yields zero; otherwise `fn_8005641C` returns a
   32-bit unsigned value shifted right by two. Compare the result as a
   signed integer with `0x400`; call `fn_8005383C(object, 0x400)` when it
   is less than or equal. The callee confirms this capacity-growth pattern.
4. Repeat the `fn_800607F4` / `fn_8002DB4C` pair, storing at `this + 0x24`.
   Make two `0x0C`-byte allocations through `fn_800560F8`, each followed by
   `fn_8003E848` only when nonnull, storing at `this + 0x28` and `+0x2C`.
   The latter callee clears words at offsets `0`, `8`, `4` and returns
   `this`; it remains original rather than being inlined or recovered here.
5. Call `fn_8002A0A8`, set the existing `_isBootstrapped` byte, and copy
   words at object offset `+0x0C` into the existing bootstrap counters at
   `this + 0x04` and `+0x08`, using `this + 0x18` and `lbl_8056229C`.
6. Preserve the 22-call sequence from `fn_8002AAD4` through `fn_8002320C`
   exactly as listed in source. Each inspected wrapper passes its own
   callback address to `fn_80066188`; no class names were inferred.
   `fn_8002A0A8` uses the same pattern. Call `fn_80027824`, which returns
   shared `lbl_80561698` after lazy initialization, and store its return
   value in `lbl_80561688`. Finish with vtable slot `0xAC`.

All four referenced globals are existing four-byte `.sbss` symbols:

| Storage | Observed use |
| --- | --- |
| `lbl_805621C8` | Lazily constructed pointer, two virtual calls |
| `lbl_805621E0` | Argument to `fn_800607F4` |
| `lbl_8056229C` | Pointer whose word at `+0x0C` supplies the second counter |
| `lbl_80561688` | Receives the return value of `fn_80027824` |

They remain externally defined by original objects. No storage ownership,
symbol names, header layouts or compiler settings change. The only split
change is `.text` end `0x8003D2F8` → `0x8003D49C`.

`fn_8005AF08` installs the original vtable at `0x80471BDC`; its entries at
`+0xA8` and `+0xAC` point to `fn_8005CAB8` and `fn_8005CF4C`. The local
`Unknown805621C8` declaration is a partial ABI view. The pinned compiler's
first two vtable words are reserved; the declarations at `0x08..0xA4`
only reserve slots and do not recover their signatures. Only the two used
slots are called, with the pointer in `r3`. No instance, constructor or
replacement vtable is emitted. A raw function-pointer table expression
produced different register choices, while this virtual-call view matches.

Opaque `igArkCore` fields retain their offsets and existing storage.
The new dependency declarations describe the consumed calling convention,
not recovered original C++ class types. Ignored return values do not prove
that the original functions returned `void`. Integer allocation arguments
and the shift result are explicitly 32-bit: this project's
`igUnsignedLong` is 64-bit and would produce the wrong ABI.
The null-first conditional expression preserves the original branch order.

## Exact verification and discarded compiler artifact

Pinned engine compilation remains `GC/2.6`, `-O4,p`, `-inline auto` and
the existing ABI options. All configured source compiles. Strict objdiff
with `functionRelocDiffs=data_value` reports 100% for all three functions,
724 original code bytes, 345 diagnostic bytes and one suppression BSS byte.

A supplemental ELF comparison independently checks section types, flags,
alignment, all original code/data bytes after masking only relocation bits,
and all 50 original relocation records (45 bootstrap plus five version-check).
Records agree in type, addend and target name, binding, visibility,
definition section, value, size and symbol type. The constructor's 196
bytes still agree directly and have no relocations.

The existing 116-byte string destructor remains an extra compiler artifact
with two relocations, to string release and `__dl__FPv`. It appears between
the constructor and bootstrap in the source object's `.text`: original
bootstrap offset `304` becomes source offset `420`. The comparison removes
only this exact artifact range and normalizes subsequent relocation
offsets by 116. All 724 original bytes then match; the full source ELF's
840-byte text section is deliberately not described as identical.
The linker discards the destructor (`UNUSED` in the map), preserves original
function order and links `initBootstrap` from `igArkCore.o` at `0x8003D2F8`.
The artifact adds no executable bytes and is not counted as recovery.

Fresh commands:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
build/tools/objdiff-cli diff \
  -1 build/GDJEB2/obj/Alchemy/src/igCore/igArkCore.o \
  -2 build/GDJEB2/src/Alchemy/src/igCore/igArkCore.o \
  -c functionRelocDiffs=data_value \
  -o build/GDJEB2/igArkCore-bootstrap-final-strict.json
/opt/homebrew/bin/python3 build/GDJEB2/analysis/verify_igArkCore_bootstrap.py
shasum orig/GDJEB2/sys/main.dol build/GDJEB2/main.dol
```

Independent review found no issues and separately confirmed the original
bytes, full relocation metadata, link map, checksum and progress deltas.
All checks passed. Generated reports, assembly and the supplemental verifier
remain ignored under `build/`. The normal checksum rule passes, and both
original and source-linked DOL SHA-1 equal
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.

## Progress and next target

| Metric | Before → after | Percentage-point delta | Exact byte gain |
| --- | --- | --- | --- |
| Matched code | 8.684860168% → 8.695001294% | +0.010141126 | +420 |
| Fully linked code | 8.344697833% → 8.354838959% | +0.010141126 | +420 |
| Matched data | 11.011208310% → 11.011208310% | 0 | 0 |

Matched code: 359,688 → 360,108 bytes. Linked code: 345,600 → 346,020
bytes. Matched data remains 165,586 bytes. One additional matched function
(1,188 → 1,189); completed units remain 174 because an existing Matching
split was extended. **No denominator changes:** 4,141,552 code bytes,
1,503,795 data bytes, 23,334 functions and 5,134 units. The configured
engine category now contains 1,140 code bytes and 354 data bytes; its 100%
applies only to the two configured source units.

Next proposed bounded target: `Gap::Core::igArkCore::exitBootstrap()` at
`0x8003E29C` (436 bytes), the teardown counterpart using several of the
same globals. Inspect reference-count operations and additional virtual
slots before choosing a separate split; do not extend across intervening
unrecovered functions. This target is not recovered in this task.
