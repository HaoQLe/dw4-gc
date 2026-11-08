// igGamecubeVisualContext: matrix stack depth and push (0x800F7DF8..0x800F805C).
#include "igGamecubeVisualContextMatrix.h"

extern "C" void fn_8004155C(void *list, int capacity, int elementSize);   // sets a list's capacity

static inline void reserve(Meta::igDataList *stack, int depth)
{
    if (depth >= stack->_count) fn_8004155C(stack, depth, sizeof(GcMatrix));
}

// Pushes a copy of the top matrix.
struct GcMatrixStack : Meta::igDataList {
    inline void push()
    {
        int count = _count;
        if (count == 0) return;
        if (count < _capacity) _count = count + 1;
        else fn_80041660(this, count + 1, sizeof(GcMatrix));
        GcMatrix *data = static_cast<GcMatrix *>(_data);
        fn_80128CF4(&data[count], &data[count - 1]);
    }
};
static inline void push(Meta::igDataList *stack) { static_cast<GcMatrixStack *>(stack)->push(); }

extern "C" {
void igGamecubeVisualContext_virtual31C(GcVisualContext *self, int mode, int depth)
{
    switch (mode) {
    case 0:
        reserve(self->matrixStack0, depth);
        break;
    case 1:
        reserve(self->matrixStack1, depth);
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
        reserve(self->matrixStacks[mode - 2], depth);
        break;
    }
}

int igGamecubeVisualContext_virtual320(GcVisualContext *self, int mode)
{
    switch (mode) {
    case 0:
        return self->matrixStack0->_capacity;
    case 1:
        return self->matrixStack1->_capacity;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
        return self->matrixStacks[mode - 2]->_capacity;
    }
    return 0;
}

void igGamecubeVisualContext_virtual324(GcVisualContext *self, int mode)
{
    switch (mode) {
    case 0:
        push(self->matrixStack0);
        break;
    case 1:
        push(self->matrixStack1);
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
        {
            int index = mode - 2;
            push(self->matrixStacks[index]);
        }
        break;
    }
}
}
