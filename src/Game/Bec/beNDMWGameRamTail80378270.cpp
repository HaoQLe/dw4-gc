// beNDMWGameRam: Out-of-line copy of an object list's element read (0x80378270..0x80378280), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
igObject *fn_80378270(igDataList *list, int index) { return item<igObject>(list, index); }
}
