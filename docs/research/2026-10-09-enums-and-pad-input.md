# Enums and controller input as readable C++ (2026-10-09)

This batch extracts the game's enums and makes the controller-input classes hand-written, typed source.

## Enums

`tools/alchemymeta/enums.py` reads every enum registration: `fn_800635C8(name, value names, values, count)`, called once from a lazy getter that keeps the result in a global.

- **Count:** 149 enums with 1,284 named values. Examples include rendering modes (`IG_GFX_ALPHA_FUNCTION`, `IG_BLENDING_*`), animation states (`Status`: `kPlaying`, `kPaused`, …), memory-pool flags, particle settings and every game class's `MsgAction`.
- **Owner:** an enum's owner is the single class whose attributed functions call its getter; 131 have one.
- **Enum fields:** a field initializer stores the enum getter's address into the field object (at `+0x34`) after fetching field *k*. This links 120 of the 129 reflected enum fields to their enum. Only enum-typed fields are linked: a getter can also be stored into a field object created on the fly, as for `igMemoryRefMetaField._releaseOnReset`.
- **`include/meta/enums.h`:** declares each enum as `struct <Name> { enum Value { … }; }`, so value names cannot clash. Enum fields in the class headers are typed `<Name>::Value`. A name registered more than once is prefixed with its owner (`beWeapon_MsgAction`, `beCameraCtrl_MsgAction`, …).
- **Generator:** it writes enum members through `int` (`(void *)(int)p->_mode` for reads, `p->_mode = (Meta::X::Value)(int)v` for stores). The 94 re-emitted units all verify.
- `tools/alchemymeta/dol.py` now holds the helpers shared by the extraction tools.

## Controller input

Two hand-written files cover the input classes, `0x803116E0..0x80312190`. All 17 functions are exact, with both units complete in the report, including their `.rodata` and exception tables. Six generated units are replaced. The DOL SHA-1 is unchanged.

| Measure | Before | After | Change |
| --- | --- | --- | --- |
| Matched code | 1,528,824 (36.914276%) | 1,531,216 (36.972034%) | +2,392 bytes |
| Fully linked code | 1,527,352 (36.878735%) | 1,529,744 (36.936493%) | +2,392 bytes |
| Matched data | 233,862 | 234,074 | +212 bytes |
| Functions | 16,987 | 16,995 | +8 |

### `bePadData.cpp` (`0x803116E0..0x80311CC0`, `.rodata 0x80426BA8..0x80426BDC`)

One controller's state:
- **Sticks:** `_LStick` and `_RStick`.
- **Buttons:** held bits `_button`, newly pressed `_trigger`, auto-repeat pulses `_repeat`, previous `_last` and timer `_rptime`.
- **Stick directions:** the same set again for each stick (`_lStk`/`_lTrg`/`_lRpt`/`_lLast`/`_lTime` and the right-stick fields).

Functions:
- **`bePadData_virtual24`** (reset): calls the base class's version with its argument, then sets:
  - the stick dead zone `_enaLen` = 0.4 (through `sqrtf` of the vector (0.4, 0));
  - the direction tolerance `_adAngle` = π/4;
  - the repeat delays `_1sttime` = 10 and `_2ndtime` = 6 frames;

  and clears all state.
- **`bePadData_setButtons`**:
  - `_trigger = held & (last ^ held)`;
  - on any change, `_repeat = _trigger` and the timer restarts at `_1sttime`;
  - otherwise, when the timer runs out, `_repeat = held` and it restarts at `_2ndtime`.
- **`bePadData_setLStick` / `bePadData_setRStick`**: store the stick, compute its direction bits and apply the same trigger and repeat logic.
- **`bePadData_stickDirection`**:
  - below the dead zone, no bits;
  - otherwise `atan2` sectors set bit 8 (around ±π), 4 (around −π/2), 2 (around 0) and 1 (around π/2);
  - adjacent sectors overlap by half of `_adAngle`, so diagonals set two bits.

### `bePadManager.cpp` (`0x80311CC0..0x80312190`, `.rodata 0x80426C08..0x80426C0C`)

- **`virtual5C` / `virtual60`:** register and unregister with the insight core.
- **`virtual64` (setup):**
  - finds the game's `beSystem` and keeps a reference;
  - creates five `bePadData` in the manager's memory pool;
  - connects the keyboard receiver to the event dispatcher;
  - removes or unbinds the viewer's hot keys on eight controller buttons (15, 3, 0, 10, 11, 1, 2, 12) through `igViewerSceneInfoManager`'s `_hotKeyReceiver` (`fn_8011B7BC`).
- **`virtual68`:** disconnects the keyboard receiver.
- **`virtual74` (per frame):** unless `beSystem::_isFrameSkip` is set, it handles each controller of the dispatcher's controller manager:
  - reads the port (vtable `0x80`) and connected state (`0x88`);
  - for ports 0..3, a connected controller has its sticks (`0x7C`, index 0 and 1) and button bits (`0x78`) fed into the port's pad;
  - a disconnected one gets zero sticks and buttons.
- **`bePadManager_getPad(player)`:** pad 4 while `_isPadDisable` is set or for players beyond 3; otherwise the player's pad.

### Findings

- **File boundaries:** `bePadData` and `bePadManager` are separate files. `.text` and `.rodata` both run pad-data code, constants and class-name strings, then the manager's, so each unit owns its constant block. The class-name strings (`"Gap::Bec::bePadData"`, `"Gap::Core::igObject"`, …) belong to the vtables, which the source does not emit, and stay in the original objects.
- **`.sdata2` threshold:** game code uses `-sdata2 2`. 4-byte floats and 7-byte strings are in `.rodata`, and a 1-byte string is in `.sdata2`. `cflags_game` is changed from 4, and `beWeapon` still matches.
- **Square root:** MSL's C++ `sqrtf` is inlined: three Newton steps, NaN for negative input, and an `fpclassify` check. The source has it as a local inline.
- **Shapes that only match one way:**
  - `igVec2f` needs a user-defined copy constructor, so copies are float by float;
  - the stick-direction tolerance must be computed before the output is cleared, and the dead-zone test written as an early return;
  - the input loop reads both sticks into one `igVec2f`, with the controller list from an inline accessor.
- **`Ref<T>`:** local references are a template `Ref<T>` (`include/game/Ref.h`, replacing `ObjectRef.h`). The original has one out-of-line destructor per held type, each kept where it was first emitted:
  - `Ref<beWeaponAttachDataList>` at `0x802B3608`;
  - `Ref<beWeaponAttachData>` at `0x803183FC`;
  - `Ref<bePadData>` at `0x80311EB0`;
  - `Ref<igModelViewMatrixBoneSelect>` at `0x802037E8`, for the weapon's message handler.

  The symbol pipeline accepts template names (`__dt__22Ref<Q24Meta9bePadData>Fv`).
- **Pool helper:** `include/game/Pool.h` takes each file's default pool source (`lbl_8056225C` for `beWeapon`, `lbl_80562258` for the pad manager).
- **Helper names:** five helpers are named from their behaviour: `bePadData_setButtons`, `bePadData_setLStick`, `bePadData_setRStick`, `bePadData_stickDirection`, `bePadManager_getPad`.

## Verification

- **Build:** `build.sha1` OK.
- **Report:** `ninja all_source progress build/GDJEB2/report.json`; both units are complete and every section is at 100%.
- **Generated units:** `relindex.py` then `verify_units.py --all`: 4,486 units, none failing.
- **Header check:** all class sizes and field offsets, with enum-typed fields, compile with the pinned compiler.
