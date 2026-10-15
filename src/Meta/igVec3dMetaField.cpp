// igVec3dMetaField: Alchemy class registration (0x8011EDE4..0x8011EF60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec3dMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec3dMetaField_dependencies[8];
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

struct igVec3dMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec3dMetaFieldInstance() { __vtable = igVec3dMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec3dMetaField)

void *igVec3dMetaField_vtableRead()
{
    igVec3dMetaFieldInstance object;
    object.__vtable = igVec3dMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3dMetaField)

void igVec3dMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec3dMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec3dMetaField_getMetaCall,
                       igVec3dMetaField_className, 0x34,
                       igVec3dMetaField_vtableRead, 0, 0, igVec3dMetaField_dependencies);
}

META_GET_META_CALL(igVec3dMetaField)

}
#pragma pop
