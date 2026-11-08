// igGamecubeVisualContext: the clear depth (0x800EC0F4..0x800EC160).
#include "igGamecubeVisualContext.h"

extern "C" {

void igGamecubeVisualContext_virtual2D4(GcVisualContext *self, float depth)
{
    self->clearDepth = depth;
    GC_SEND_COPY_CLEAR(self);
}

float igGamecubeVisualContext_virtual2D8(GcVisualContext *self) { return self->clearDepth; }
}
