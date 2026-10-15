// igVec2fMetaField: Alchemy class registration (0x8011F028..0x8011F1DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec2fMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec2fMetaField_dependencies[8];
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

struct igVec2fMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec2fMetaFieldInstance() { __vtable = igVec2fMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec2fMetaField)

META_GET_META(igVec2fMetaField)

void *igVec2fMetaField_vtableRead()
{
    igVec2fMetaFieldInstance object;
    object.__vtable = igVec2fMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec2fMetaField)

void igVec2fMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec2fMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec2fMetaField_getMetaCall,
                       igVec2fMetaField_className, 0x34,
                       igVec2fMetaField_vtableRead, 0, 0, igVec2fMetaField_dependencies);
}

META_GET_META_CALL(igVec2fMetaField)

}
#pragma pop
