// igGamecubeVisualContext: per-index byte settings at 0x300..0x330 (0x800FFCB8..0x800FFCF8).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual464(GcVisualContext *self, int i, int *b0, int *d0, int *a0, bool *c0)
{
    *a0 = self->unknown300[i];
    *b0 = self->unknown310[i];
    *d0 = self->unknown330[i];
    *c0 = self->unknown320[i] != 0;
}
}
