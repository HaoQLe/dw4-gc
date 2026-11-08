// beNDMWGameRam: Out-of-line copy of setStringAt (igStringRefList's element assignment) (0x80378124..0x803781CC), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
void fn_80378124(igStringRefList *list, int index, const igStringRef &value) { setStringAt(list, index, value); }
}
