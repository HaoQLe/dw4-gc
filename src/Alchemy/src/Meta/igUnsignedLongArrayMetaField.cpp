// igUnsignedLongArrayMetaField: Alchemy class registration (0x800227AC..0x80022974). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedLongArrayMetaField)
META_DECLARE(igUnsignedLongMetaField)

extern "C" {
void fn_80021B94();
void fn_80075C84(void *);
extern char igUnsignedLongArrayMetaField_dependencies[8];
void *igUnsignedLongArrayMetaField_parentMeta();
extern char lbl_80471914[];
extern char lbl_80476F60[];
}

// The base, built by its out-of-line constructor (fn_80075C84).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_80075C84(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80476F60 : Instance_80471914 {
    inline ~Instance_80476F60() { __vtable = lbl_80476F60; }
};

struct igUnsignedLongArrayMetaFieldInstance : Instance_80476F60 {
    char unknown10[48];
    inline ~igUnsignedLongArrayMetaFieldInstance() { __vtable = igUnsignedLongArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUnsignedLongArrayMetaField)

META_GET_META(igUnsignedLongArrayMetaField)

void *igUnsignedLongArrayMetaField_vtableRead()
{
    igUnsignedLongArrayMetaFieldInstance object;
    object.__vtable = igUnsignedLongArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedLongArrayMetaField)

void igUnsignedLongArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedLongArrayMetaField_meta, igUnsignedLongMetaField_register,
                       igUnsignedLongArrayMetaField_parentMeta, igUnsignedLongArrayMetaField_getMetaCall,
                       igUnsignedLongArrayMetaField_className, 0x38,
                       igUnsignedLongArrayMetaField_vtableRead, igUnsignedLongArrayMetaField_fieldInit, 0, igUnsignedLongArrayMetaField_dependencies);
}

META_GET_META_CALL(igUnsignedLongArrayMetaField)

}
#pragma pop
