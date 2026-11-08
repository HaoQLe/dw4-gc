// igGamecubeVisualContext: clearing the frame (0x800EBDC8..0x800EBF28): mask bit 0 clears colour, bit 1 depth,
// by copying the embedded frame buffer to a scratch buffer with clearing on. Skipped when the same values
// were already cleared this frame.
#include "igGamecubeVisualContext.h"

extern "C" {
extern unsigned char lbl_804F5C60[0x520];   // scratch copy target (32-byte aligned inside)
void GXSetDispCopyDst(unsigned short width, unsigned short height);
void GXSetColorUpdate(unsigned char enable);
void GXSetAlphaUpdate(unsigned char enable);
void GXSetZMode(unsigned char compareEnable, int func, unsigned char updateEnable);
void GXCopyDisp(void *dest, unsigned char clear);

void igGamecubeVisualContext_virtual2C0(GcVisualContext *self, unsigned int mask)
{
    if ((mask & self->unknown418) == mask && ((mask & 1) ? self->clearColor == self->clearColorSent : true)
        && ((mask & 2) ? self->clearDepth == self->clearDepthSent : true))
        return;
    lbl_804F6180.clears++;
    self->unknown418 |= mask;
    unsigned int color = mask & 1;
    if (color) self->clearColorSent = self->clearColor;
    unsigned int depth = mask & 2;
    if (depth) self->clearDepthSent = self->clearDepth;
    GXSetDispCopyDst(0, 0);
    GXSetColorUpdate(color != 0);
    GXSetAlphaUpdate(color != 0);
    GXSetZMode(1, 7, depth != 0);
    GXCopyDisp(reinterpret_cast<void *>((reinterpret_cast<unsigned int>(lbl_804F5C60) + 31) & ~31), 1);
    GXSetDispCopyDst(self->copyWidth, self->copyHeight);
    self->dirty |= GC_DIRTY_01;
    self->dirty |= GC_DIRTY_02;
}
}
