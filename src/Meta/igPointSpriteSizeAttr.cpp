// igPointSpriteSizeAttr: Alchemy class registration (0x800B2298..0x800B2460). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(igPointSpriteSizeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800ABC8C();
void *fn_800AC294();
extern char igPointSpriteSizeAttr_fieldNames[4];
extern char igPointSpriteSizeAttr_fieldOffsets[4];
extern char igPointSpriteSizeAttr_fieldStorage[4];
extern char igPointSpriteSizeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_80566818[4];
}

struct Instance_800B22D4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPointSpriteSizeAttr)

void *igPointSpriteSizeAttr_vtableRead()
{
    Instance_800B22D4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igPointSpriteSizeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPointSpriteSizeAttr)

void igPointSpriteSizeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igPointSpriteSizeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igPointSpriteSizeAttr_getMetaCall,
                       igPointSpriteSizeAttr_className, 0x10,
                       igPointSpriteSizeAttr_vtableRead, igPointSpriteSizeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igPointSpriteSizeAttr)

void igPointSpriteSizeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPointSpriteSizeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPointSpriteSizeAttr_fieldTypes, 1);
    Meta::igFloatMetaField *sizeField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(sizeField, *reinterpret_cast<float *>(lbl_80566818 + 0));
    meta_setupFields(meta, igPointSpriteSizeAttr_fieldNames, igPointSpriteSizeAttr_fieldStorage, igPointSpriteSizeAttr_fieldOffsets, base);
}

}
#pragma pop
