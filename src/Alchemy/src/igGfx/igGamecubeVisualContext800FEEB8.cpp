// igGamecubeVisualContext: binding a 0x144 record to a slot (0x800FEEB8..0x800FEFA4).
#include "igGamecubeVisualContext.h"

extern "C" {
extern volatile const float lbl_805668C8;   // 1.0f, a literal in the original: read where it is used
void fn_800FE744(GcVisualContext *self, GcRecord144 *entry);   // sends a record's changed settings

// Binds record i (or none, -1) to a slot, counting bindings by kind.
int igGamecubeVisualContext_virtual1FC(GcVisualContext *self, int i, int slot)
{
    if (i == -1) {
        self->unknown148[slot] = i;
    } else {
        GcRecord144 *entry = &record<GcRecord144>(self->unknown144, i);
        if (entry->flags) fn_800FE744(self, entry);
        float one = lbl_805668C8;
        lbl_804F6180.unknown1C += one;
        if (entry->unknown00 == 0x22) lbl_804F6180.unknown38 += one;
        if (entry->unknown00 == 0xD || entry->unknown00 == 0xE) lbl_804F6180.unknown34 += lbl_805668C8;
        self->unknown148[slot] = i;
    }
    self->dirty |= GC_DIRTY_800;
    return 1;
}
}
