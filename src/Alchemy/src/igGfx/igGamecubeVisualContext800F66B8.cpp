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
    freeIndex(self->lights, index);
}
}
