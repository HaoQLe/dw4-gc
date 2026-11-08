// igGamecubeVisualContext: light and material accessors (0x800F6D20..0x800F6DC0).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual184(GcVisualContext *self, int index, float *value)
{
    GcLight *light = &self->lights->data[index];
    get(value, light->unknown54);
}

float igGamecubeVisualContext_virtual174(GcVisualContext *self, int index) { return lightAt(self, index)->unknown4C; }

void igGamecubeVisualContext_virtual1CC(GcVisualContext *self, const float *color)
{
    set(self->material->color48, color);
    self->dirty |= GC_DIRTY_LIGHTS;
}

void igGamecubeVisualContext_virtual1D0(GcVisualContext *self, float *color)
{
    GcMaterial *material = self->material;
    color[0] = material->color48.x;
    color[1] = material->color48.y;
    color[2] = material->color48.z;
    color[3] = material->color48.w;
}
}
