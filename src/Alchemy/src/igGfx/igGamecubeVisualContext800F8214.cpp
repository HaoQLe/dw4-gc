// igGamecubeVisualContext: per-index byte at 0x50B (0x800F8214..0x800F822C).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual344(GcVisualContext *self, int i, unsigned char value) { self->unknown50B[i] = value; }
unsigned char igGamecubeVisualContext_virtual348(GcVisualContext *self, int i) { return self->unknown50B[i]; }
}
