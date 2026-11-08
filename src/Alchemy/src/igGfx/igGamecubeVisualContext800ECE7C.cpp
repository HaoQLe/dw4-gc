// igGamecubeVisualContext: allocating a record of the pool at 0x44C (0x800ECE7C..0x800ECFA8).
#include "igGamecubeVisualContext.h"

extern "C" {
void *fn_800E97E0(GcVisualContext *self);              // the memory pool for the 0x44C lists
Meta::igDataList *igDataList_create(void *memoryPool);

// Allocates a record holding a new list, and returns its index.
int igGamecubeVisualContext_virtual300(GcVisualContext *self)
{
    GcPool<Meta::igDataList *> *pool = self->unknown44C;
    if (pool->freeCount == 0) grow(pool, 4);
    int index = take(pool);
    self->unknown44C->data[index] = igDataList_create(fn_800E97E0(self));
    return index;
}
}
