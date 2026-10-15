// igCharArrayMetaField: Alchemy class registration (0x80037E78..0x80038040). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCharArrayMetaField)
META_DECLARE(igCharMetaField)

extern "C" {
void fn_80021B94();
void fn_8003FF90(void *);
extern char igCharArrayMetaField_dependencies[8];
void *igCharArrayMetaField_parentMeta();
extern char lbl_80471914[];
extern char lbl_80473F24[];
}

// The base, built by its out-of-line constructor (fn_8003FF90).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_8003FF90(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80473F24 : Instance_80471914 {
    inline ~Instance_80473F24() { __vtable = lbl_80473F24; }
};

struct igCharArrayMetaFieldInstance : Instance_80473F24 {
    char unknown10[48];
    inline ~igCharArrayMetaFieldInstance() { __vtable = igCharArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCharArrayMetaField)

META_GET_META(igCharArrayMetaField)

void *igCharArrayMetaField_vtableRead()
{
    igCharArrayMetaFieldInstance object;
    object.__vtable = igCharArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCharArrayMetaField)

void igCharArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igCharArrayMetaField_meta, igCharMetaField_register,
                       igCharArrayMetaField_parentMeta, igCharArrayMetaField_getMetaCall,
                       igCharArrayMetaField_className, 0x38,
                       igCharArrayMetaField_vtableRead, igCharArrayMetaField_fieldInit, 0, igCharArrayMetaField_dependencies);
}

META_GET_META_CALL(igCharArrayMetaField)

}
#pragma pop
