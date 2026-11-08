// igGamecubeVisualContext: operations on the top matrix of a stack (0x800F87A4..0x800F8B38).
#include "igGamecubeVisualContextMatrix.h"

extern "C" {
void fn_8021B044(Meta::igDataList *stack, const GcMatrix *matrix);
void fn_8021B138(Meta::igDataList *stack, const GcMatrix *matrix);
void fn_8021B230(Meta::igDataList *stack, const GcMatrix *matrix);
void fn_8021B264(Meta::igDataList *stack, const GcMatrix *matrix);
}

#define MATRIX_STACK_OP(function)                                       \
    switch (mode) {                                                     \
    case 0:                                                             \
        function(self->matrixStack0, matrix);                          \
        fn_800F8118(top(self->matrixStack0));                           \
        break;                                                          \
    case 1:                                                             \
        function(self->matrixStack1, matrix);                          \
        self->dirty |= GC_DIRTY_400;                                    \
        break;                                                          \
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:     \
        function(self->matrixStacks[mode - 2], matrix);                \
        self->dirty |= GC_DIRTY_40;                                     \
        break;                                                          \
    }

extern "C" {
void igGamecubeVisualContext_virtual330(GcVisualContext *self, int mode, const GcMatrix *matrix) { MATRIX_STACK_OP(fn_8021B044) }
void igGamecubeVisualContext_virtual334(GcVisualContext *self, int mode, const GcMatrix *matrix) { MATRIX_STACK_OP(fn_8021B138) }

// Copies the top matrix of a stack.
void igGamecubeVisualContext_virtual340(GcVisualContext *self, int mode, GcMatrix *matrix)
{
    switch (mode) {
    case 0:
        fn_80128CF4(matrix, top(self->matrixStack0));
        break;
    case 1:
        fn_80128CF4(matrix, top(self->matrixStack1));
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
        fn_80128CF4(matrix, top(self->matrixStacks[mode - 2]));
        break;
    }
}

void igGamecubeVisualContext_virtual338(GcVisualContext *self, int mode, const GcMatrix *matrix) { MATRIX_STACK_OP(fn_8021B230) }
void igGamecubeVisualContext_virtual33C(GcVisualContext *self, int mode, const GcMatrix *matrix) { MATRIX_STACK_OP(fn_8021B264) }
}
