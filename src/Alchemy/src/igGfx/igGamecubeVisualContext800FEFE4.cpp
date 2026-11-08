// igGamecubeVisualContext: element of the pointers at 0x148 (0x800FEFE4..0x800FEFF4).
#include "igGamecubeVisualContext.h"

extern "C" {
void *igGamecubeVisualContext_virtual204(GcVisualContext *self, int i) { return self->unknown148[i]; }
}
