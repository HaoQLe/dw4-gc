// igGamecubeVisualContext: lights: allocating a light (0x800F6588..0x800F66B8).
#include "igGamecubeVisualContext.h"

extern "C" {
void fn_800F6168(GcLight *light);           // resets a light
}

extern "C" {
// Allocates a light of the given type and returns its index, growing the pool by four when no record is free.
int igGamecubeVisualContext_virtual134(GcVisualContext *self, int type)
{
    GcPool<GcLight> *pool = self->lights;
    if (pool->freeCount == 0) grow(pool, 4);
    int index = take(pool);
    GcLight *light = lightAt(self, index);
    fn_800F6168(light);
    light->type = type;
    return index;
}
}
