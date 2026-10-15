// igStringArrayMetaField: Alchemy class registration (0x800256F0..0x8002588C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringArrayMetaField)
META_DECLARE(igStringMetaField)

extern "C" {
void fn_80021B94();
void fn_80071E44(void *);
extern char igStringArrayMetaField_dependencies[8];
void *igStringArrayMetaField_parentMeta();
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_8047693C[];
}

// The base, built by its out-of-line constructor (fn_80071E44).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_80071E44(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80471384 : Instance_80471914 {
    inline ~Instance_80471384() { __vtable = lbl_80471384; }
};

struct Instance_8047693C : Instance_80471384 {
    inline ~Instance_8047693C() { __vtable = lbl_8047693C; }
};

struct igStringArrayMetaFieldInstance : Instance_8047693C {
    char unknown10[48];
    inline ~igStringArrayMetaFieldInstance() { __vtable = igStringArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStringArrayMetaField)

void *igStringArrayMetaField_vtableRead()
{
    igStringArrayMetaFieldInstance object;
    object.__vtable = igStringArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStringArrayMetaField)

void igStringArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igStringArrayMetaField_meta, igStringMetaField_register,
                       igStringArrayMetaField_parentMeta, igStringArrayMetaField_getMetaCall,
                       igStringArrayMetaField_className, 0x40,
                       igStringArrayMetaField_vtableRead, igStringArrayMetaField_fieldInit, 0, igStringArrayMetaField_dependencies);
}

META_GET_META_CALL(igStringArrayMetaField)

}
#pragma pop
