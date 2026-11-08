// igGamecubeVisualContext: adding a 0x3F0 record (0x800EB108..0x800EB27C).
#include "igGamecubeVisualContext.h"

// The values a new 0x3F0 record is made from.
struct GcRecord3F0Desc {
    int unknown1C;
    int unknown00;
    int unknown04;
    int unknown08;
    int unknown10;
    int unknown0C;
    int unknown14;
    float unknown18;
};

extern "C" {
// Adds a record, makes it current and returns its index.
int igGamecubeVisualContext_virtualB8(GcVisualContext *self, const GcRecord3F0Desc *desc)
{
    GcPool<GcRecord3F0> *pool = self->unknown3F0;
    if (pool->freeCount == 0) grow(pool, 4);
    int index = take(pool);
    GcRecord3F0 *entry = &record(self->unknown3F0, index);
    entry->unknown1C = desc->unknown1C;
    entry->unknown00 = desc->unknown00;
    entry->unknown04 = desc->unknown04;
    entry->unknown08 = desc->unknown08;
    entry->unknown10 = desc->unknown10;
    entry->unknown0C = desc->unknown0C;
    entry->unknown14 = desc->unknown14;
    entry->unknown18 = desc->unknown18;
    entry->unknown24 = 0;
    entry->unknown28 = -1;
    self->unknown3F4 = index;
    return index;
}
}
