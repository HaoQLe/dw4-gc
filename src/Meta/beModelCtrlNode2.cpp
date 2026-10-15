// beModelCtrlNode2: Alchemy class registration (0x802C6198..0x802C6320). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beModelCtrlNode2)
META_DECLARE(igTransform)

extern "C" {
extern char beModelCtrlNode2_dependencies[8];
extern char beModelCtrlNode2_fieldNames[];
extern char beModelCtrlNode2_fieldOffsets[];
extern char beModelCtrlNode2_fieldStorage[];
extern char beModelCtrlNode2_fieldTypes[];
void fn_8004D4BC(void *,float);
void *fn_800BB61C();
void *fn_801BC078();
void fn_802B1AC8();
void fn_802C6320();
extern char lbl_8041D5B0[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beModelCtrlNode2)

void beModelCtrlNode2_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlNode2_meta, igTransform_register,
                       fn_801BC078, beModelCtrlNode2_getMetaCall,
                       beModelCtrlNode2_className, 0x90,
                       beModelCtrlNode2_vtableRead, beModelCtrlNode2_fieldInit, fn_802C6320, beModelCtrlNode2_dependencies);
}

META_GET_META_CALL(beModelCtrlNode2)

void beModelCtrlNode2_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlNode2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlNode2_fieldTypes, 4);
    Meta::igFloatMetaField *timeScaleField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(timeScaleField, *reinterpret_cast<float *>(lbl_8041D5B0 + 0));
    Meta::igObjectRefMetaField *overrideAttrListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value4 = fn_800BB61C();
    overrideAttrListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    overrideAttrListField->_construct = true;
    meta_setupFields(meta, beModelCtrlNode2_fieldNames, beModelCtrlNode2_fieldStorage, beModelCtrlNode2_fieldOffsets, base);
}

}
#pragma pop
