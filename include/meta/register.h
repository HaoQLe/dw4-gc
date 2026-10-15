// Alchemy class registration: the declarations and macros each class's registration source uses
// (src/Meta/<Class>.cpp, written by tools/alchemymeta/metasrc.py).
//
// Every registered class C has these functions, in this address order (create, metaObject, vtableRead and
// fieldInit are optional):
//   C_create(pool)    an instance of C in pool, registering C first;
//   C_metaObject()    C's metaobject, created unregistered if absent (field setup uses it for a field's
//                     target class);
//   C_getMeta()       C's metaobject, registering C first if needed;
//   C_vtableRead()    C's vtable pointer, read from a temporary instance built as C's constructors build it;
//   C_arkRegister()   registers C, then runs the registrations waiting for it (Alchemy's name: five engine
//                     classes keep theirs, e.g. Gap::Core::igResource::arkRegister);
//   C_register()      fills C's metaobject: parent, name, instance size and callbacks;
//   C_getMetaCall()   C_getMeta(), as the callback the metaobject keeps;
//   C_fieldInit()     creates and sets up C's reflected fields.
#ifndef META_REGISTER_H
#define META_REGISTER_H
#include <meta/igMetaObject.h>
#include <igCore/igStringPoolItem.h>

namespace Gap { namespace Core { class igArkCore; extern igArkCore *_arkCore; } }

// The igMetaObject::_validity bit set once its class is registered.
enum { META_REGISTERED = 4 };

extern "C" {
void meta_registerNow(void (*registerFunction)());
// Fills *meta. The first argument's meaning is unknown (1 for a few engine classes). unknownCallback returns a
// global (for list classes, a metaobject); callback2 is a further function or 0; dependencies is a
// zero-terminated list of the arkRegister functions of the classes C's fields refer to, or 0.
void meta_registerClass(int unknown00, Meta::igMetaObject **meta, void (*parentRegister)(),
                        void *(*unknownCallback)(), Meta::igMetaObject *(*getMetaCall)(), const char *name,
                        int size, void *(*vtableRead)(), void (*fieldInit)(), void (*callback2)(),
                        void *dependencies);
Meta::igMetaObject *meta_newMetaObject(void *pool);
void *meta_createInstance(Meta::igMetaObject *meta, void *pool);
void *fn_800607F4(void *poolSource);   // a pool from the memory manager
extern void *lbl_805621F4;             // the pool source for new metaobjects and fields
int meta_fieldCount(Meta::igMetaObject *meta);
void *meta_field(Meta::igMetaObject *meta, int index);
void meta_appendFields(Meta::igMetaObject *meta, void *fieldTypes, int count);
void meta_setupFields(Meta::igMetaObject *meta, void *names, void *offsets, void *unknown, int first);
void igObject_construct(void *object);
void fn_80066E1C(void *object);        // frees an object whose reference count reached zero
}

// The symbols of class C (declaring one that does not exist emits nothing).
#define META_DECLARE(C) \
    extern "C" { \
    extern Meta::igMetaObject *C##_meta; \
    extern char C##_className[]; \
    extern char C##_vtable[]; \
    void *C##_create(void *pool); \
    Meta::igMetaObject *C##_metaObject(); \
    Meta::igMetaObject *C##_getMeta(); \
    void *C##_vtableRead(); \
    void C##_arkRegister(); \
    void C##_register(); \
    Meta::igMetaObject *C##_getMetaCall(); \
    void C##_fieldInit(); \
    }

#define META_CREATE(C) \
    void *C##_create(void *pool) \
    { \
        C##_arkRegister(); \
        return meta_createInstance(C##_meta, pool); \
    }

#define META_METAOBJECT(C) \
    Meta::igMetaObject *C##_metaObject() \
    { \
        if (!C##_meta) C##_meta = meta_newMetaObject(fn_800607F4(lbl_805621F4)); \
        return C##_meta; \
    }

#define META_GET_META(C) \
    Meta::igMetaObject *C##_getMeta() \
    { \
        if (!C##_meta || !(C##_meta->_validity & META_REGISTERED)) C##_arkRegister(); \
        return C##_meta; \
    }

#define META_ARK_REGISTER(C) \
    void C##_arkRegister() \
    { \
        meta_registerNow(C##_register); \
    }

#define META_GET_META_CALL(C) \
    Meta::igMetaObject *C##_getMetaCall() \
    { \
        return C##_getMeta(); \
    }

// The vtable pointer of an object (the core keeps the vtable pointer's offset at +0x394).
static inline void *meta_vtableOf(void *object)
{
    return *reinterpret_cast<void **>(reinterpret_cast<char *>(object) +
                                      reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394 / 4]);
}

// igObject, as a temporary instance's root: its constructor is out of line, and the instance is never
// deleted.
struct igObjectInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline igObjectInstance() { igObject_construct(this); }
};

// A string member (igStringMetaField): released to the string pool when its object is destroyed.
struct igStringMember {
    const char *_value;
    inline ~igStringMember()
    {
        if (_value) reinterpret_cast<const Gap::Core::igStringPoolItem *>(_value - 8)->release();
    }
};

// Releases a reference to object (the low 23 bits of the word at +4 count references).
static inline void meta_release(void *object)
{
    --reinterpret_cast<unsigned int *>(object)[1];
    if (!(reinterpret_cast<volatile unsigned int *>(object)[1] & 0x7FFFFF)) fn_80066E1C(object);
}

// A reference-counted object member: released when its object is destroyed.
struct igObjectRefMember {
    void *_value;
    inline ~igObjectRefMember()
    {
        if (_value) meta_release(_value);
    }
};

#endif
