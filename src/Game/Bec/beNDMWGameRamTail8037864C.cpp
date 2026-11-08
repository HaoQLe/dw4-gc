// beNDMWGameRam: Out-of-line copy of an object list's element read (0x8037864C..0x8037865C), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
igObject *fn_8037864C(igDataList *list, int index) { return item<igObject>(list, index); }
}
