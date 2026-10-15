// igShortArrayMetaField: Alchemy class registration (0x80025D04..0x80025ECC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igShortArrayMetaField)
META_DECLARE(igShortMetaField)

extern "C" {
void fn_80021B94();
void fn_80071108(void *);
extern char igShortArrayMetaField_dependencies[8];
void *igShortArrayMetaField_parentMeta();
extern char lbl_80471914[];
extern char lbl_80476848[];
}

// The base, built by its out-of-line constructor (fn_80071108).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_80071108(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80476848 : Instance_80471914 {
    inline ~Instance_80476848() { __vtable = lbl_80476848; }
};

struct igShortArrayMetaFieldInstance : Instance_80476848 {
    char unknown10[48];
    inline ~igShortArrayMetaFieldInstance() { __vtable = igShortArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igShortArrayMetaField)

META_GET_META(igShortArrayMetaField)

void *igShortArrayMetaField_vtableRead()
{
    igShortArrayMetaFieldInstance object;
    object.__vtable = igShortArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igShortArrayMetaField)

void igShortArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igShortArrayMetaField_meta, igShortMetaField_register,
                       igShortArrayMetaField_parentMeta, igShortArrayMetaField_getMetaCall,
                       igShortArrayMetaField_className, 0x38,
                       igShortArrayMetaField_vtableRead, igShortArrayMetaField_fieldInit, 0, igShortArrayMetaField_dependencies);
}

META_GET_META_CALL(igShortArrayMetaField)

}
#pragma pop
