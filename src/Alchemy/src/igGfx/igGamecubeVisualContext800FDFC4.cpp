// igGamecubeVisualContext: per-index flag at 0x1A5 (0x800FDFC4..0x800FE004).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual1D4(GcVisualContext *self, int i, bool value)
{
    if (self->unknown1A5[i] == value) return;
    self->unknown1A5[i] = value;
    self->dirty |= GC_DIRTY_800;
    self->dirty |= GC_DIRTY_40;
}

bool igGamecubeVisualContext_virtual1D8(GcVisualContext *self, int i) { return self->unknown1A5[i]; }
}
