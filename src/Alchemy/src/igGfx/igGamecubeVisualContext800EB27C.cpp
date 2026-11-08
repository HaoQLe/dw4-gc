// igGamecubeVisualContext: selecting the current 0x3F0 record, and a record's first two values
// (0x800EB27C..0x800EB344).
#include "igGamecubeVisualContext.h"

extern "C" {
// Makes record i current; leaving a type-2 record for another type sends the stored viewport again.
void igGamecubeVisualContext_virtualC0(GcVisualContext *self, int i)
{
    GcRecord3F0 *next = &record<GcRecord3F0>(self->unknown3F0, i);
    GcRecord3F0 *current = &record<GcRecord3F0>(self->unknown3F0, self->unknown3F4);
    if (i == self->unknown3F4) return;
    if (next->unknown1C != 2 && current->unknown1C == 2)
        virtuals(self)->setViewport(self->viewportX, self->viewportY, self->viewportWidth, self->viewportHeight, self->viewportNear,
                                    self->viewportFar);
    self->unknown3F4 = i;
}

void igGamecubeVisualContext_virtualD4(GcVisualContext *self, int i, int *a, int *b)
{
    *a = record<GcRecord3F0>(self->unknown3F0, i).unknown00;
    *b = record<GcRecord3F0>(self->unknown3F0, i).unknown04;
}
}
