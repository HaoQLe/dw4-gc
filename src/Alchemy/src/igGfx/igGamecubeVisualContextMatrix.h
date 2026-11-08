// igGamecubeVisualContext: the matrix stacks. Mode 0 refreshes the hardware matrix from its top
// (fn_800F8118); mode 1 marks GC_DIRTY_400, and modes 2..9 GC_DIRTY_40.
#ifndef IGGFX_IGGAMECUBEVISUALCONTEXTMATRIX_H
#define IGGFX_IGGAMECUBEVISUALCONTEXTMATRIX_H
#include "igGamecubeVisualContext.h"

extern "C" void fn_80128CF4(void *dst, const void *src);   // copies a 4x4 matrix
extern "C" void fn_801285A0(void *matrix);                  // makes a 4x4 matrix the identity

// A 4x4 float matrix, copied out of line.
struct GcMatrix {
    float m[16];
    inline GcMatrix() { fn_801285A0(this); }
    inline GcMatrix(const GcMatrix &other) { fn_80128CF4(this, &other); }
    inline void makeIdentity() { fn_801285A0(this); }
};

extern "C" void fn_800F8118(GcMatrix *matrix);   // loads the mode-0 matrix into the hardware

static inline GcMatrix *top(Meta::igDataList *stack) { return &static_cast<GcMatrix *>(stack->_data)[stack->_count - 1]; }

#endif
