// igGamecubeVisualContext: giving a 0x144 record an outside buffer (0x8010019C..0x80100234).
#include "igGamecubeVisualContext.h"

extern "C" {
// Returns whether the record's type (0x18) is 2.
bool igGamecubeVisualContext_virtual410(GcVisualContext *self, int i, void *buffer)
{
    GcRecord144 *entry = &record<GcRecord144>(self->unknown144, i);
    if (entry->unknown30) release(entry->unknown30);
    entry->unknown30 = 0;
    entry->buffer = buffer;
    entry->flags |= 0x400;
    return entry && entry->unknown18 == 2;
}
}
