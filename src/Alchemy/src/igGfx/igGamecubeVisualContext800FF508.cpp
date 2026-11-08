// igGamecubeVisualContext: the 0x144 records (0x800FF508..0x800FF794): their buffer and settings.
#include "igGamecubeVisualContext.h"

extern "C" {
void *fn_800E97D8(GcVisualContext *self);   // the memory pool for the record buffers
unsigned int GXGetTexBufferSize(unsigned short width, unsigned short height, unsigned int format, unsigned char mipmap,
                                unsigned char maxLod);
}

static inline GcRecord144 &record144(GcVisualContext *self, int i) { return record<GcRecord144>(self->unknown144, i); }

extern "C" {
Meta::igObject *igGamecubeVisualContext_virtual21C(GcVisualContext *self, int i) { return record144(self, i).unknown30; }

// Gives record i a new buffer for its size and format, taking missing sizes from 0x3F0 record j, and links j to it.
int igGamecubeVisualContext_virtual218(GcVisualContext *self, int i, int j)
{
    GcRecord144 *entry = &record144(self, i);
    GcRecord3F0 *source = &record<GcRecord3F0>(self->unknown3F0, j);
    if (entry->width <= 0) entry->width = source->unknown00;
    if (entry->height <= 0) entry->height = source->unknown04;
    if (entry->buffer) fn_80056378(entry->buffer);
    unsigned int size = GXGetTexBufferSize(entry->width, entry->height, entry->format, 0, 0);
    entry->buffer = static_cast<GcMemoryPool *>(fn_800E97D8(self))->allocate(size, 0x20);
    if (entry->unknown30) release(entry->unknown30);
    entry->unknown30 = 0;
    source->unknown28 = i;
    source->unknown24 = entry;
    return 1;
}

void igGamecubeVisualContext_virtual228(GcVisualContext *self, int i, int value)
{
    GcRecord144 *entry = &record144(self, i);
    if (value == entry->unknown08) return;
    entry->unknown08 = value;
    record144(self, i).flags |= 0x800;
    self->dirty |= GC_DIRTY_800;
}

void igGamecubeVisualContext_virtual230(GcVisualContext *self, int i, int value)
{
    GcRecord144 *entry = &record144(self, i);
    if (value == entry->unknown0C) return;
    entry->unknown0C = value;
    record144(self, i).flags |= 0x800;
    self->dirty |= GC_DIRTY_800;
}

int igGamecubeVisualContext_virtual22C(GcVisualContext *self, int i) { return record144(self, i).unknown08; }
int igGamecubeVisualContext_virtual234(GcVisualContext *self, int i) { return record144(self, i).unknown0C; }

void igGamecubeVisualContext_virtual220(GcVisualContext *self, int i, int a, int b)
{
    GcRecord144 *entry = &record144(self, i);
    if (a != entry->unknown10) {
        entry->unknown10 = a;
        record144(self, i).flags |= 0x800;
    }
    entry = &record144(self, i);
    if (b != entry->unknown14) {
        entry->unknown14 = b;
        record144(self, i).flags |= 0x800;
    }
}

void igGamecubeVisualContext_virtual224(GcVisualContext *self, int i, int *a, int *b)
{
    *a = record144(self, i).unknown10;
    *b = record144(self, i).unknown14;
}
}
