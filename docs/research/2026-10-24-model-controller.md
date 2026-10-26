# Model controller as readable C++ (2026-10-24)

`beModelCtrl` (`0x803082A4..0x8030F9C0`) runs the game's models: characters, enemies, bullets, effects and stage objects. Each model is a RAM (`beBaseInfoRam`) of a `beModelCtrlInfo`. Its state is the RAM's "ONE" data (`beModelCtrlInfoRamData`), which holds the scene node and a `beModelCtrlInfoWork`. Subclasses (`beNDMWMdl*`) choose the model kinds they take (`virtual94`) and build each RAM's work (`virtual98`).

Source: `src/Game/Bec/beModelCtrl*.cpp`, `beNDMWMdl*.cpp`, with the shared header `beModelCtrl.h`.

## Batch result (task/subsystems-big)

- **Totals** (from `work` at `b7cbe7ee`; the code and data denominators are unchanged at 4,141,552 and 1,503,795 bytes):

  | Measure | Before | After | Change |
  | --- | --- | --- | --- |
  | Matched code | 1,650,148 (39.843710%) | 1,675,392 (40.453240%) | +25,244 (+0.609530 pp) |
  | Linked code | 1,647,204 (39.772625%) | 1,672,448 (40.382156%) | +25,244 (+0.609531 pp) |
  | Matched data | 270,799 (18.007708%) | 270,975 (18.019411%) | +176 (+0.011703 pp) |
  | Complete data | 307,695 | 309,427 | +1,732 |
  | Matched functions | 17,378 | 17,437 | +59 |
  | Units | 7,481 (4,926 complete) | 7,411 (4,917 complete) | 42 generated units replaced (2 split remainders added) |

- **Second review** (the later commits): no blocking findings; its fixes moved the item and player declarations into private headers (`beNDMWMdlItem.h`, `beNDMWMdlPlayer.h`), the shared messenger and data-object prototypes into `beModelCtrl.h` (`fn_803061BC` takes a `long long` delay everywhere), the `Ref<beModelCtrlHITBOX>` destructor into a unit of its own, and corrected comments.
- **Checks:** `build.sha1` OK (`e409a88a…`); all sources compile; `verify_units.py --all` passes 3,272 of 3,272.
- **Checkpoint 1** (core, bullets, effects, enemies, objects): +19,636 code bytes; reviewed independently with no blocking findings (comment fixes in `19f1a0bd`).
- **Every target function is readable source.** Those not linked are listed under "Open".

## The subclasses

