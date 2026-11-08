// igGamecubeVisualContext: per-index mode at 0x1BC (0x800FF7CC..0x800FF85C).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual250(GcVisualContext *self, int i, int mode)
{
    self->unknown1BC[i] = mode;
    switch (mode) {
    case 0:
        virtuals(self)->slot448(i, 0);
        break;
    case 1:
        virtuals(self)->slot448(i, 1);
        break;
    case 2:
        virtuals(self)->slot448(i, 4);
        break;
    }
}
}
