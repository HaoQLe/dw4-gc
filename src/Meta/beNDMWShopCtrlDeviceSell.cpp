// beNDMWShopCtrlDeviceSell: Alchemy class registration (0x8032CF68..0x8032D0D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopCtrlDeviceSell)
META_DECLARE(beNDMWListCtrl)

extern "C" {
extern char beNDMWShopCtrlDeviceSell_dependencies[8];
extern char beNDMWShopCtrlDeviceSell_fieldNames[];
extern char beNDMWShopCtrlDeviceSell_fieldOffsets[];
extern char beNDMWShopCtrlDeviceSell_fieldStorage[];
extern char beNDMWShopCtrlDeviceSell_fieldTypes[];
void *fn_80036C40();
void fn_803250AC();
void *fn_8032BD54();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopCtrlDeviceSell)

void beNDMWShopCtrlDeviceSell_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlDeviceSell_meta, beNDMWListCtrl_register,
                       fn_8032BD54, beNDMWShopCtrlDeviceSell_getMetaCall,
                       beNDMWShopCtrlDeviceSell_className, 0x64,
                       beNDMWShopCtrlDeviceSell_vtableRead, beNDMWShopCtrlDeviceSell_fieldInit, 0, beNDMWShopCtrlDeviceSell_dependencies);
}

META_GET_META_CALL(beNDMWShopCtrlDeviceSell)

void beNDMWShopCtrlDeviceSell_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlDeviceSell_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlDeviceSell_fieldTypes, 1);
    Meta::igObjectRefMetaField *decideListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80036C40();
    decideListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    decideListField->_construct = true;
    meta_setupFields(meta, beNDMWShopCtrlDeviceSell_fieldNames, beNDMWShopCtrlDeviceSell_fieldStorage, beNDMWShopCtrlDeviceSell_fieldOffsets, base);
}

}
#pragma pop
