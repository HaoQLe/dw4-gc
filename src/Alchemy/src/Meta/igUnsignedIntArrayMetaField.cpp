// igUnsignedIntArrayMetaField: Alchemy class registration (0x80022E28..0x80022FF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedIntArrayMetaField)
META_DECLARE(igUnsignedIntMetaField)

extern "C" {
void fn_80021B94();
void fn_80075A2C(void *);
extern char igUnsignedIntArrayMetaField_dependencies[8];
void *igUnsignedIntArrayMetaField_parentMeta();
extern char lbl_80471914[];
extern char lbl_80476E6C[];
}

// The base, built by its out-of-line constructor (fn_80075A2C).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_80075A2C(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80476E6C : Instance_80471914 {
    inline ~Instance_80476E6C() { __vtable = lbl_80476E6C; }
};

struct igUnsignedIntArrayMetaFieldInstance : Instance_80476E6C {
    char unknown10[48];
    inline ~igUnsignedIntArrayMetaFieldInstance() { __vtable = igUnsignedIntArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUnsignedIntArrayMetaField)

META_GET_META(igUnsignedIntArrayMetaField)

void *igUnsignedIntArrayMetaField_vtableRead()
{
    igUnsignedIntArrayMetaFieldInstance object;
    object.__vtable = igUnsignedIntArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedIntArrayMetaField)

void igUnsignedIntArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedIntArrayMetaField_meta, igUnsignedIntMetaField_register,
                       igUnsignedIntArrayMetaField_parentMeta, igUnsignedIntArrayMetaField_getMetaCall,
                       igUnsignedIntArrayMetaField_className, 0x38,
                       igUnsignedIntArrayMetaField_vtableRead, igUnsignedIntArrayMetaField_fieldInit, 0, igUnsignedIntArrayMetaField_dependencies);
}

META_GET_META_CALL(igUnsignedIntArrayMetaField)

}
#pragma pop
