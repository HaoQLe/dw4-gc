// igGamecubeVisualContext: lights: state, colours, direction and position (0x800F6910..0x800F6B5C).
#include "igGamecubeVisualContext.h"

extern "C" {
bool igGamecubeVisualContext_virtual140(GcVisualContext *self, int index) { return lightAt(self, index)->enabled; }
int igGamecubeVisualContext_virtual144(GcVisualContext *self, int index) { return lightAt(self, index)->type; }

void igGamecubeVisualContext_virtual148(GcVisualContext *self, int index, const float *color)
{
    GcLight *light = lightAt(self, index);
    if (!light) return;
    set(light->color10, color);
    self->dirty |= GC_DIRTY_LIGHTS;
}

void igGamecubeVisualContext_virtual158(GcVisualContext *self, int index, const float *color)
{
    GcLight *light = lightAt(self, index);
    if (!light) return;
    set(light->color20, color);
    self->dirty |= GC_DIRTY_LIGHTS;
}

void igGamecubeVisualContext_virtual150(GcVisualContext *self, int index, const float *color)
{
    GcLight *light = lightAt(self, index);
    if (!light) return;
    set(light->color00, color);
    self->dirty |= GC_DIRTY_LIGHTS;
}

// Sets a light's direction; a directional light keeps it negated.
void igGamecubeVisualContext_virtual168(GcVisualContext *self, int index, const float *direction)
{
    GcLight *light = lightAt(self, index);
    if (!light) return;
    if (light->type == 0) {
        light->direction.x = -direction[0];
        light->direction.y = -direction[1];
        light->direction.z = -direction[2];
        virtuals(self)->slot340(1, light->unknown64);
    } else if (light->type == 2) {
        set(light->direction, direction);
        virtuals(self)->slot340(1, light->unknown64);
    }
    self->dirty |= GC_DIRTY_LIGHTS;
}

void igGamecubeVisualContext_virtual160(GcVisualContext *self, int index, const float *position)
{
    GcLight *light = lightAt(self, index);
    if (!light) return;
    set(light->position, position);
    if (light->type != 0) virtuals(self)->slot340(1, light->unknown64);
    self->dirty |= GC_DIRTY_LIGHTS;
}
}
