// igGamecubeVisualContext: lights: freeing a light (0x800F66B8..0x800F67A0).
#include "igGamecubeVisualContext.h"

extern "C" {
// Frees a light, disabling it first.
void igGamecubeVisualContext_virtual138(GcVisualContext *self, int index)
{
    GcLight *light = lightAt(self, index);
    if (!light) return;
    if (!light) return;   // tested twice in the original
    if (light->enabled) virtuals(self)->setLightEnabled(index, false);
    GcPool<GcLight> *pool = self->lights;
    if (index < pool->count && index >= 0) {
        if (pool->freeCount >= pool->freeCapacity) {
            GcMemoryPool *memory = fn_8005645C(pool);
            pool->freeCapacity += 8;
            pool->freeList = static_cast<unsigned short *>(memory->reallocate(pool->freeList, pool->freeCapacity * sizeof(unsigned short)));
        }
        pool->freeList[pool->freeCount] = index;
        pool->freeCount++;
    }
}
}
