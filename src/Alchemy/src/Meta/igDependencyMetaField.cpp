// igDependencyMetaField: Alchemy class registration (0x80033474..0x80033638). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDependencyMetaField)
META_DECLARE(igCompoundMetaField)

extern "C" {
void fn_80021B94();
void *fn_80033638();
void fn_800638E0(void *);
extern char igDependencyMetaField_dependencies[8];
extern char lbl_80471914[];
extern char lbl_80474018[];
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

struct Instance_80474018 : Instance_80471914 {
    char unknown10[36];
    igObjectRefMember _fieldList;
    inline ~Instance_80474018() { __vtable = lbl_80474018; }
};

struct igDependencyMetaFieldInstance : Instance_80474018 {
    char unknown38[8];
    inline ~igDependencyMetaFieldInstance() { __vtable = igDependencyMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDependencyMetaField)

void *igDependencyMetaField_vtableRead()
{
    igDependencyMetaFieldInstance object;
    object.__vtable = lbl_80474018;
    object._fieldList._value = 0;
    object.__vtable = igDependencyMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDependencyMetaField)

void igDependencyMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igDependencyMetaField_meta, igCompoundMetaField_register,
                       fn_80033638, igDependencyMetaField_getMetaCall,
                       igDependencyMetaField_className, 0x38,
                       igDependencyMetaField_vtableRead, 0, 0, igDependencyMetaField_dependencies);
}

META_GET_META_CALL(igDependencyMetaField)

}
#pragma pop
