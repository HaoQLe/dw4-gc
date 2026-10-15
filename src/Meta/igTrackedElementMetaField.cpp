// igTrackedElementMetaField: Alchemy class registration (0x800D2978..0x800D2B3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTrackedElementMetaField)
META_DECLARE(igCompoundMetaField)

extern "C" {
void *fn_80033638();
void fn_800638E0(void *);
void fn_800CE2F8();
extern char igTrackedElementMetaField_dependencies[8];
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

struct igTrackedElementMetaFieldInstance : Instance_80474018 {
    char unknown38[8];
    inline ~igTrackedElementMetaFieldInstance() { __vtable = igTrackedElementMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTrackedElementMetaField)

void *igTrackedElementMetaField_vtableRead()
{
    igTrackedElementMetaFieldInstance object;
    object.__vtable = lbl_80474018;
    object._fieldList._value = 0;
    object.__vtable = igTrackedElementMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTrackedElementMetaField)

void igTrackedElementMetaField_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igTrackedElementMetaField_meta, igCompoundMetaField_register,
                       fn_80033638, igTrackedElementMetaField_getMetaCall,
                       igTrackedElementMetaField_className, 0x38,
                       igTrackedElementMetaField_vtableRead, 0, 0, igTrackedElementMetaField_dependencies);
}

META_GET_META_CALL(igTrackedElementMetaField)

}
#pragma pop
