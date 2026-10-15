// igLongArrayMetaField: Alchemy class registration (0x8002D124..0x8002D2B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLongArrayMetaField)
META_DECLARE(igLongMetaField)

extern "C" {
void fn_80021B94();
void fn_800638E0(void *);
extern char igLongArrayMetaField_dependencies[8];
void *igLongArrayMetaField_parentMeta();
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

struct igLongMetaFieldInstance : Instance_80471914 {
    inline ~igLongMetaFieldInstance() { __vtable = igLongMetaField_vtable; }
};

struct igLongArrayMetaFieldInstance : igLongMetaFieldInstance {
    char unknown10[48];
    inline ~igLongArrayMetaFieldInstance() { __vtable = igLongArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLongArrayMetaField)

void *igLongArrayMetaField_vtableRead()
{
    igLongArrayMetaFieldInstance object;
    object.__vtable = igLongMetaField_vtable;
    object.__vtable = igLongArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLongArrayMetaField)

void igLongArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igLongArrayMetaField_meta, igLongMetaField_register,
                       igLongArrayMetaField_parentMeta, igLongArrayMetaField_getMetaCall,
                       igLongArrayMetaField_className, 0x38,
                       igLongArrayMetaField_vtableRead, igLongArrayMetaField_fieldInit, 0, igLongArrayMetaField_dependencies);
}

META_GET_META_CALL(igLongArrayMetaField)

}
#pragma pop
