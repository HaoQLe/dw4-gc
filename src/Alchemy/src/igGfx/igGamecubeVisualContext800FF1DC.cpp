// igGamecubeVisualContext: slot 0x214 with a zero third argument (0x800FF1DC..0x800FF20C).
#include "igGamecubeVisualContext.h"

extern "C" {
int igGamecubeVisualContext_virtual210(GcVisualContext *self, int a, int b) { return virtuals(self)->slot214(a, b, 0); }
}
