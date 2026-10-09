# beWeapon as readable C++ (2026-10-09)

This batch makes the first game subsystem hand-written, typed source rather than generator output. It covers the methods of `Gap::Bec::beWeapon` at `0x80318230..0x80318A24`, written against the `include/meta` layouts.

## Result

Five functions in `src/Game/Bec/beWeapon.cpp` (`0x80318230..0x80318474`) and one in `src/Game/Bec/ObjectRef.cpp` (`0x802B3608..0x802B367C`) are exact and linked. The DOL SHA-1 is unchanged (`e409a88a…`).

| Function | Size | Before | Now |
| --- | --- | --- | --- |
| `beWeapon_virtual88`: releases the attachment list | 88 | generated | readable |
| `beWeapon_virtual80`: returns a metaobject pointer (class unknown) | 16 | generated | readable |
| `beWeapon_virtual7C`: creates the attachment list with four attachments on first use, then sends `PLAYERARMS` | 356 | unmatched | readable, new match |
| `__dt__10AdoptedRefFv` (was `dtor_803183FC`) | 116 | generated | readable |
| `beWeapon_virtual84`: empty | 4 | generated | readable |
| `__dt__9ObjectRefFv` (was `dtor_802B3608`) | 116 | generated | readable (`ObjectRef.cpp`) |

- **Totals:**
  - matched code 1,528,468 → 1,528,824 bytes (36.905680% → 36.914276%, +356);
  - linked code 1,526,996 → 1,527,352 (36.870140% → 36.878735%);
  - 16,987 functions.
