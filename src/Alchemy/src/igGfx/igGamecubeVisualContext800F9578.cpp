// igGamecubeVisualContext: setter of the colour at 0x4D8 (0x800F9578..0x800F95A8).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual3DC(GcVisualContext *self, const float *color)
{
    set(self->unknown4D8, color);
    self->dirty |= GC_DIRTY_08;
}
}
