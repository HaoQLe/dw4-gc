// igIntArrayMetaField: Alchemy class registration (0x8002E508..0x8002E6D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntArrayMetaField)
META_DECLARE(igIntMetaField)

extern "C" {
void fn_80021B94();
void fn_800535B8(void *);
extern char igIntArrayMetaField_dependencies[8];
void *igIntArrayMetaField_parentMeta();
extern char lbl_80471914[];
extern char lbl_80475B60[];
}

// The base, built by its out-of-line constructor (fn_800535B8).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_800535B8(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80475B60 : Instance_80471914 {
    inline ~Instance_80475B60() { __vtable = lbl_80475B60; }
};

struct igIntArrayMetaFieldInstance : Instance_80475B60 {
    char unknown10[48];
    inline ~igIntArrayMetaFieldInstance() { __vtable = igIntArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIntArrayMetaField)

META_GET_META(igIntArrayMetaField)

void *igIntArrayMetaField_vtableRead()
{
    igIntArrayMetaFieldInstance object;
    object.__vtable = igIntArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntArrayMetaField)

void igIntArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igIntArrayMetaField_meta, igIntMetaField_register,
                       igIntArrayMetaField_parentMeta, igIntArrayMetaField_getMetaCall,
                       igIntArrayMetaField_className, 0x38,
                       igIntArrayMetaField_vtableRead, igIntArrayMetaField_fieldInit, 0, igIntArrayMetaField_dependencies);
}

META_GET_META_CALL(igIntArrayMetaField)

}
#pragma pop
