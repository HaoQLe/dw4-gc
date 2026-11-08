// igGamecubeVisualContext: the clear colour, packed (0x800EC01C..0x800EC0A8).
#include "igGamecubeVisualContext.h"

extern "C" {
void fn_8012E4F8(GcVec4 *color, int format, unsigned int packed);   // unpacks a colour (format 1: red low)

void igGamecubeVisualContext_virtual2C8(GcVisualContext *self, unsigned int packed)
{
    fn_8012E4F8(&self->clearColorF, 1, packed);
    self->clearColor = packed;
    GC_SEND_COPY_CLEAR(self);
}
}
