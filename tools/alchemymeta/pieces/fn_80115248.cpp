// fn_80115248: sets up a compound field type's members (each a field with a name and an offset).
// Written by hand; used by tools/alchemymeta/poolsrc.py, which replaces @POOL(offset) with the name of the
// unit's data object at that offset.
#include <meta/register.h>

extern "C" {
void *fn_80021E10(void *pool);
void *igFloatMetaField_create(void *pool);
void *igVec2fMetaField_create(void *pool);
void *fn_80054140(unsigned int size);           // allocates
void *fn_80053F28(void *container);             // the string pool container's constructor
const char *fn_80054094(void *container, const char *text);   // a pooled copy of text
void fn_80063D54(void *field, const char **name);   // sets the field's name
void fn_80063F14(void *field);                  // finishes the field
void fn_80069128(void *compound, void *field);  // adds a member field
extern void *lbl_80562140;                      // the string pool container, created on first use
extern char lbl_8055F26C[5];
extern char lbl_8055F274[7];
extern char lbl_8055F27C[5];
}

// A pooled string, released to its pool.
struct PooledName {
    const char *_value;
    inline ~PooledName()
    {
        if (_value) reinterpret_cast<const Gap::Core::igStringPoolItem *>(_value - 8)->release();
    }
};

static inline const char *poolName(const char *text)
{
    if (!text) return 0;
    if (!lbl_80562140) {
        void *container = fn_80054140(0x10);
        if (container) container = fn_80053F28(container);
        lbl_80562140 = container;
    }
    return fn_80054094(lbl_80562140, text);
}

static inline void addMember(void *compound, void *field, const char *name, int offset)
{
    {
        PooledName pooled;
        pooled._value = poolName(name);
        fn_80063D54(field, &pooled._value);
    }
    reinterpret_cast<int *>(field)[2] = offset;   // the field's _offset
    fn_80063F14(field);
    fn_80069128(compound, field);
    meta_release(field);
}

#pragma push
#pragma auto_inline off
extern "C" void fn_80115248(void *compound)
{
    addMember(compound, fn_80021E10(fn_800607F4(lbl_805621F4)), @POOL(0x11B8), 0x0);
    addMember(compound, igFloatMetaField_create(fn_800607F4(lbl_805621F4)), lbl_8055F26C, 0x4);
    addMember(compound, igVec2fMetaField_create(fn_800607F4(lbl_805621F4)), lbl_8055F274, 0x8);
    addMember(compound, igVec2fMetaField_create(fn_800607F4(lbl_805621F4)), lbl_8055F27C, 0x10);
    addMember(compound, igVec2fMetaField_create(fn_800607F4(lbl_805621F4)), @POOL(0x11C4), 0x18);
    addMember(compound, igVec2fMetaField_create(fn_800607F4(lbl_805621F4)), @POOL(0x11D0), 0x20);
}
#pragma pop
