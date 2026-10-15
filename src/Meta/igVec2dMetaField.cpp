// igVec2dMetaField: Alchemy class registration (0x8011F2A4..0x8011F420). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec2dMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec2dMetaField_dependencies[8];
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

struct igVec2dMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec2dMetaFieldInstance() { __vtable = igVec2dMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec2dMetaField)

void *igVec2dMetaField_vtableRead()
{
    igVec2dMetaFieldInstance object;
    object.__vtable = igVec2dMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec2dMetaField)

void igVec2dMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec2dMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec2dMetaField_getMetaCall,
                       igVec2dMetaField_className, 0x34,
                       igVec2dMetaField_vtableRead, 0, 0, igVec2dMetaField_dependencies);
}

META_GET_META_CALL(igVec2dMetaField)

}
#pragma pop
