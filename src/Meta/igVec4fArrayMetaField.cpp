// igVec4fArrayMetaField: Alchemy class registration (0x8011E3F8..0x8011E5C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec4fArrayMetaField)
META_DECLARE(igVec4fMetaField)

extern "C" {
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igVec4fArrayMetaField_dependencies[8];
void *igVec4fArrayMetaField_parentMeta();
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
    inline ~igVec4fMetaFieldInstance() { __vtable = igVec4fMetaField_vtable; }
};

struct igVec4fArrayMetaFieldInstance : igVec4fMetaFieldInstance {
    char unknown10[48];
    inline ~igVec4fArrayMetaFieldInstance() { __vtable = igVec4fArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec4fArrayMetaField)

META_GET_META(igVec4fArrayMetaField)

void *igVec4fArrayMetaField_vtableRead()
{
    igVec4fArrayMetaFieldInstance object;
    object.__vtable = igVec4fMetaField_vtable;
    object.__vtable = igVec4fArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec4fArrayMetaField)

void igVec4fArrayMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec4fArrayMetaField_meta, igVec4fMetaField_register,
                       igVec4fArrayMetaField_parentMeta, igVec4fArrayMetaField_getMetaCall,
                       igVec4fArrayMetaField_className, 0x38,
                       igVec4fArrayMetaField_vtableRead, igVec4fArrayMetaField_fieldInit, 0, igVec4fArrayMetaField_dependencies);
}

META_GET_META_CALL(igVec4fArrayMetaField)

}
#pragma pop
