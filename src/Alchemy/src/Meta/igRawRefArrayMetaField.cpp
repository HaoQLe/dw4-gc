// igRawRefArrayMetaField: Alchemy class registration (0x80027854..0x800279F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRawRefArrayMetaField)
META_DECLARE(igRawRefMetaField)

extern "C" {
void fn_80021B94();
void fn_8006C4B8(void *);
extern char igRawRefArrayMetaField_dependencies[8];
void *igRawRefArrayMetaField_parentMeta();
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_80476630[];
}

// The base, built by its out-of-line constructor (fn_8006C4B8).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_8006C4B8(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80471384 : Instance_80471914 {
    inline ~Instance_80471384() { __vtable = lbl_80471384; }
};

struct Instance_80476630 : Instance_80471384 {
    inline ~Instance_80476630() { __vtable = lbl_80476630; }
};

struct igRawRefArrayMetaFieldInstance : Instance_80476630 {
    char unknown10[48];
    inline ~igRawRefArrayMetaFieldInstance() { __vtable = igRawRefArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRawRefArrayMetaField)

void *igRawRefArrayMetaField_vtableRead()
{
    igRawRefArrayMetaFieldInstance object;
    object.__vtable = igRawRefArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRawRefArrayMetaField)

void igRawRefArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igRawRefArrayMetaField_meta, igRawRefMetaField_register,
                       igRawRefArrayMetaField_parentMeta, igRawRefArrayMetaField_getMetaCall,
                       igRawRefArrayMetaField_className, 0x3C,
                       igRawRefArrayMetaField_vtableRead, igRawRefArrayMetaField_fieldInit, 0, igRawRefArrayMetaField_dependencies);
}

META_GET_META_CALL(igRawRefArrayMetaField)

}
#pragma pop
