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
    if (pool->freeCount == 0) {
        pool->data = static_cast<GcLight *>(fn_80056358(pool->data, (pool->count + 4) * sizeof(GcLight), 16));
        memset(&pool->data[pool->count], 0, 4 * sizeof(GcLight));
        reserveFree(pool, 4);
        for (int i = 0; i < 4; i++) pool->freeList[i] = pool->count + i;
        pool->freeCount = 4;
        pool->count += 4;
    }
    int index = pool->freeList[pool->freeCount - 1];
    pool->freeCount--;
    GcLight *light = lightAt(self, index);
    fn_800F6168(light);
    light->type = type;
    return index;
}
}
