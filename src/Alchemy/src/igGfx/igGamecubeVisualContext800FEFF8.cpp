// igGamecubeVisualContext: freeing a 0x144 record (0x800FEFF8..0x800FF1DC), counting its memory out.
#include "igGamecubeVisualContext.h"

extern "C" {
extern long long lbl_80563560;            // bytes held by records
extern int lbl_80490934[];                // bits per texel by kind (kinds below 0x10000)
extern int lbl_80490978[];                // the same from kind 0x10000
void fn_800FC3EC(GcRecord144 *entry);

void igGamecubeVisualContext_virtual20C(GcVisualContext *self, int i)
{
    GcRecord144 *entry = &record(self->unknown144, i);
    if (entry->unknown00 < 0x10000)
        lbl_80563560 += -(int)((unsigned int)(lbl_80490934[entry->unknown00] * (entry->width * entry->height)) >> 3);
    if (entry->unknown00 >= 0x10000)
        lbl_80563560 += -(int)((unsigned int)(lbl_80490978[entry->unknown00 - 0x10000] * (entry->width * entry->height)) >> 1);
    if (entry->unknown8C) {
        if (entry->unknown90) fn_80056378(entry->unknown90);
        if (entry->ownsUnknown8C) {
            Meta::igObject *object = entry->unknown8C;
            object->_refCount--;
            if ((object->_refCount & 0x7FFFFF) == 0) fn_80066E1C(object);
            entry->unknown8C = 0;
            entry->ownsUnknown8C = false;
        }
    }
    virtuals(self)->slot208(i);
    entry->unknown48 = -1;
    fn_800FC3EC(entry);
    freeIndex(self->unknown144, i);
}
}
