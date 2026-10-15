// igUnsignedCharMetaField: Alchemy class registration (0x8002310C..0x800232C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedCharMetaField)
META_DECLARE(igMetaField)

extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_800638E0(void *);
extern char igUnsignedCharMetaField_dependencies[8];
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

struct igUnsignedCharMetaFieldInstance : Instance_80471914 {
    char unknown10[48];
    inline ~igUnsignedCharMetaFieldInstance() { __vtable = igUnsignedCharMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUnsignedCharMetaField)

META_GET_META(igUnsignedCharMetaField)

void *igUnsignedCharMetaField_vtableRead()
{
    igUnsignedCharMetaFieldInstance object;
    object.__vtable = igUnsignedCharMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedCharMetaField)

void igUnsignedCharMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedCharMetaField_meta, igMetaField_register,
                       fn_80021D70, igUnsignedCharMetaField_getMetaCall,
                       igUnsignedCharMetaField_className, 0x34,
                       igUnsignedCharMetaField_vtableRead, 0, 0, igUnsignedCharMetaField_dependencies);
}

META_GET_META_CALL(igUnsignedCharMetaField)

}
#pragma pop
