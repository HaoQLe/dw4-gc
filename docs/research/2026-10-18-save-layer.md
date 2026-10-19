# Save layer as readable C++ (2026-10-18)

The second "game subsystems" batch is the GameCube save layer (`0x8031F918..0x80324838`). A PC port has to replace this boundary. The engine also defines save data for PC, Xbox and PS2 (`beSvPlatDataPC`, `beSvPlatDataXbox`, `beSvPlatDataPS2`).

## Result

- **Totals** (from `work` at `9f652fd7`):
  - matched code 1,641,252 → 1,649,868 bytes (39.628910% → 39.836950%, +8,616);
  - linked code 1,639,780 → 1,646,924 (39.593370% → 39.765865%, +7,144);
  - matched data 270,099 → 270,759 (17.961159% → 18.005047%, +660);
  - complete data 307,199 → 307,675;
  - matched functions 17,355 → 17,377 (+22).
- **Checks:** `build.sha1` OK; all sources compile.
- **Source:** 94 of the range's 95 functions are readable source, plus `Ref<beSaveMemoryObj>`'s destructor (`0x802BD63C`). The remaining one, `beSaveUtil_virtual58`, stays in a generated unit with `beMemory`'s hooks. 86 link from source, and 48 generated units are replaced.

| File | Contents | Status |
| --- | --- | --- |
| `beSave.h` | `SaveCardWork` (`beSaveApi`'s tail), result codes, the operations' virtuals, step helpers, `mountPhase` | |
| `beSaveCard.cpp` | memory blocks, the image checksum (`beSaveApi_virtual68`), the mount, the image builder (`fn_80320004`) | Matching |
| `beSaveCardStatus.cpp` | `fn_8032029C`: write, then the file status | NonMatching (77 lines) |
| `beSaveTexture.cpp` | the TPL copy and bind, `TPLGet`, release | Matching |
| `beSaveFileMake.cpp` | `beSvFileMakeApi` | Matching |
| `beSaveFileFind.cpp` | `beSvFileFindApi`, `beSvFormatApi`, `beSvUseCheckApi` | Matching |
| `beSaveRead.cpp` / `beSaveReadStep.cpp` | `beSvReadMediaApi` start / steps and end | Matching / NonMatching (74) |
| `beSaveWrite.cpp` | `beSvWriteMediaApi` | exact, NonMatching (see "Open") |
| `beSaveSpace.cpp` | `beSvGetFreeSizeApi`, `beSvStartApi`, `beSvEndApi` | Matching |
| `beSaveConnect.cpp` | the slot probe and the request's slot lists | Matching |
| `beSaveClass.cpp`, `beSaveClassRead.cpp`, `beSaveClassEnd.cpp` | each class's `virtual58`/`24`/`28` | Matching; `beSvReadMediaApi_virtual28` NonMatching (13) |
| `beSaveUtil.cpp`, `beSaveUtilUpdate.cpp`, `beSaveUtilMeta.cpp`, `beSaveUtilMessage.cpp` | starting an operation and the slot check; the per-frame update; meta and registration; the message handler | Matching; update NonMatching (125); Matching; handler NonMatching (22) |
| `beSaveUtilRefs.cpp`, `beSaveApiRefs.cpp`, `beSaveMemoryObjRef.cpp` | the `Ref<T>` destructors the exception tables name | Matching |

## The layer

**Operations.** Each operation is a `beSaveApi` subclass with four virtuals:
- `start(beSvDeliver *)` (`0x5C`);
- `step()` (`0x60`): returns true when the operation has ended;
- `end(beSvDeliver *)` (`0x64`): copies `_result` back to the request and sets `_isEndOperat`;
- `checksum(image, size)` (`0x68`).

`_st0` is the phase and `_st1` the sub-step; a phase change clears `_st1.._st3`. Phase 0 mounts the card. Phase 19 closes the file and phase 20 unmounts, so failures jump there.

**Results** (`_result`): 2 ok, 3 error, 4 no file, 5 I/O error, 7 broken, 8 corrupt (no copy passed its checksum), 9 not enough space, 10 no free file entry, 11 wrong device, 12 no card.

**`beSaveApi`'s unnamed tail** (`0x3C..0xD4`):
- a `CARDFileInfo` (`0x3C`);
- a `CARDStat` (`0x50`);
- the probe retries, the mount step and the mounted flag (`0xBC..0xC4`);
- the write step (`0xC8`);
- the bound texture palette (`0xCC`) and its flag (`0xD0`).

**Save data** (`_saveWork`). It is written as two copies, at the platform data's two offsets:
- word 0: a checksum of the 32-bit words after it;
- word 1: the save version, `beSvDeliver::_saveVer` as `beSvStartApi` sets it;
- then the game data.

On load, the version word is written into each copy before checksumming, so a save with another version is rejected as corrupt.

**Card image** (`_imageWork`: comment, banner and icons). The comment (64 bytes) comes first, then:
- the banner: C8 with its palette, or RGB5A3;
- the icon frames;
- for C8 icons, their shared palette.

They are copied out of texture palettes (TPL files) in the platform data, bound by an inline copy of the SDK's `TPLBind`. The file status uses the SDK's `CARDSet*` macros. A loaded file whose icon offset is not 64 has its banner and icons rewritten.

**`beSaveUtil`.** It runs one operation at a time for a save RAM. `GENERATE` starts the card library (`beSvStartApi`), `REQUEST_*` start an operation on a slot (−1 for any), `REMOVE` ends it (`beSvEndApi`), and the other messages report the request's state. `GETOPERATE` reports `_result`, as `GETRESULT` does; that is the original's behaviour. The update checks both slots every frame (`beSvConnectCheck`).

## Port notes

- The checksum and the save data's words are in host byte order, so GameCube saves would not load on a little-endian host as written.
- The texture palettes are relocated through 32-bit pointer casts, and the TPL fields are big-endian.
- `SaveCardWork` and `ConnectSlots` overlay fixed offsets of the reflected classes; 64-bit pointers move them.

## Shapes that matched

| Original code | Source form |
| --- | --- |
| A switch's compare tree rooted at a value no case uses alone | an explicit empty case (no-banner `case 0`, `case 5` after the last mount step, `case 3` in `beSaveUtil`'s phase switch) |
| A switch whose default block comes first | `default` written first (`case 0: default:` grouped) |
| `beq` to a case, `b` to the default | a single-case `switch` |
| A leaf loop's scratch registers | C-style declarations at the top, assigned afterwards (the checksum) |
| A value loaded after a bounds check or a grow | an inline helper taking the value by `const &` (`setItem`, `appendInt`) |
| `igIntList`'s append | an inline member function (`IntListAppend::append`) |
| A per-slot array addressed from `self` | a whole-object view (`ConnectSlots` with a 0xD4-byte head), not a cast of the tail |
| A size argument read after an allocation | the replacement block and its allocation as separate statements |
| The file info's address recomputed for each call | `#pragma opt_common_subs off`, scoped to `beSvFileFindApi_virtual60` |

