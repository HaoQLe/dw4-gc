// igDoubleMetaField: Alchemy class registration (0x80031FA0..0x80032154). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDoubleMetaField)
META_DECLARE(igMetaField)

extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_800638E0(void *);
extern char igDoubleMetaField_dependencies[8];
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

struct igDoubleMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igDoubleMetaFieldInstance() { __vtable = igDoubleMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igDoubleMetaField)

META_GET_META(igDoubleMetaField)

void *igDoubleMetaField_vtableRead()
{
    igDoubleMetaFieldInstance object;
    object.__vtable = igDoubleMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDoubleMetaField)

void igDoubleMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igDoubleMetaField_meta, igMetaField_register,
                       fn_80021D70, igDoubleMetaField_getMetaCall,
                       igDoubleMetaField_className, 0x34,
                       igDoubleMetaField_vtableRead, 0, 0, igDoubleMetaField_dependencies);
}

META_GET_META_CALL(igDoubleMetaField)

}
#pragma pop
