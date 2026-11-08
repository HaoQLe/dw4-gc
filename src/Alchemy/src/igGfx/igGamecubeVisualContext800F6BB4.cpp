// igGamecubeVisualContext: more light accessors (0x800F6BB4..0x800F6D18).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual180(GcVisualContext *self, int index, const float *value)
{
    GcLight *light = lightAt(self, index);
    if (!light) return;
    set(light->unknown54, value);
    self->dirty |= GC_DIRTY_LIGHTS;
}

void igGamecubeVisualContext_virtual14C(GcVisualContext *self, int index, float *color)
{
    GcLight *light = lightAt(self, index);
    get(color, light->color10);
}
void igGamecubeVisualContext_virtual154(GcVisualContext *self, int index, float *color)
{
    GcLight *light = lightAt(self, index);
    get(color, light->color00);
}
void igGamecubeVisualContext_virtual15C(GcVisualContext *self, int index, float *color)
{
    GcLight *light = lightAt(self, index);
    get(color, light->color20);
}

void igGamecubeVisualContext_virtual164(GcVisualContext *self, int index, float *position)
{
    GcLight *light = lightAt(self, index);
    get(position, light->position);
}

// A light's direction as given (undoing the negation for a directional light).
void igGamecubeVisualContext_virtual16C(GcVisualContext *self, int index, float *direction)
{
    GcLight *light = lightAt(self, index);
    if (light->type == 0) {
        GcVec3 negated;
        negated.x = -light->direction.x;
        negated.y = -light->direction.y;
        negated.z = -light->direction.z;
        get(direction, negated);
    } else {
        get(direction, light->direction);
    }
}
}
