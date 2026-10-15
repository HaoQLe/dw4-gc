// igFloatMetaField: Alchemy class registration (0x8002FA04..0x8002FB80). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFloatMetaField)
META_DECLARE(igMetaField)

extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_800638E0(void *);
extern char igFloatMetaField_dependencies[8];
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
    char unknown10[48];
    inline ~igFloatMetaFieldInstance() { __vtable = igFloatMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFloatMetaField)

void *igFloatMetaField_vtableRead()
{
    igFloatMetaFieldInstance object;
    object.__vtable = igFloatMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFloatMetaField)

void igFloatMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igFloatMetaField_meta, igMetaField_register,
                       fn_80021D70, igFloatMetaField_getMetaCall,
                       igFloatMetaField_className, 0x34,
                       igFloatMetaField_vtableRead, 0, 0, igFloatMetaField_dependencies);
}

META_GET_META_CALL(igFloatMetaField)

}
#pragma pop
