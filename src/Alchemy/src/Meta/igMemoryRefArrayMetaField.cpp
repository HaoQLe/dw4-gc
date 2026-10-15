// igMemoryRefArrayMetaField: Alchemy class registration (0x8002B240..0x8002B43C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryRefArrayMetaField)
META_DECLARE(igMemoryRefMetaField)

extern "C" {
void fn_80021B94();
void fn_800632A4(void *);
extern char igMemoryRefArrayMetaField_dependencies[8];
void *igMemoryRefArrayMetaField_parentMeta();
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_80476088[];
}

// The base, built by its out-of-line constructor (fn_800632A4).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_800632A4(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80471384 : Instance_80471914 {
    inline ~Instance_80471384() { __vtable = lbl_80471384; }
};

struct Instance_80476088 : Instance_80471384 {
    char unknown10[56];
    igObjectRefMember _memTypeRef;
    igStringMember _poolName;
    inline ~Instance_80476088() { __vtable = lbl_80476088; }
};

struct igMemoryRefArrayMetaFieldInstance : Instance_80476088 {
    char unknown50[16];
    inline ~igMemoryRefArrayMetaFieldInstance() { __vtable = igMemoryRefArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMemoryRefArrayMetaField)

void *igMemoryRefArrayMetaField_vtableRead()
{
    igMemoryRefArrayMetaFieldInstance object;
    object.__vtable = igMemoryRefArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMemoryRefArrayMetaField)

void igMemoryRefArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMemoryRefArrayMetaField_meta, igMemoryRefMetaField_register,
                       igMemoryRefArrayMetaField_parentMeta, igMemoryRefArrayMetaField_getMetaCall,
                       igMemoryRefArrayMetaField_className, 0x54,
                       igMemoryRefArrayMetaField_vtableRead, igMemoryRefArrayMetaField_fieldInit, 0, igMemoryRefArrayMetaField_dependencies);
}

META_GET_META_CALL(igMemoryRefArrayMetaField)

}
#pragma pop
