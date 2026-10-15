// igMatrix44fMetaField: Alchemy class registration (0x8011FD8C..0x8011FF40). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMatrix44fMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void fn_800638E0(void *);
void fn_8011D8BC();
extern char igMatrix44fMetaField_dependencies[8];
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

struct igMatrix44fMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igMatrix44fMetaFieldInstance() { __vtable = igMatrix44fMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMatrix44fMetaField)

META_GET_META(igMatrix44fMetaField)

void *igMatrix44fMetaField_vtableRead()
{
    igMatrix44fMetaFieldInstance object;
    object.__vtable = igMatrix44fMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrix44fMetaField)

void igMatrix44fMetaField_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igMatrix44fMetaField_meta, igMetaField_register,
                       fn_80021D70, igMatrix44fMetaField_getMetaCall,
                       igMatrix44fMetaField_className, 0x34,
                       igMatrix44fMetaField_vtableRead, 0, 0, igMatrix44fMetaField_dependencies);
}

META_GET_META_CALL(igMatrix44fMetaField)

}
#pragma pop
