// igEnumArrayMetaField: Alchemy class registration (0x80031758..0x80031920). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEnumArrayMetaField)
META_DECLARE(igEnumMetaField)

extern "C" {
void fn_80021B94();
void fn_80046FD8(void *);
extern char igEnumArrayMetaField_dependencies[8];
void *igEnumArrayMetaField_parentMeta();
extern char lbl_80471914[];
extern char lbl_804758E4[];
}

// The base, built by its out-of-line constructor (fn_80046FD8).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_80046FD8(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_804758E4 : Instance_80471914 {
    inline ~Instance_804758E4() { __vtable = lbl_804758E4; }
};

struct igEnumArrayMetaFieldInstance : Instance_804758E4 {
    char unknown10[48];
    inline ~igEnumArrayMetaFieldInstance() { __vtable = igEnumArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igEnumArrayMetaField)

META_GET_META(igEnumArrayMetaField)

void *igEnumArrayMetaField_vtableRead()
{
    igEnumArrayMetaFieldInstance object;
    object.__vtable = igEnumArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEnumArrayMetaField)

void igEnumArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igEnumArrayMetaField_meta, igEnumMetaField_register,
                       igEnumArrayMetaField_parentMeta, igEnumArrayMetaField_getMetaCall,
                       igEnumArrayMetaField_className, 0x3C,
                       igEnumArrayMetaField_vtableRead, igEnumArrayMetaField_fieldInit, 0, igEnumArrayMetaField_dependencies);
}

META_GET_META_CALL(igEnumArrayMetaField)

}
#pragma pop
