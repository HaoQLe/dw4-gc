// igUnsignedShortArrayMetaField: Alchemy class registration (0x8002216C..0x80022334). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedShortArrayMetaField)
META_DECLARE(igUnsignedShortMetaField)

extern "C" {
void fn_80021B94();
void fn_80075F0C(void *);
extern char igUnsignedShortArrayMetaField_dependencies[8];
void *igUnsignedShortArrayMetaField_parentMeta();
extern char lbl_80471914[];
extern char lbl_80477054[];
}

// The base, built by its out-of-line constructor (fn_80075F0C).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_80075F0C(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80477054 : Instance_80471914 {
    inline ~Instance_80477054() { __vtable = lbl_80477054; }
};

struct igUnsignedShortArrayMetaFieldInstance : Instance_80477054 {
    char unknown10[48];
    inline ~igUnsignedShortArrayMetaFieldInstance() { __vtable = igUnsignedShortArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUnsignedShortArrayMetaField)

META_GET_META(igUnsignedShortArrayMetaField)

void *igUnsignedShortArrayMetaField_vtableRead()
{
    igUnsignedShortArrayMetaFieldInstance object;
    object.__vtable = igUnsignedShortArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedShortArrayMetaField)

void igUnsignedShortArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedShortArrayMetaField_meta, igUnsignedShortMetaField_register,
                       igUnsignedShortArrayMetaField_parentMeta, igUnsignedShortArrayMetaField_getMetaCall,
                       igUnsignedShortArrayMetaField_className, 0x38,
                       igUnsignedShortArrayMetaField_vtableRead, igUnsignedShortArrayMetaField_fieldInit, 0, igUnsignedShortArrayMetaField_dependencies);
}

META_GET_META_CALL(igUnsignedShortArrayMetaField)

}
#pragma pop
