// igVirtualCFuncMetaField: Alchemy class registration (0x80021BF4..0x80021D70). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVirtualCFuncMetaField)
META_DECLARE(igMetaField)

extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_800638E0(void *);
extern char igVirtualCFuncMetaField_dependencies[8];
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

struct igVirtualCFuncMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igVirtualCFuncMetaFieldInstance() { __vtable = igVirtualCFuncMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVirtualCFuncMetaField)

void *igVirtualCFuncMetaField_vtableRead()
{
    igVirtualCFuncMetaFieldInstance object;
    object.__vtable = igVirtualCFuncMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVirtualCFuncMetaField)

void igVirtualCFuncMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igVirtualCFuncMetaField_meta, igMetaField_register,
                       fn_80021D70, igVirtualCFuncMetaField_getMetaCall,
                       igVirtualCFuncMetaField_className, 0x34,
                       igVirtualCFuncMetaField_vtableRead, 0, 0, igVirtualCFuncMetaField_dependencies);
}

META_GET_META_CALL(igVirtualCFuncMetaField)

}
#pragma pop
