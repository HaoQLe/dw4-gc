// igGamecubeVisualContext: freeing a record of the pool at 0x44C with its list (0x800ECFA8..0x800ED150).
#include "igGamecubeVisualContext.h"

// An element (0x1C bytes) of a 0x44C record's list: an allocation and a counted reference.
struct GcRecord44CEntry {
    void *memory;
    unsigned char unknown04[0x10];
    Meta::igObject *object;   // 0x14
    unsigned char unknown18[0x4];
};

extern "C" {
void igGamecubeVisualContext_virtual304(GcVisualContext *self, int index)
{
    if (!isAllocated(self->unknown44C, index)) return;
    Meta::igDataList *list = self->unknown44C->data[index];
    for (int i = 0; i < list->_count; i++) {
        fn_80056378(record<GcRecord44CEntry>(list, i).memory);
        record<GcRecord44CEntry>(list, i).memory = 0;
        Meta::igObject *object = record<GcRecord44CEntry>(list, i).object;
        object->_refCount--;
        if ((object->_refCount & 0x7FFFFF) == 0) fn_80066E1C(object);
        record<GcRecord44CEntry>(list, i).object = 0;
    }
    list->_refCount--;
    if ((list->_refCount & 0x7FFFFF) == 0) fn_80066E1C(list);
    freeIndex(self->unknown44C, index);
}
}
