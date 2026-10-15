// igMemoryDescriptorMetaField: Alchemy class registration (0x8003A160..0x8003A324). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryDescriptorMetaField)
META_DECLARE(igCompoundMetaField)

extern "C" {
void fn_80021B94();
void *fn_80033638();
void fn_800638E0(void *);
extern char igMemoryDescriptorMetaField_dependencies[8];
extern char lbl_80471914[];
extern char lbl_80474018[];
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

struct Instance_80474018 : Instance_80471914 {
    char unknown10[36];
    igObjectRefMember _fieldList;
    inline ~Instance_80474018() { __vtable = lbl_80474018; }
};

struct igMemoryDescriptorMetaFieldInstance : Instance_80474018 {
    char unknown38[8];
    inline ~igMemoryDescriptorMetaFieldInstance() { __vtable = igMemoryDescriptorMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMemoryDescriptorMetaField)

void *igMemoryDescriptorMetaField_vtableRead()
{
    igMemoryDescriptorMetaFieldInstance object;
    object.__vtable = lbl_80474018;
    object._fieldList._value = 0;
    object.__vtable = igMemoryDescriptorMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMemoryDescriptorMetaField)

void igMemoryDescriptorMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMemoryDescriptorMetaField_meta, igCompoundMetaField_register,
                       fn_80033638, igMemoryDescriptorMetaField_getMetaCall,
                       igMemoryDescriptorMetaField_className, 0x38,
                       igMemoryDescriptorMetaField_vtableRead, 0, 0, igMemoryDescriptorMetaField_dependencies);
}

META_GET_META_CALL(igMemoryDescriptorMetaField)

}
#pragma pop
