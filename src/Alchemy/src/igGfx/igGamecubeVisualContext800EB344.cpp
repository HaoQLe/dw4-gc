// igGamecubeVisualContext: copying part of the frame into a 0x144 record's buffer (0x800EB344..0x800EB41C).
#include "igGamecubeVisualContext.h"

extern "C" {
void fn_800FE744(GcVisualContext *self, GcRecord144 *entry);   // sends a record's changed settings
void GXSetTexCopySrc(unsigned short left, unsigned short top, unsigned short width, unsigned short height);
void GXSetTexCopyDst(unsigned short width, unsigned short height, int format, unsigned char mipmap);
void GXCopyTex(void *dest, unsigned char clear);
void GXPixModeSync(void);
void GXInvalidateTexAll(void);

// The copy is box-filtered when the record is half the source size in both directions.
int igGamecubeVisualContext_virtual2AC(GcVisualContext *self, int unused, int i, int left, int top, int width, int height)
{
    GcRecord144 *entry = &record<GcRecord144>(self->unknown144, i);
    if (entry->flags) fn_800FE744(self, entry);
    bool half = false;
    if (width / 2 == entry->width && height / 2 == entry->height) half = true;
    GXSetTexCopySrc(left, top, width, height);
    GXSetTexCopyDst(entry->width, entry->height, entry->format, half);
    GXCopyTex(entry->buffer, 0);
    GXPixModeSync();
    GXInvalidateTexAll();
    return 1;
}
}
