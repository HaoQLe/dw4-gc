// beNDMWStatusCtrlFlag: Alchemy class registration (0x80331DF0..0x80331F5C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusCtrlFlag)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusCtrlFlag_dependencies[8];
extern char beNDMWStatusCtrlFlag_fieldNames[];
extern char beNDMWStatusCtrlFlag_fieldOffsets[];
extern char beNDMWStatusCtrlFlag_fieldStorage[];
extern char beNDMWStatusCtrlFlag_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusCtrlFlag)

void beNDMWStatusCtrlFlag_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrlFlag_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusCtrlFlag_getMetaCall,
                       beNDMWStatusCtrlFlag_className, 0x58,
                       beNDMWStatusCtrlFlag_vtableRead, beNDMWStatusCtrlFlag_fieldInit, 0, beNDMWStatusCtrlFlag_dependencies);
}

META_GET_META_CALL(beNDMWStatusCtrlFlag)

void beNDMWStatusCtrlFlag_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlFlag_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlFlag_fieldTypes, 1);
    Meta::igObjectRefMetaField *impItemsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    impItemsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    impItemsField->_construct = true;
    meta_setupFields(meta, beNDMWStatusCtrlFlag_fieldNames, beNDMWStatusCtrlFlag_fieldStorage, beNDMWStatusCtrlFlag_fieldOffsets, base);
}

}
#pragma pop
