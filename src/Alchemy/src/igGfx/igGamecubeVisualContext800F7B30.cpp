// igGamecubeVisualContext: material colours (0x800F7B30..0x800F7CD0). The setters read the material
// pointer again for every component.
#include "igGamecubeVisualContext.h"

#define SET_MATERIAL_COLOR(member, src)        \
    self->material->member.x = (src)[0];       \
    self->material->member.y = (src)[1];       \
    self->material->member.z = (src)[2];       \
    self->material->member.w = (src)[3]

extern "C" {
void igGamecubeVisualContext_virtual198(GcVisualContext *self, const float *color)
{
    SET_MATERIAL_COLOR(color04, color);
    self->dirty |= GC_DIRTY_MATERIAL;
}

void igGamecubeVisualContext_virtual19C(GcVisualContext *self, float *color) { get(color, self->material->color04); }

void igGamecubeVisualContext_virtual1A8(GcVisualContext *self, const float *color)
{
    SET_MATERIAL_COLOR(color14, color);
    self->dirty |= GC_DIRTY_MATERIAL;
}

void igGamecubeVisualContext_virtual1AC(GcVisualContext *self, float *color) { get(color, self->material->color14); }

void igGamecubeVisualContext_virtual1A0(GcVisualContext *self, const float *color)
{
    SET_MATERIAL_COLOR(color24, color);
    self->dirty |= GC_DIRTY_MATERIAL;
}

void igGamecubeVisualContext_virtual1A4(GcVisualContext *self, float *color) { get(color, self->material->color24); }

void igGamecubeVisualContext_virtual1B0(GcVisualContext *self, const float *color)
{
    SET_MATERIAL_COLOR(color34, color);
    self->dirty |= GC_DIRTY_MATERIAL;
}

void igGamecubeVisualContext_virtual1B4(GcVisualContext *self, float *color) { get(color, self->material->color34); }
}
