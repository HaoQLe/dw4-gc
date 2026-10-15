// igLongMetaField: Alchemy class registration (0x8002CEA8..0x8002D05C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLongMetaField)
META_DECLARE(igMetaField)

extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_800638E0(void *);
extern char igLongMetaField_dependencies[8];
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
    char unknown10[48];
    inline ~igLongMetaFieldInstance() { __vtable = igLongMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igLongMetaField)

META_GET_META(igLongMetaField)

void *igLongMetaField_vtableRead()
{
    igLongMetaFieldInstance object;
    object.__vtable = igLongMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLongMetaField)

void igLongMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igLongMetaField_meta, igMetaField_register,
                       fn_80021D70, igLongMetaField_getMetaCall,
                       igLongMetaField_className, 0x34,
                       igLongMetaField_vtableRead, 0, 0, igLongMetaField_dependencies);
}

META_GET_META_CALL(igLongMetaField)

}
#pragma pop
