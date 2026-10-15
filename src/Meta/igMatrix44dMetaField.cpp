// igMatrix44dMetaField: Alchemy class registration (0x80120008..0x80120184). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMatrix44dMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igMatrix44dMetaField_dependencies[8];
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

struct igMatrix44dMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igMatrix44dMetaFieldInstance() { __vtable = igMatrix44dMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrix44dMetaField)

void *igMatrix44dMetaField_vtableRead()
{
    igMatrix44dMetaFieldInstance object;
    object.__vtable = igMatrix44dMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrix44dMetaField)

void igMatrix44dMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igMatrix44dMetaField_meta, igMetaField_register,
                       fn_80021D70, igMatrix44dMetaField_getMetaCall,
                       igMatrix44dMetaField_className, 0x34,
                       igMatrix44dMetaField_vtableRead, 0, 0, igMatrix44dMetaField_dependencies);
}

META_GET_META_CALL(igMatrix44dMetaField)

}
#pragma pop
