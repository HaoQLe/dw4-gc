// igGamecubeVisualContext: selecting a record of the pool at 0x44C (0x800ED150..0x800ED1D8).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual308(GcVisualContext *self, int index)
{
    if (isAllocated(self->unknown44C, index)) {
        self->unknown450 = index;
        self->unknown454 = 0;
    }
}

bool igGamecubeVisualContext_virtual30C(GcVisualContext *self)
{
    self->unknown450 = -1;
    return self->unknown454 == 0;
}
}
