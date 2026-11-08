// beNDMWGameRam: Out-of-line copy of an int list's element address (0x8037858C..0x8037859C), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
int *fn_8037858C(igIntList *list, int index) { return &intAt(list, index); }
}
