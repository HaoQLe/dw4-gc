// igGamecubeVisualContext: registering the context with the Alchemy core (0x800EA908..0x800EAA6C).
#include "igGamecubeVisualContext.h"

// The parts of Gap::Core::igArkCore this uses.
struct GcArkCore {
    unsigned char unknown00[0x38];
    void *unknown38;   // looked up with name lbl_8049003C
    void *unknown3C;   // receives the context list
};

// A reference adopted from a create function (its count is not raised), released at the end of its scope.
template <class T> struct GcAdoptedRef {
    T *object;
    inline GcAdoptedRef(T *o) : object(o) {}
    inline ~GcAdoptedRef() { if (object) release(object); }
};

// igObjectList's inline append (without raising the count of the appended object).
struct GcPointerList : Meta::igDataList {
    inline void append(void *value)
    {
        int count = _count;
        if (count < _capacity) _count = count + 1;
        else fn_80041660(this, count + 1, 4);
        static_cast<void **>(_data)[count] = value;
    }
};

extern "C" {
extern GcArkCore *_arkCore__Q23Gap4Core;
extern char lbl_8049003C[];   // a registration name (0x15 bytes)
extern char lbl_8055EB78[];   // ""
void *fn_800E97C8(GcVisualContext *self);   // the memory pool for the context list
Meta::igDataList *igContextList_create(void *memoryPool);
void fn_8006DC50(void *registry, int kind, const char *name, bool *found, int, int);
void fn_80044A9C(void *target, Meta::igDataList *list);
unsigned char fn_8006CD10(void);
unsigned char fn_80044C10(void *target, const char *a, const char *b);
void fn_80045314(void *target, void *registry, int kind, int);
void fn_80045404(void *target, void *registry, int kind, int);

void igGamecubeVisualContext_virtual7C(GcVisualContext *self)
{
    void *registry = _arkCore__Q23Gap4Core->unknown38;
    void *target = _arkCore__Q23Gap4Core->unknown3C;
    GcAdoptedRef<Meta::igDataList> list(igContextList_create(fn_800E97C8(self)));
    bool found = false;
    fn_8006DC50(registry, 4, lbl_8049003C, &found, 0, 1);
    if (found) return;
    static_cast<GcPointerList *>(list.object)->append(self);
    fn_80044A9C(target, list.object);
    if (fn_8006CD10() && fn_80044C10(target, lbl_8055EB78, lbl_8055EB78)) fn_80045314(target, registry, 4, 0);
    fn_80045404(target, registry, 4, 0);
}
}
