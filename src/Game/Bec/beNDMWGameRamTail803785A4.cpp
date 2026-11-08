// beNDMWGameRam: Out-of-line copy of igResult's inequality (0x803785A4..0x803785C0), emitted after the message handler.
#include "beNDMWGameRam.h"

extern "C" {
bool fn_803785A4(const igResult &a, const igResult &b) { return a.value != b.value; }
}
