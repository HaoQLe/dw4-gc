// beNDMWShopCtrlDiskSell: Alchemy class registration (0x8032CAC0..0x8032CC2C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopCtrlDiskSell)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrlDiskSell_dependencies[8];
extern char beNDMWShopCtrlDiskSell_fieldNames[];
extern char beNDMWShopCtrlDiskSell_fieldOffsets[];
extern char beNDMWShopCtrlDiskSell_fieldStorage[];
extern char beNDMWShopCtrlDiskSell_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopCtrlDiskSell)

void beNDMWShopCtrlDiskSell_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlDiskSell_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrlDiskSell_getMetaCall,
                       beNDMWShopCtrlDiskSell_className, 0x68,
                       beNDMWShopCtrlDiskSell_vtableRead, beNDMWShopCtrlDiskSell_fieldInit, 0, beNDMWShopCtrlDiskSell_dependencies);
}

META_GET_META_CALL(beNDMWShopCtrlDiskSell)

void beNDMWShopCtrlDiskSell_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlDiskSell_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlDiskSell_fieldTypes, 5);
    Meta::igObjectRefMetaField *diskIdListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    diskIdListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    diskIdListField->_construct = true;
    meta_setupFields(meta, beNDMWShopCtrlDiskSell_fieldNames, beNDMWShopCtrlDiskSell_fieldStorage, beNDMWShopCtrlDiskSell_fieldOffsets, base);
}

}
#pragma pop
