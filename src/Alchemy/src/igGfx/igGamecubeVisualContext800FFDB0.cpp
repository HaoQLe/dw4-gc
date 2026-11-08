// igGamecubeVisualContext: per-index byte settings at 0x340, 0x3A0..0x3E0 (0x800FFDB0..0x800FFE28).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual474(GcVisualContext *self, int i, int *b0, int *d0, int *a0, bool *c0)
{
    *a0 = self->unknown3A0[i];
    *b0 = self->unknown3B0[i];
    *d0 = self->unknown3D0[i];
    *c0 = self->unknown3C0[i] != 0;
}

void igGamecubeVisualContext_virtual478(GcVisualContext *self, int i, signed char value) { self->unknown340[i] = value; }
int igGamecubeVisualContext_virtual47C(GcVisualContext *self, int i) { return self->unknown340[i]; }
void igGamecubeVisualContext_virtual480(GcVisualContext *self, int i, signed char value) { self->unknown3E0[i] = value; }
int igGamecubeVisualContext_virtual484(GcVisualContext *self, int i) { return self->unknown3E0[i]; }
}