- **Units:** five generated units and one original assembly unit (`virtual7C`) became two hand-written ones (completed units 4,737 → 4,734, units 7,643 → 7,639).
- **Matched data:** −40 bytes (233,902 → 233,862). The cause is a known artifact. `beWeapon.o` also contains the compiler's weak copy of the `ObjectRef` destructor and its exception-table entries. The linker discards them in favour of `ObjectRef.cpp`'s copy, so the executable is exact, but objdiff reports the unit's `extab` at 94% and `extabindex` at 86%.
- **Not yet linked:** `beWeapon_virtual8C` (1,440 bytes, the message handler) and `beWeapon_virtual58` (generated, unchanged) still come from their original objects. See [the message handler](#the-message-handler).

## What the code shows

- **Messages:** the weapon reacts to messages through `_messenger` (`beBaseInfoManager +0x14`, a `beMessenger`). `fn_80305xxx`/`fn_80306xxx` are messenger requests: a target name, the info's RAM number and a command, with results read back by index. The command strings are `PLAYERARMS`, `REMOVE`, `PLAYER`, `GETINFONAME_RUN`, `ACTION`, `GETAPPEARANCELIST`, `MODELCTRL` and `SETLABEL`.
- **The `MsgAction` enum:** registered lazily by `fn_802B3370` from the tables at `0x804CEDE8`/`0x804CEDF4`. Its values are `GENERATE` = 0, `REMOVE` = 1, `GETINFONAME` = 2. `fn_80304FD8(messenger, enum, message)` returns a message's action.
- **Namespace:** the class name string `"Gap::Bec::beWeapon"` at `0x80452688` shows that game classes are in namespace `Gap::Bec`.
- **Memory pools:** objects are created in their owner's memory pool. `fn_80068430` reads the pool index from the top byte of `igObject +4`, and when the flag at `lbl_80562298` is clear the default pool is used. `fn_802B38CC`, `fn_802B3ADC` and `fn_801BAD30` create a `beWeaponAttachDataList`, a `beWeaponAttachData` and an `igModelViewMatrixBoneSelect`.
- **Operator delete:** `fn_800A325C` is MSL's `operator delete(void *)` (it calls `free` when the pointer is non-null). It is now named `__dl__FPv` everywhere (138 files modified, 2 generated units removed).

## Compiler settings of game code

Matching `beWeapon` establishes the game file's flags, now `configure.py`'s `cflags_game` (library `Game`):

| Setting | Evidence |
| --- | --- |
| `-O4,p` | separate register saves instead of `_savegpr`; an ×8 unrolled clearing loop |
| `-use_lmw_stmw on` | the message handler saves `r21..r31` with `stmw` |
| `-Cpp_exceptions on` | exception-table entries for every function with cleanups |
| `-str reuse,readonly` | the command strings are in `.rodata`, addressed from one section base with offsets |
| `-sdata2 4` | 7-byte strings in `.rodata`, while the empty string used for unnamed objects (`lbl_80567368`) is in `.sdata2` |

`-str pool` was ruled out: it packs strings without alignment, while the original aligns each string to 4. Compiler versions 2.5, 2.7 and 3.0 give no better results than 2.6.

## Reference counting

- **Release:** releasing an object is `_refCount--; if ((_refCount & 0x7FFFFF) == 0) fn_80066E1C(object);`. Plain source reproduces the decrement, reload and mask; no `volatile` is needed.
- **Local references:** these have out-of-line destructors, which exception tables point to.
- **Destructor copies:** the original `virtual7C` refers to two different copies with the same code: `0x802B3608` for the list reference, which adds a reference when constructed, and `0x803183FC` for the adopted attachment. The message handler refers to a third, `0x802037E8`. The linker keeps the first definition of each and discards later duplicates. So these are distinct types, probably one smart-pointer template per held type, each first emitted in a different file.
- **Second argument:** `beWeapon_virtual7C`'s second argument is passed on to `fn_80305308`, which dereferences it, so it is an object; the source types it as `beBaseInfoRam *`, as for the message handler.
- **This batch's model:** non-template classes in `include/game/ObjectRef.h`. `ObjectRef` adds a reference and has its out-of-line destructor in `ObjectRef.cpp`. `AdoptedRef` takes over an existing reference; its copy is emitted in `beWeapon.cpp`. The class names are ours.
- **The failure this explains:** with one class for both locals, the linker had no reference to `0x802B3608`'s copy and stripped it, shifting the whole executable by `0x94` bytes.

## The message handler

`beWeapon_virtual8C(self, ram, message)` (`ram` is a `beBaseInfoRam`, `info` its `_parentInfo`, a `beWeaponInfo`) is fully understood:
- **GENERATE:**
  1. it sends itself `REMOVE`;
  2. asks the player (`PLAYER`/`GETINFONAME_RUN`, then `ACTION`/`GETAPPEARANCELIST`) for an appearance list and a bone table;
  3. labels each sequence entry (`MODELCTRL`, name, label, `SETLABEL`);
  4. for each bone name the table resolves, creates an `igModelViewMatrixBoneSelect` (`_matrixIndex` = the bone), adds the weapon node to it and attaches it to every appearance, recording both in the attachment for the RAM slot.
- **REMOVE:** detaches the selectors from the appearances and clears both lists. The clearing is an inlined "release all, then `setCount(0)`".
- **GETINFONAME:** sends the info's name.

**Status:**
- **Branch:** the draft is on the local branch `task/beweapon-8c-wip` (`src/Game/Bec/beWeapon_handler_wip.cpp`, not linked).
- **Diff:** it compiles to the same 360 instructions with identical opcodes, immediates and string offsets. About 280 lines differ by register numbering only.
- **What improved it:**
  - sharing function-level loop variables (346 → 308 differing lines);
  - splitting the zeroing into its own inline helper (→ 280);
  - calling virtual slots through declaration-only classes, which gives the original's `lwz r12` form;
  - passing the reference object itself (reloaded from the stack) rather than a raw copy.
- **What did not:**
  - declaration-order permutations (best 274);
  - member-function form;
  - inline helpers per case;
  - local copies of the parameters;
  - `-inline` variants, `-O3`/`-O2`, `noschedule` and `nopeephole`.
- **Register-order findings from small tests:**
  - locals take registers from `r31` downward in declaration order;
  - parameters take the next block, in ascending order.

  The original instead keeps `this` in `r31` and gives the remove case's attachment `r30`, reusing `r31` for the list being cleared.
- **Next concrete investigation:** find which source variable carries the remove case's attachment. Its `r30` and the reuse of `r31` suggest that case was written with its own scoped locals, or as a member function of `beWeaponAttachData`. Also test a template smart-pointer model (three dtor instantiations). decomp-permuter needs C source, so it cannot be used directly.

## Verification

- **Independent review:** clean builds of this branch and of `work` from exports matched. The review confirmed:
  - identical SHA-1;
  - code +356, data −40 (explained by the discarded duplicate destructor and its exception entries);
  - only `beWeapon_virtual7C` gained and nothing lost;
  - map addresses, exception-table destructor order and whole-token renames;
  - a recompile with its own comparator.

  Its notes (the type of 7C's second argument, the `ObjectRef.cpp` comment and unit boundary, placeholder class names, two doc counts) are addressed.

- **Build:** `build.sha1` OK. The map places `beWeapon.o` and `ObjectRef.o` at their original addresses, and the 7C exception table names the two destructors in the original order.
- **Units:** after rebuilding `relindex.json` (operator delete's name changed), `verify_units.py --all` passes for all 4,492 generated units.
- **Report:** `ninja all_source progress build/GDJEB2/report.json` shows both units complete.
