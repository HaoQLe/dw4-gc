# Model controller as readable C++ (2026-10-24)

`beModelCtrl` (`0x803082A4..0x8030F9C0`) runs the game's models: characters, enemies, bullets, effects and stage objects. Each model is a RAM (`beBaseInfoRam`) of a `beModelCtrlInfo`. Its state is the RAM's "ONE" data (`beModelCtrlInfoRamData`), which holds the scene node and a `beModelCtrlInfoWork`. Subclasses (`beNDMWMdl*`) choose the model kinds they take (`virtual94`) and build each RAM's work (`virtual98`).

Source: `src/Game/Bec/beModelCtrl*.cpp`, `beNDMWMdl*.cpp`, with the shared header `beModelCtrl.h`.

## Checkpoint result (task/subsystems-big, before the player/item/map classes)

- **Totals** (from `work` at `b7cbe7ee`):

  | Measure | Before | After | Change |
  | --- | --- | --- | --- |
  | Matched code | 1,650,148 (39.843710%) | 1,669,784 (40.317833%) | +19,636 |
  | Linked code | 1,647,204 (39.772625%) | 1,666,840 (40.246750%) | +19,636 |
  | Matched data | 270,799 (18.007708%) | 270,855 (18.011430%) | +56 |
  | Complete data | 307,695 | 308,947 | +1,252 |
  | Matched functions | 17,378 | 17,421 | +43 |

- **Checks:**
  - `build.sha1` OK (`e409a88a…`);
  - all sources compile;
  - `verify_units.py --all` passes 3,282 of 3,282;
  - the map shows each `Ref<T>` destructor taken from its own unit, with the units' weak copies listed as unreferenced duplicates.
- **Linked from source:** 83 functions in 19 units.
- **Readable but NonMatching:** 11 functions (see "Open").
- **Replaced:** 32 generated units.

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

## Configuration

- Units split along the exact runs (`build/analysis/big/mkunits.py`, ignored). It computes the `extab`/`extabindex` ranges from the original objects.
- `Ref<igIntList>` (`0x80020D14`) and `Ref<igAABox>` (`0x80119DF8`) are cut out of generated units. The remainders are `unknown80020D88` and `unknown80119E6C`.
- `Ref<igAABox>` has no exception table, so its unit is built with the engine's flags.

## Open

- **Remaining targets:**
  - `beNDMWMdlPlayer` (`0x8034C364..0x8034E6CC`, 8 functions, 8,904 bytes);
  - `beNDMWMdlPlayer2` (3 functions, 3,140 bytes);
  - `beNDMWMdlItem` (7 functions, 6,116 bytes);
  - `beNDMWMdlMapBase`/`MapCursor` (6 functions, 2,560 bytes).
- **NonMatching, readable:**
  - `beModelCtrl_virtual7C` (7 lines): reads the string at pool offset 0 through the bare symbol, where the original uses the base register;
  - `fn_80309C74` (16) and `fn_8030D084` (26): register colouring;
  - `fn_8030AEE0` (48): colouring and an index-plus-one store form;
  - `fn_8030BB3C` (7): reloads the map from its stack home;
  - `fn_8030C85C` (52): register order in the angle-wrapping loops;
  - `beModelCtrlInfoRideOn3/4_virtual5C` (96/57): inline vector forms;
  - the handler `beModelCtrl_virtual8C` (206 of 1,459): mostly colouring and argument evaluation order in `SETEFFECT`;
  - `beNDMWMdlEnemy_virtual98` and `beNDMWMdlObject_virtual98`: the original reloads the work holder after each call.
- **Data:** the handler's jump table (`0x804DEBB0`) follows the file's `.data` words (`0x804DEBA0..0x804DEBAC`), so the handler's unit would own `.data` from `0x804DEBA0` once it matches.
