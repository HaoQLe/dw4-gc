// igObjectRefArrayMetaField: Alchemy class registration (0x80028C2C..0x80028E30). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectRefArrayMetaField)
META_DECLARE(igObjectRefMetaField)

extern "C" {
void fn_80021B94();
void fn_8006ACA4(void *);
extern char igObjectRefArrayMetaField_dependencies[8];
void *igObjectRefArrayMetaField_parentMeta();
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_804762FC[];
}

// The base, built by its out-of-line constructor (fn_8006ACA4).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_8006ACA4(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80471384 : Instance_80471914 {
    inline ~Instance_80471384() { __vtable = lbl_80471384; }
};

struct Instance_804762FC : Instance_80471384 {
    char unknown10[48];
    igStringMember _poolName;
    inline ~Instance_804762FC() { __vtable = lbl_804762FC; }
};

struct igObjectRefArrayMetaFieldInstance : Instance_804762FC {
    char unknown44[12];
    inline ~igObjectRefArrayMetaFieldInstance() { __vtable = igObjectRefArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igObjectRefArrayMetaField)

META_GET_META(igObjectRefArrayMetaField)

void *igObjectRefArrayMetaField_vtableRead()
{
    igObjectRefArrayMetaFieldInstance object;
    object.__vtable = igObjectRefArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectRefArrayMetaField)

void igObjectRefArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igObjectRefArrayMetaField_meta, igObjectRefMetaField_register,
                       igObjectRefArrayMetaField_parentMeta, igObjectRefArrayMetaField_getMetaCall,
                       igObjectRefArrayMetaField_className, 0x48,
                       igObjectRefArrayMetaField_vtableRead, igObjectRefArrayMetaField_fieldInit, 0, igObjectRefArrayMetaField_dependencies);
}

META_GET_META_CALL(igObjectRefArrayMetaField)

}
#pragma pop