## Configuration

- **Game flags:** they search `include/dolsdk2004` and its `libc` last, for `dolphin/card.h` and `charPipeline/texPalette.h`. `card.h` gains:
  - parameter names valid in C++;
  - `CARDFormatAsync`;
  - the `CARD_STAT_ANIM_*` constants.
- **Data alignment:** MWCC gives a unit's data section 8-byte alignment, so a unit can only own `.data` that starts 8-aligned. `beSaveFileMake.cpp` therefore defines the word before its jump tables (`lbl_804E08F8`, which `beSvStartApi` sets to 2) so that its data starts at `0x804E08F8`, as the original layer's does.

## Open

- **`beSaveWrite.cpp`** is exact but stays NonMatching. Its jump table (`0x804E09C4`) is 4 mod 8 and directly follows the read step's (`0x804E0970`); a unit could only own both if `beSvReadMediaApi_virtual60` matched. It links once that function does.
- **`beSaveUtilMessage.cpp`'s jump table** (`0x804E107C`) is also 4 mod 8. When the handler matches, that unit will need to define the word before it (`lbl_804E1078`), as `beSaveFileMake.cpp` does with `lbl_804E08F8`.
- **`beSvReadMediaApi_virtual60`** (74 lines): the original re-reads `_st0`/`_st1` before incrementing them in a path with no call, where MWCC here reuses the values it switched on. The optimizer pragmas (common subexpressions, propagation, lifetimes) do not change it.
- **Register colouring only:** `fn_8032029C` (the icon loop's temporaries), `beSaveUtil_virtual84` (the inlined appends' list/count registers), `beSaveUtil_virtual90` (one register pair in `GENERATE`) and `beSvReadMediaApi_virtual28` (the list count reloaded after the check).
