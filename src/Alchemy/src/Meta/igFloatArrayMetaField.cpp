// igFloatArrayMetaField: Alchemy class registration (0x8002FC48..0x8002FE14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFloatArrayMetaField)
META_DECLARE(igFloatMetaField)

extern "C" {
void fn_80021B94();
void fn_800638E0(void *);
extern char igFloatArrayMetaField_dependencies[8];
void *igFloatArrayMetaField_parentMeta();
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

struct igFloatMetaFieldInstance : Instance_80471914 {
    inline ~igFloatMetaFieldInstance() { __vtable = igFloatMetaField_vtable; }
};

struct igFloatArrayMetaFieldInstance : igFloatMetaFieldInstance {
    char unknown10[48];
    inline ~igFloatArrayMetaFieldInstance() { __vtable = igFloatArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igFloatArrayMetaField)

META_GET_META(igFloatArrayMetaField)

void *igFloatArrayMetaField_vtableRead()
{
    igFloatArrayMetaFieldInstance object;
    object.__vtable = igFloatMetaField_vtable;
    object.__vtable = igFloatArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFloatArrayMetaField)

void igFloatArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igFloatArrayMetaField_meta, igFloatMetaField_register,
                       igFloatArrayMetaField_parentMeta, igFloatArrayMetaField_getMetaCall,
                       igFloatArrayMetaField_className, 0x38,
                       igFloatArrayMetaField_vtableRead, igFloatArrayMetaField_fieldInit, 0, igFloatArrayMetaField_dependencies);
}

META_GET_META_CALL(igFloatArrayMetaField)

}
#pragma pop
