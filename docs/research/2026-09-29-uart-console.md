# UART console recovery handoff

Completed 2026-09-29 against upstream `41c27d8756e298558ca9be61c1c89afeee336c01`.

- Task/development branch: `task/uart-console`; functional commit `bd5b375b50123665d6e1ebab796afb6a61537426`, integrated into `work`.
- Delivery branch: `contrib/uart-console`; upstream-only commit `c6140ac`.
- Upstream PR: [ivanno4317/dw4-gc#3](https://github.com/ivanno4317/dw4-gc/pull/3), open at handoff, with no prerequisite PRs. Recheck status when relevant; local work can continue immediately.

Recovered `fn_8009F35C` as a return-zero stub without assigning an unverified semantic name. Making `__init_uart_console` static inline removes an extra standalone function emitted by the compiler. The UART runtime unit is now marked `Matching` and linked from source. Only that source file and its matching status are in the upstream PR.

The pre-change object check failed: 216/224 code bytes matched, with the stub missing. The final report marks all three functions, 224 code bytes and 8 data bytes complete. Strict objdiff (`functionRelocDiffs=data_value`) reports 100% matching code/BSS. `ninja all_source progress build/GDJEB2/report.json` passed on both the development and delivery branches, preserving DOL SHA-1 `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Independent review found no issues. The existing `FILE_POS.C` case warning remains unchanged.

Host baseline is also established: `/opt/homebrew/bin/python3` configures the project and the pinned wibo/compiler tools run on this Mac. The supplied CISO identifies as GDJEB2 with disc-header revision 0; its extracted DOL matches the pinned checksum despite the README's revision label. Original inputs and generated artifacts remain ignored.

Next candidate from the starting plan: inspect the existing Alchemy `igGap.cpp` mismatches, retaining evidence-backed names/types and the full-DOL checksum gate. No Alchemy implementation has been started.
