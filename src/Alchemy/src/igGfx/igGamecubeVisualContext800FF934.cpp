// igGamecubeVisualContext: applying a preset to index i (0x800FF934..0x800FFA5C).
#include "igGamecubeVisualContextPresets.h"

extern "C" {
void igGamecubeVisualContext_virtual448(GcVisualContext *self, int i, int preset)
{
    if (preset < 0 || (unsigned int)preset > 14) return;
    GcPreset *p = &lbl_80414A88[preset];
    virtuals(self)->slot450(i, p->unknown00, p->unknown04, p->unknown08, p->unknown0C);
    virtuals(self)->slot468(i, p->unknown20, p->unknown24, p->unknown28, p->unknown2C);
    virtuals(self)->slot460(i, p->unknown10, p->unknown14, p->unknown1C, p->unknown40);
    virtuals(self)->slot470(i, p->unknown30, p->unknown34, p->unknown3C, p->unknown41);
    virtuals(self)->slot478(i, p->unknown18);
    virtuals(self)->slot480(i, p->unknown38);
}
}
