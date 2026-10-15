// igDestinationAlphaFunctionAttr: Alchemy class registration (0x800B7D28..0x800B7EF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(igDestinationAlphaFunctionAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDestinationAlphaFunctionAttr_fieldNames[4];
extern char igDestinationAlphaFunctionAttr_fieldOffsets[4];
extern char igDestinationAlphaFunctionAttr_fieldStorage[4];
extern char igDestinationAlphaFunctionAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_80566810[4];
}

struct Instance_800B7D64_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDestinationAlphaFunctionAttr)

void *igDestinationAlphaFunctionAttr_vtableRead()
{
    Instance_800B7D64_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDestinationAlphaFunctionAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDestinationAlphaFunctionAttr)

void igDestinationAlphaFunctionAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDestinationAlphaFunctionAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDestinationAlphaFunctionAttr_getMetaCall,
                       igDestinationAlphaFunctionAttr_className, 0x10,
                       igDestinationAlphaFunctionAttr_vtableRead, igDestinationAlphaFunctionAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDestinationAlphaFunctionAttr)

void igDestinationAlphaFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDestinationAlphaFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDestinationAlphaFunctionAttr_fieldTypes, 1);
    Meta::igFloatMetaField *refValueField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(refValueField, *reinterpret_cast<float *>(lbl_80566810 + 0));
    meta_setupFields(meta, igDestinationAlphaFunctionAttr_fieldNames, igDestinationAlphaFunctionAttr_fieldStorage, igDestinationAlphaFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
