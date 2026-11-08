// igGamecubeVisualContext: matrix stack pop (0x800F822C..0x800F8338).
#include "igGamecubeVisualContextMatrix.h"

// Removes the top matrix, returning it.
static inline GcMatrix pop(Meta::igDataList *stack)
{
    stack->_count--;
    return static_cast<GcMatrix *>(stack->_data)[stack->_count];
}

extern "C" {
void igGamecubeVisualContext_virtual328(GcVisualContext *self, int mode)
{
    switch (mode) {
    case 0:
        pop(self->matrixStack0);
        fn_800F8118(top(self->matrixStack0));
        break;
    case 1:
        pop(self->matrixStack1);
        self->dirty |= GC_DIRTY_400;
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
        pop(self->matrixStacks[mode - 2]);
        self->dirty |= GC_DIRTY_40;
        break;
    }
}
}
