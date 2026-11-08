# igGamecubeVisualContext as readable source (2026-11-08)

Batch chosen for throughput (user request: at least 30% of the batch verified). Alchemy's GameCube render-state
context (`igGamecubeVisualContext`, size 0x6E8) had 122 unmatched functions (23,952 code bytes) that use no shared
string pool, so they can be recovered as small synthetic units. The generator had failed on them for shape reasons;
hand-written code with typed structures matched most on the first or second try.

## Result

- 97 of 122 functions exact and linked from source (10,440 bytes, 43.6% of the batch), in 47 units under
  `src/Alchemy/src/igGfx/`, named by start address. Shared layout and helpers:
  `igGamecubeVisualContext.h` and `igGamecubeVisualContextMatrix.h`.
- Covered: lights (pool, enable list, colours, direction, position), material colours, clear colour and depth,
  frame swap and frame-rate hook, matrix stacks (push, pop, top, multiply, reserve), the 0x144 texture-like records
  (buffers, copy from the frame, format selection, binding, freeing with memory accounting), the 0x3F0 and 0x44C
  record pools, custom-state removal, per-slot byte settings.

## Layout established

- `GcPool<T>` (u16 count, free capacity, free count; u16 free list at 0x0C; records at 0x10) holds lights (0x4F0,
  0xA8-byte records), 0x144 records (0xA4), 0x3F0 records (0x2C) and the 0x44C lists. Its inline helpers
  `grow`, `take`, `freeIndex`, `reserveFree`, `isAllocated` reproduce the original code exactly.
- Dirty bits at 0x520 (`GC_DIRTY_*`): 0x100 lights, 0x200 material, 0x400 matrix mode 1, 0x40 modes 2..9,
  0x800 records. Matrix stacks: 0x458 (mode 0, refreshed through `fn_800F8118`), 0x45C (mode 1), 0x460 (modes 2..9).
- Frame statistics at `lbl_804F6180`; the 64-bit record-memory counter at `lbl_80563560` (symbol merged to 8 bytes).

## Compiler shapes that matched

- Vector getters load in reverse into temporaries (`float w = v.w, z = v.z, ...`) through a reference to a vector
  struct; a named record pointer prevents folding the member offset into the index.
- Pool growth matches only as an inline taking the growth count as a parameter (`grow(pool, 4)`); with a literal
  count the loop's offset register is initialised separately.
- Register colouring of list loops follows member-function inlines (`push`) or caller-local list variables
  (`removeAll` in `virtual434`); `mode - 2` held in a local reproduces the `subi/slwi/lwzx` index.
- Float literals the original reads at each use are `extern volatile const float` with a local where one block
  reuses it (`virtual1FC`, `virtual2C4`).
- `GXColor` passed by value must be a local of the calling function (`GC_SEND_COPY_CLEAR` macro), not an inline's
  result.
- `bool result = false; switch ... result = true;` for compare-tree predicates (`virtual404`).

- A local counted reference (`GcRef<T>`) with an inline destructor reproduces the original's release on every
  return (`virtual41C`); the compiler also emits a weak out-of-line destructor, which the linker strips (UNUSED in
  the map). `unit.sh` therefore exits 1 for `igGamecubeVisualContext800D9538` while the function is exact and the
  checksum passes, as with the Game RAM `Ref<>` copies.
- Loops over the custom lists start with a `count > 0` guard in the original (`virtual438`, `43C`).

## Checkpoint 4 (2026-11-08)

- `virtual214` (`800FF20C`): sets a 0x144 record's image for one level through a counted local reference. It
  matched once the table index was its own local (`int entry = fn_800FC2E4(...)`) and the memory-pool result
  used a variable declared at the top of the function.
- `virtual40C` (`800FBE7C`): one statistic of the last interval, mostly divided by the frames it took. The long
  long counters convert through `__cvt_sll_dbl` with no `frsp` before `fdivs`; no C expression gives that, so
  the unit declares the helper as returning `float`. `lbl_80563478` and `lbl_80563480` are 64-bit counters
  (`addc`/`adde` in `800E05A4`), merged into 8-byte symbols.
- Compiler findings:
  - MWCC builds a jump table only when a switch has at least four case ranges. A run of consecutive labels on
    the default body becomes one range, so `virtual2B0`'s original needs at least two separate labels there;
    which values they were is unknown (`case 2: case 4:` is a placeholder).
  - A pool built with `new` whose name is an `igStringRef` member (a class with a constructor) keeps the
    allocation result and `this` in separate registers (`cmplwi r3; beq; mr r30, r3`). A plain pointer, an
    inline `init`, or a `new` of a POD with a constructor gives `mr. rN, r3`. The same shape is in
    `fn_800EADD8` and `fn_800F6200`.
  - Objects the unit defines are addressed from one base register, with struct-copy pointers made from it
    (`addi r8, r31, 0xC74`). `virtual408` matched this only after its unit defined the whole `.bss` block
    `0x804F5870..0x804F6520` (13 objects, every size kept); externs and an overlay struct fold every field
    offset into the displacement.
  - The string pool container `lbl_80562140` is small data in the engine's units; `game/StringPool.h` declares it
    as an array, which is not, so the engine units use a local scalar declaration.

## Remaining (25 functions, 13,512 bytes) at checkpoint 3

- Readable NonMatching drafts (4,200 bytes):
  - `virtualB8` (372): the descriptor loads are scheduled above the free-count store;
  - `virtual13C` (368): light and count registers swapped;
  - `virtual2C0` (352): the compiler shares one `color != 0` between the two GX calls;
  - `virtual2C4` (244): `or` operand order of the packed colour;
  - `virtual118` (20): the original keeps the default-construct store before the assignment;
  - `virtual32C` (532): the original reloads the stack count after the empty test;
  - `virtual438` (432): index strength-reduced and an extra saved register;
  - `virtual43C` (536): self and loop registers permuted;
  - `virtual448` (296): the flag argument is loaded before the other arguments of slots 0x460/0x470;
  - `virtual7C` (356): list and count registers around the inline append;
  - `virtual28` (652): 99.2%, the arena flags' first bit goes through a temporary.
- Blocked in a synthetic unit (2,652 bytes): `virtual2E4`, `10C`, `70`, `310`, `11C`, `128` convert integers to
  float through the file's shared magic constants (`lbl_805668E0`, `lbl_805668E8`); `70` also owns function-local
  statics. They need one unit owning that `.sdata2` pool, as for the model controller's int-to-float cases.
- Not started (6,660 bytes): `vtableRead` (constructor and destructor chain), `428`, `24`, `2B0`, `214`, `80`
  (rodata `lbl_80414970`), `408`/`40C` (function-local statics in `.sbss`).
