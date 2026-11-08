// igGamecubeVisualContext: the preset index i's settings equal (0x800FFA5C..0x800FFBA8).
#include "igGamecubeVisualContextPresets.h"

extern "C" {
// Returns the first preset whose values equal index i's settings (1 when none does).
int igGamecubeVisualContext_virtual44C(GcVisualContext *self, int i)
{
    for (int n = 0; n < 14; n++) {
        GcPreset *p = &lbl_80414A88[n];
        if (self->unknown2C0[i] == p->unknown00 && self->unknown2D0[i] == p->unknown04 && self->unknown2E0[i] == p->unknown08
            && self->unknown2F0[i] == p->unknown0C && self->unknown360[i] == p->unknown20 && self->unknown370[i] == p->unknown24
            && self->unknown380[i] == p->unknown28 && self->unknown390[i] == p->unknown2C && self->unknown330[i] == p->unknown14
            && self->unknown310[i] == p->unknown10 && self->unknown300[i] == p->unknown1C && self->unknown3D0[i] == p->unknown34
            && self->unknown3B0[i] == p->unknown30 && self->unknown3A0[i] == p->unknown3C)
            return n;
    }
    return 1;
}
}
