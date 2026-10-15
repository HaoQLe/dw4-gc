// igUnsignedCharArrayMetaField: Alchemy class registration (0x80023388..0x80023554). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedCharArrayMetaField)
META_DECLARE(igUnsignedCharMetaField)

extern "C" {
void fn_80021B94();
void fn_800638E0(void *);
extern char igUnsignedCharArrayMetaField_dependencies[8];
void *igUnsignedCharArrayMetaField_parentMeta();
extern char lbl_80471914[];
}

// The base, built by its out-of-line constructor (fn_800638E0).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_800638E0(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct igUnsignedCharMetaFieldInstance : Instance_80471914 {
    inline ~igUnsignedCharMetaFieldInstance() { __vtable = igUnsignedCharMetaField_vtable; }
};

struct igUnsignedCharArrayMetaFieldInstance : igUnsignedCharMetaFieldInstance {
    char unknown10[48];
    inline ~igUnsignedCharArrayMetaFieldInstance() { __vtable = igUnsignedCharArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUnsignedCharArrayMetaField)

META_GET_META(igUnsignedCharArrayMetaField)

void *igUnsignedCharArrayMetaField_vtableRead()
{
    igUnsignedCharArrayMetaFieldInstance object;
    object.__vtable = igUnsignedCharMetaField_vtable;
    object.__vtable = igUnsignedCharArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedCharArrayMetaField)

void igUnsignedCharArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedCharArrayMetaField_meta, igUnsignedCharMetaField_register,
                       igUnsignedCharArrayMetaField_parentMeta, igUnsignedCharArrayMetaField_getMetaCall,
                       igUnsignedCharArrayMetaField_className, 0x38,
                       igUnsignedCharArrayMetaField_vtableRead, igUnsignedCharArrayMetaField_fieldInit, 0, igUnsignedCharArrayMetaField_dependencies);
}

META_GET_META_CALL(igUnsignedCharArrayMetaField)

}
#pragma pop
