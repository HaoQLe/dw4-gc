// igGamecubeVisualContext: initialisation (0x800EC208..0x800EC5E0). Slot 0x28 undoes it.
#include "igGamecubeVisualContextMatrix.h"
#include <igStringPoolItem.h>
#include <igCore/igStringRef.h>

extern "C" {
void fn_800E95E4(GcVisualContext *self);
void fn_8010146C(GcVisualContext *self);
void fn_800EADD8(GcVisualContext *self);
void fn_800FC4F4(GcVisualContext *self);
void fn_800FF794(GcVisualContext *self);
void fn_800F6200(GcVisualContext *self);
GcMemoryPool *fn_800E97B8(GcVisualContext *self);      // _driverDataMemoryPool
GcMemoryPool *fn_800E97E0(GcVisualContext *self);      // _listMemoryPool
Meta::igDataList *igMatrixStack_create(GcMemoryPool *pool);
void *fn_80056138(unsigned int size, GcMemoryPool *pool);   // allocates from a pool
extern void *lbl_80562140;                                  // the string pool container, created on first use
void *fn_80054140(unsigned int size);                       // allocates
void *fn_80053F28(void *container);                         // the string pool container's constructor
const char *fn_80054094(void *container, const char *text); // a pooled copy of text (null for null)
}

// Assigns a pooled copy of text to a string member, releasing the old one (as game/StringPool.h; the
// container is small data here).
static inline void setString(const char *&member, const char *text)
{
    if (!lbl_80562140) {
        void *container = fn_80054140(0x10);
        if (container) container = fn_80053F28(container);
        lbl_80562140 = container;
    }
    const char *value = fn_80054094(lbl_80562140, text);
    if (member) reinterpret_cast<const Gap::Core::igStringPoolItem *>(member - 8)->release();
    member = value;
}

struct GcMatrixStack : Meta::igDataList {
    // Appends a copy of a matrix.
    inline void append(const GcMatrix *matrix)
    {
        int count = _count;
        if (count < _capacity) _count = count + 1;
        else fn_80041660(this, count + 1, sizeof(GcMatrix));
        fn_80128CF4(&static_cast<GcMatrix *>(_data)[count], matrix);
    }
};
static inline GcMatrixStack *stack(Meta::igDataList *list) { return static_cast<GcMatrixStack *>(list); }

// Stores a counted reference in a slot, releasing the one it replaces.
static inline void assign(Meta::igDataList *&slot, Meta::igDataList *object)
{
    if (object) addRef(object);
    if (slot) release(slot);
    slot = object;
}

static inline void clear(Meta::igObject *&slot)
{
    if (slot) release(slot);
    slot = 0;
}

typedef GcPool<Meta::igDataList *> GcListPool;

inline Gap::Core::igStringRef &Gap::Core::igStringRef::operator=(const igChar *string)
{
    if (!lbl_80562140) {
        void *container = fn_80054140(0x10);
        if (container) container = fn_80053F28(container);
        lbl_80562140 = container;
    }
    const igChar *pooled = fn_80054094(lbl_80562140, string);
    release();
    _string = pooled;
    return *this;
}

// The 0x44C pool as constructed: ten records, all free.
struct GcListPoolInit {
    unsigned short count;
    unsigned short freeCapacity;
    unsigned short freeCount;
    unsigned char unknown06[0x2];
    Gap::Core::igStringRef name;
    unsigned short *freeList;
    Meta::igDataList **data;
    static inline void *operator new(unsigned long size, GcMemoryPool *pool) { return fn_80056138(size, pool); }
    inline GcListPoolInit(int n)
    {
        name = (const char *)0;
        GcMemoryPool *memory = fn_8005645C(this);
        data = static_cast<Meta::igDataList **>(memory->allocateArray(n, sizeof(Meta::igDataList *), 16));
        freeList = static_cast<unsigned short *>(memory->allocateArray(n, sizeof(unsigned short)));
        freeCapacity = n;
        count = n;
        freeCount = n;
        for (int i = 0; i < n; i++) freeList[i] = i;
    }
};

extern "C" {
void igGamecubeVisualContext_virtual24(GcVisualContext *self)
{
    fn_800E95E4(self);
    fn_8010146C(self);
    fn_800EADD8(self);
    fn_800FC4F4(self);
    fn_800FF794(self);
    fn_800F6200(self);
    self->unknown141 = false;
    clear(self->unknown434);
    clear(self->unknown438);
    self->unknown440 = -1;
    self->unknown444 = -1;

    // Each matrix stack starts with the identity.
    GcMatrix identity;
    identity.makeIdentity();
    assign(self->matrixStack0, igMatrixStack_create(fn_800E97B8(self)));
    stack(self->matrixStack0)->append(&identity);
    assign(self->matrixStack1, igMatrixStack_create(fn_800E97B8(self)));
    stack(self->matrixStack1)->append(&identity);
    self->matrixStacks = static_cast<Meta::igDataList **>(fn_800E97B8(self)->allocateArray(8, sizeof(Meta::igDataList *)));
    for (int i = 0; i < 8; i++) {
        self->matrixStacks[i] = igMatrixStack_create(fn_800E97B8(self));
        stack(self->matrixStacks[i])->append(&identity);
    }

    self->unknown508 = true;
    self->unknown500 = 2;
    self->unknown504 = 1;
    if (self->_showFrameRate) self->_commandLineFrameRate = true;

    // The pool of lists at 0x44C, with ten free entries.
    self->unknown44C = reinterpret_cast<GcListPool *>(new (fn_800E97E0(self)) GcListPoolInit(10));
    self->unknown450 = -1;
}
}
