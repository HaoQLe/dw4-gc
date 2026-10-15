// igVec4fMetaField: Alchemy class registration (0x8011E17C..0x8011E330). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec4fMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec4fMetaField_dependencies[8];
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

struct igVec4fMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVec4fMetaFieldInstance() { __vtable = igVec4fMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec4fMetaField)

META_GET_META(igVec4fMetaField)

void *igVec4fMetaField_vtableRead()
{
    igVec4fMetaFieldInstance object;
    object.__vtable = igVec4fMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec4fMetaField)

void igVec4fMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec4fMetaField_meta, igMetaField_register,
                       fn_80021D70, igVec4fMetaField_getMetaCall,
                       igVec4fMetaField_className, 0x34,
                       igVec4fMetaField_vtableRead, 0, 0, igVec4fMetaField_dependencies);
}

META_GET_META_CALL(igVec4fMetaField)

}
#pragma pop
