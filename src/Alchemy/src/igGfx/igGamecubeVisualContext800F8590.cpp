// igGamecubeVisualContext: loading a matrix into a stack's top (0x800F8590..0x800F87A4).
#include "igGamecubeVisualContextMatrix.h"

extern "C" {
// A function-local static in the original (flag and its initialisation guard).
extern bool lbl_80563509;
extern signed char lbl_8056350A;
void fn_800F8338(void);
}

struct GcMatrixStack : Meta::igDataList {
    // Appends a copy of a matrix.
    inline void append(const GcMatrix *matrix)
    {
        int count = _count;
        if (count < _capacity) _count = count + 1;
        else fn_80041660(this, count + 1, sizeof(GcMatrix));
        fn_80128CF4(&static_cast<GcMatrix *>(_data)[count], matrix);
    }
};

// Replaces the top matrix, or pushes the matrix when the stack is empty.
static inline void load(Meta::igDataList *stack, const GcMatrix *matrix)
{
    if (stack->_count == 0) static_cast<GcMatrixStack *>(stack)->append(matrix);
    else fn_80128CF4(top(stack), matrix);
}

extern "C" {
void igGamecubeVisualContext_virtual32C(GcVisualContext *self, int mode, const GcMatrix *matrix)
{
    if (!lbl_8056350A) {
        lbl_80563509 = true;
        lbl_8056350A = 1;
    }
    if (lbl_80563509) {
        fn_800F8338();
        lbl_80563509 = false;
    }
    switch (mode) {
    case 0:
        load(self->matrixStack0, matrix);
        self->dirty |= GC_DIRTY_400;
        break;
    case 1:
        load(self->matrixStack1, matrix);
        self->dirty |= GC_DIRTY_400;
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
        load(self->matrixStacks[mode - 2], matrix);
        self->dirty |= GC_DIRTY_40;
        break;
    }
}
}
