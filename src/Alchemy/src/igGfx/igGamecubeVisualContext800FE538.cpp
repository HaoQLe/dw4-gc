// igGamecubeVisualContext: the four bytes at 0x9C of a 0x144 record (0x800FE538..0x800FE574).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual1F4(GcVisualContext *self, int i, int *a, int *b, int *c, int *d, bool *e)
{
    GcRecord144 *entry = &record(self->unknown144, i);
    *a = entry->unknown9C[0];
    *b = entry->unknown9C[1];
    *c = entry->unknown9C[2];
    *d = entry->unknown9C[3];
    *e = false;
}
}
