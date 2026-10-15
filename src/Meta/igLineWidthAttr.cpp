// igLineWidthAttr: Alchemy class registration (0x800B4FFC..0x800B51C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(igLineWidthAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800ABC8C();
void *fn_800AC294();
extern char igLineWidthAttr_fieldNames[4];
extern char igLineWidthAttr_fieldOffsets[4];
extern char igLineWidthAttr_fieldStorage[4];
extern char igLineWidthAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_80566810[4];
}

struct Instance_800B5038_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLineWidthAttr)

void *igLineWidthAttr_vtableRead()
{
    Instance_800B5038_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igLineWidthAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLineWidthAttr)

void igLineWidthAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igLineWidthAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igLineWidthAttr_getMetaCall,
                       igLineWidthAttr_className, 0x10,
                       igLineWidthAttr_vtableRead, igLineWidthAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igLineWidthAttr)

void igLineWidthAttr_fieldInit()
{
    Meta::igMetaObject *meta = igLineWidthAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLineWidthAttr_fieldTypes, 1);
    Meta::igFloatMetaField *widthField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(widthField, *reinterpret_cast<float *>(lbl_80566810 + 0));
    meta_setupFields(meta, igLineWidthAttr_fieldNames, igLineWidthAttr_fieldStorage, igLineWidthAttr_fieldOffsets, base);
}

}
#pragma pop
