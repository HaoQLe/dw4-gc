// igItemDataBaseField: Alchemy class registration (0x8014536C..0x80145530). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igItemDataBaseField)
META_DECLARE(igCompoundMetaField)

extern "C" {
void *fn_80033638();
void fn_800638E0(void *);
void fn_8012FC48();
extern char igItemDataBaseField_dependencies[8];
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

struct igItemDataBaseFieldInstance : Instance_80474018 {
    char unknown38[8];
    inline ~igItemDataBaseFieldInstance() { __vtable = igItemDataBaseField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igItemDataBaseField)

void *igItemDataBaseField_vtableRead()
{
    igItemDataBaseFieldInstance object;
    object.__vtable = lbl_80474018;
    object._fieldList._value = 0;
    object.__vtable = igItemDataBaseField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igItemDataBaseField)

void igItemDataBaseField_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igItemDataBaseField_meta, igCompoundMetaField_register,
                       fn_80033638, igItemDataBaseField_getMetaCall,
                       igItemDataBaseField_className, 0x38,
                       igItemDataBaseField_vtableRead, 0, 0, igItemDataBaseField_dependencies);
}

META_GET_META_CALL(igItemDataBaseField)

}
#pragma pop
