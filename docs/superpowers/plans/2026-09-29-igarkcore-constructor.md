# igArkCore constructor recovery plan

Goal: recover only `Gap::Core::igArkCore::igArkCore()` at `0x8003D234`,
196 bytes, using the pinned GDJEB2 toolchain and the existing source split.
The user supplied the scope and authorized implementation and publication.

1. Refresh the normal baseline and preserve its report; inspect original
   instructions, storage offsets, string initialization and relocations.
2. Extend the split by the constructor only, temporarily mark it NonMatching,
   and confirm the current source fails the constructor comparison. Recover
   the observed writes without semantic names for unknown storage.
3. Require exact object code/data and relocation comparison, all configured
   source compilation, and source-linked DOL SHA-1
   `e409a88a7379ed1a536f93b0a303a0ce7cd5d877` before marking Matching.
4. Record evidence, before/after byte totals and denominator changes; commit
   verified recovery, integrate into `work`, update the progress ledger and
   push only `origin/work`. Stop after this constructor.

Existing UART, lifecycle and version-check recovery must remain intact.
If recovery stays incomplete, preserve NonMatching status and document it.
