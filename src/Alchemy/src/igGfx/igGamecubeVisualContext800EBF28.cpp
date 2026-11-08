// igGamecubeVisualContext: the clear colour, as floats (0x800EBF28..0x800EC01C).
#include "igGamecubeVisualContext.h"

extern "C" {
extern volatile const float lbl_80566940;   // 255.0f, a literal in the original: read again for each use
}

// A colour component (0..1) as a byte.
static inline unsigned int toByte(float value) { return (unsigned int)(lbl_80566940 * value) & 0xFF; }

extern "C" {

void igGamecubeVisualContext_virtual2C4(GcVisualContext *self, const float *color)
{
    set(self->clearColorF, color);
    unsigned int packed = toByte(self->clearColorF.y) << 8;
    packed |= toByte(self->clearColorF.x);
    packed |= toByte(self->clearColorF.z) << 16;
    packed |= toByte(self->clearColorF.w) << 24;
    self->clearColor = packed;
    GC_SEND_COPY_CLEAR(self);
}
}
