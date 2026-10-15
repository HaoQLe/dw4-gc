// igDoubleArrayMetaField: Alchemy class registration (0x8003221C..0x800323B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDoubleArrayMetaField)
META_DECLARE(igDoubleMetaField)

extern "C" {
void fn_80021B94();
void fn_800638E0(void *);
extern char igDoubleArrayMetaField_dependencies[8];
void *igDoubleArrayMetaField_parentMeta();
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
    inline ~igDoubleMetaFieldInstance() { __vtable = igDoubleMetaField_vtable; }
};

struct igDoubleArrayMetaFieldInstance : igDoubleMetaFieldInstance {
    char unknown10[48];
    inline ~igDoubleArrayMetaFieldInstance() { __vtable = igDoubleArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDoubleArrayMetaField)

void *igDoubleArrayMetaField_vtableRead()
{
    igDoubleArrayMetaFieldInstance object;
    object.__vtable = igDoubleMetaField_vtable;
    object.__vtable = igDoubleArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDoubleArrayMetaField)

void igDoubleArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igDoubleArrayMetaField_meta, igDoubleMetaField_register,
                       igDoubleArrayMetaField_parentMeta, igDoubleArrayMetaField_getMetaCall,
                       igDoubleArrayMetaField_className, 0x38,
                       igDoubleArrayMetaField_vtableRead, igDoubleArrayMetaField_fieldInit, 0, igDoubleArrayMetaField_dependencies);
}

META_GET_META_CALL(igDoubleArrayMetaField)

}
#pragma pop
