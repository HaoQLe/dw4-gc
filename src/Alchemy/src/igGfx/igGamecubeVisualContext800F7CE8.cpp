// igGamecubeVisualContext: material value and whole-material setter (0x800F7CE8..0x800F7DCC).
#include "igGamecubeVisualContext.h"

#define SET_MATERIAL_COLOR(member, src)        \
    self->material->member.x = (src)[0];       \
    self->material->member.y = (src)[1];       \
    self->material->member.z = (src)[2];       \
    self->material->member.w = (src)[3]

extern "C" {
float igGamecubeVisualContext_virtual18C(GcVisualContext *self) { return self->material->unknown44; }

void igGamecubeVisualContext_virtual1C0(GcVisualContext *self, const float *color14, const float *color04, const float *color34,
                                        const float *color24, float value44)
{
    SET_MATERIAL_COLOR(color04, color04);
    SET_MATERIAL_COLOR(color14, color14);
    SET_MATERIAL_COLOR(color24, color24);
    SET_MATERIAL_COLOR(color34, color34);
    self->material->unknown44 = value44;
    self->dirty |= GC_DIRTY_MATERIAL;
}
}
