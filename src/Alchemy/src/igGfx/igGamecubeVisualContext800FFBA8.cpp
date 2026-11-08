// igGamecubeVisualContext: per-index byte setting at 0x350 (0x800FFBA8..0x800FFBD0).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual458(GcVisualContext *self, int i, signed char value)
{
    self->unknown350[i] = value;
    self->dirty |= GC_DIRTY_40;
}

int igGamecubeVisualContext_virtual45C(GcVisualContext *self, int i) { return self->unknown350[i]; }
}