| Class | Role | Linked from source |
| --- | --- | --- |
| `beNDMWMdlEBullet`, `Effect`, `PBullet` | bullets and effects | all |
| `beNDMWMdlEnemy`, `Object` | enemies and stage objects | kind test, RAM start |
| `beNDMWMdlMapBase` | the map's base model, kept centred on the players' average position | kind test, RAM start, move, class |
| `beNDMWMdlMapCursor` | a player's cursor on the map, opening and closing with its player | kind test, move, class |
| `beNDMWMdlPlayer2` | background chips (`g_000bcaps`), left where a player is erased; the player's bits and part of its experience are deposited in the chip (`BKCHIPBITEXP`), which records its stage and position (`BKCHIPSTAGE`, `BKCHIPPOS`), comes back on that stage (`GENESTAGE`), and when raised restores the player and pays back what it holds (`BKCHIPDATA`); hypothesis: a downed player's capsule | managers, kind test, RAM start, switch |
| `beNDMWMdlItem` | dropped items, created by database category (disk, instant, important, ability chip, weapon and armour by the player's level); unnamed items are used on touch, named ones show a blinking name label to the nearest player, who picks them up with ACTION1 when there is room | kind test, RAM start, managers, label slots, `SQ_EXIT` |
| `beNDMWMdlPlayer` | the players | managers, kind test, RAM start, attack wait checks, panel closing, number icon, background chip, class |

**Players:**
- **Turning:** a player turns with the left stick relative to the camera. Each of the eight stick directions sets a 30-frame slot; when all eight slots are still set at once (a full turn), the next attack is `SQ_ATCK2`.
- **Buttons** (`bePadData` bits, named by use in `beNDMWMdlPlayer*.cpp`):
  - guard: `SQ_GUARD` when pressed; while it is held, repeating a stick flick within `bodyAttackTime` (15.0, counted down by the frame time; unit not established) gives the body attack `SQ_ATCK3`;
  - jump;
  - the panels: emergency heal, items, techniques, status;
  - attack: an item on the ground takes the button first (`DROPITEM ACTION1`). Otherwise it attacks once the `ATDELAY` timer has run out. The delay is the player's `ATTACKDELAY` frames, and the status panel's meter plays `SQ_DLTM01..13` at index `(delay - 22) / 4`;
  - the status button alone opens the status window, or plays `CURSOR_NG` while a panel runs.
- **Main lobby** (`stagML02/11/12/13`): no guard, and an attack is only a hit box.
- **Metal:** players are metal in `dng204b1..dng205b3`.
- **Panels:** a panel closes on OFCTRL, ONFREEZE and REMOVE, and when a `PanelCloseSeqList` sequence starts (`SQ_SDMG`, `SQ_MDMG`, `SQ_LDMG`, `SQ_DDMG`, `SQ_DEAD`, `SQ_SLEP`, `SQ_STUN`; an enum metaobject looked up by name).
- **Work:** links HP and MP from the game RAM (`GAMERAM GETPLAYER`). HP and MP are refilled when HP is 0. A player not yet in use gets `GAMESTART` with a default name (いちろう, じろう, さぶろう, しろう) and all `BASE_ISUSE` flags set. The work also equips `POWERSOCKETNAME[0]` (`PLAYERARMS GENERATE`) and sets the status panel's level, HP and MP numbers and meters.
- **Leaving (`SQ_ERAS`):** the player leaves a background chip (`g_000bcaps`) that plays its `SQ_ENTR<n>P`; the game RAM then deposits the player's bits and a level-dependent share of its experience in it (`BKCHIPBITEXP`).

## The controller

**Virtual slots** (named `beModelCtrl_virtualXX` in `symbols.txt`):

| Slot | Role |
| --- | --- |
| 0x6C | takes a `beModelCtrlInfo` of a kind `virtual94` accepts |
| 0x7C | starts a RAM: registers it for `MODELCTRL` and for the hit messages its HIT data asks for |
| 0x80 | the info class |
| 0x84 | the per-frame update |
| 0x88 | finds the Lua manager and the target object |
| 0x8C | the message handler |
| 0x94 / 0x98 | the subclass's kind test and work builder |
| 0xA0 | runs the AI |
| 0xA4 to 0xC4 | subclass hooks |

**Messages** (the `MsgAction` enum): 33 messages, among them:
- `GENERATE`, `REMOVE`;
- the matrix and HP queries;
- `ONFREEZE`/`OFFREEZE`;
- the LOD overrides;
- `CHKBULLET`, a bullet hit that runs the "hit" Lua script;
- the conveyor, quicksand and slippery-floor ride-ons.

Anything else, including `GENERATE_NDSP`, is a sequence name to play. `SQ_ERAS` ends the model and `SQ_ERAS2` hides it.

**Sequences and commands.** A sequence is a list of commands that the command runner (`fn_8030C3AC`) executes from the command index until one waits:
- `CTRL`, `ACTION`;
- `MOVE`, `MOVEEX`, `MOVERL`;
- `PDMOVE`, `WCHECK`, `HITBOX`, `MUTEKI`;
- `LABELCTRL`, `LUACALL`, `AIMAP`, `MSGBOX`;
- `LABEL`, `JUMP`.

`MOVEEX` command names spell out a move in four letters: T(ranslate) or R(otate), the axis, P(lus) or M(inus), and A(ccelerate), D(ecelerate) or T(o speed).

**Movement.** There are four move objects: X, Y and Z translation, and the turn around Y. Each one accelerates or decelerates per frame (`fn_8030A2D8`).

**AI.** There are two kinds:
- **Map AI** (AIM data): picks a zone by the target's distance, then a random entry of that zone, and turns and walks until its timer runs out.
- **Homing AI** (AIH data).

**Lua.** Hit scripts are named `<script>_<info name>.lua` and get their context from the struct at `0x80535914` (`ModelLuaContext`). A script can change the model's HP and can stop the model from turning toward a hit.

## Shapes that matched

| Original code | Source form |
| --- | --- |
| A file's strings and float/double constants read as offsets from one base register | a typed view of the pool (`extern const beModelCtrlPool lbl_80426678`) reached through a local reference (`const beModelCtrlPool &mc = MC;`) |
| A pool constant a function reads only once, through its own symbol (`lbl_80426770`) | that symbol declared on its own (`kACTION`) |
| MSL's inline `sqrtf` reading this file's doubles | a copy of `bePadData`'s `sqrtf`/`fpclassifyf` taking the pool |
| A metaobject loaded before the class's virtual call | an inline `isA(object, meta)` that reads the metaobject first |
| `igMatrix44f` temporaries below the named locals; identity default; copies via `fn_80128CF4` | `Matrix44` with a copy constructor, an identity default constructor and assignment; the messenger's matrix accessor returns one by value |
| `igVec3f` copies by floats | `Vec3f` with a float copy constructor; a conditional of a call result and a global binds to a reference |
| `igStringRef` assignment inlined in small functions, called out of line (`fn_8030F818`) in the handler | an inline `igStringRef::operator=` (in `game/StringPool.h`), with the handler calling the out-of-line copy |
| A RAM number loaded before the info name's null test | the RAM number in a local before the call |
| A list kept in a register across a reference-count store | the list in a local (also seen in the file list) |
| A `MOVEEX` axis computed as `(name[1] + t) - 'X'` | `name[1] - 'X' + t` |
| A kind test returning `extrwi 8` | an `unsigned char` return (the original's boolean type) |
| Reference holders created into a held slot (pool, release, create) | `Ref::releaseHeld()` followed by assigning `_object` |
| A work stored from the new pointer, then used through a reload from its holder | `T *created = ...; Ref<T> holder(created); data->_work = created; work = holder;` (exact in the player's `virtual98`) |
| A RAM number loaded before the info name's null test, in messenger calls | `int ramNo = ram->_ramNo;` before the call (also in the subclasses) |
| A `.data` word read through `lis`/`addi` and reloaded in a loop | an unsized `extern int table[]` (a sized `int` goes to small data) |
| `Gap::kSuccess` addressed with `lis`/`lwz` | `extern const igResult kSuccess__3Gap` |
| A returned `igStringRef` used in place | `const igStringRef &name = call();` (no copy) |
| A matrix's or vector's address taken from a returned temporary | an inline `components(const Vec3f &)` (standard C++, still exact) |

## Configuration

- Units split along the exact runs (`build/analysis/big/mkunits.py`, ignored). It computes the `extab`/`extabindex` ranges from the original objects.
- `Ref<igIntList>` (`0x80020D14`) and `Ref<igAABox>` (`0x80119DF8`) are cut out of generated units. The remainders are `unknown80020D88` and `unknown80119E6C`.
- `Ref<igAABox>` has no exception table, so its unit is built with the engine's flags.

## Open

- **NonMatching, readable (core):**
  - `beModelCtrl_virtual7C` (7 lines): reads the string at pool offset 0 through the bare symbol, where the original uses the base register;
  - `fn_80309C74` (16) and `fn_8030D084` (26): register colouring;
  - `fn_8030AEE0` (48): colouring and an index-plus-one store form;
  - `fn_8030BB3C` (7): reloads the map from its stack home;
  - `fn_8030C85C` (52): register order in the angle-wrapping loops;
  - `beModelCtrlInfoRideOn3/4_virtual5C` (96/57): inline vector forms;
  - the handler `beModelCtrl_virtual8C` (206 of 1,459): mostly colouring and argument evaluation order in `SETEFFECT`.
- **NonMatching, readable (subclasses):**
  - `virtual98` of Object, MapBase and MapCursor (32 lines each; the original keeps the reloaded work in one more saved register, 144 against 150 instructions) and Enemy (65). Tried without effect: the player's raw-pointer form, a text local, a member reference and `igStringRef` assignment;
  - `beNDMWMdlPlayer2_virtual98` (52) and `virtualC4` (134 of 450);
  - `beNDMWMdlItem_virtual98` (29), `virtualB4` (19), `virtualBC` (17): colouring and load order;
  - `beNDMWMdlItem_virtualA0` (453 of 536): mostly a register permutation, plus the screen projection's int to float conversions;
  - `beNDMWMdlPlayer_virtualA0` (56 of 886): register choice in the turn slots, and `clrlwi.` against `cmplwi` for the repeated panel test;
  - `beNDMWMdlPlayer_virtual98` (64 of 585): its two int to float conversions, plus minor colouring.
- **Int to float conversions:** the original reads the conversion's magic double (`0x4330000080000000`) from the file's own pool (for example `+0x3C8` in the player's). In these files the strings and constants are one compiler pool. With the pool declared `extern`, MWCC emits its own constant instead. A form tried with a union and the pool's double gives `fsub`/`frsp` rather than `fsubs`. These functions need the unit to define its pool (the literals in their original order), which is a possible later step.
- **Data:** the handler's jump table (`0x804DEBB0`) follows the file's `.data` words (`0x804DEBA0..0x804DEBAC`), so the handler's unit would own `.data` from `0x804DEBA0` once it matches. The player's tables (`0x804E7BF0..0x804E7CB4`) are its file's `.data`.
- **Exception tables:** objdiff reports the extab/extabindex of several Matching units as unmatched because of the weak `Ref<T>` destructor copies; the DOL checksum and complete data are unaffected.
