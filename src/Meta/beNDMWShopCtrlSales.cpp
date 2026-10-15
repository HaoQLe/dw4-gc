// beNDMWShopCtrlSales: Alchemy class registration (0x8032C61C..0x8032C7A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopCtrlSales)
META_DECLARE(beNDMWItemBaseList)
META_DECLARE(beNDMWListCtrl)

extern "C" {
extern char beNDMWShopCtrlSales_dependencies[12];
extern char beNDMWShopCtrlSales_fieldNames[];
extern char beNDMWShopCtrlSales_fieldOffsets[];
extern char beNDMWShopCtrlSales_fieldStorage[];
extern char beNDMWShopCtrlSales_fieldTypes[];
void *fn_80036C40();
void fn_803250AC();
void *fn_8032BD54();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopCtrlSales)

void beNDMWShopCtrlSales_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlSales_meta, beNDMWListCtrl_register,
                       fn_8032BD54, beNDMWShopCtrlSales_getMetaCall,
                       beNDMWShopCtrlSales_className, 0x68,
                       beNDMWShopCtrlSales_vtableRead, beNDMWShopCtrlSales_fieldInit, 0, beNDMWShopCtrlSales_dependencies);
}

META_GET_META_CALL(beNDMWShopCtrlSales)

void beNDMWShopCtrlSales_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlSales_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlSales_fieldTypes, 2);
    Meta::igObjectRefMetaField *salesItemListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    salesItemListField->_metaObject = beNDMWItemBaseList_metaObject();
    Meta::igObjectRefMetaField *decideListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80036C40();
    decideListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    decideListField->_construct = true;
    meta_setupFields(meta, beNDMWShopCtrlSales_fieldNames, beNDMWShopCtrlSales_fieldStorage, beNDMWShopCtrlSales_fieldOffsets, base);
}

}
#pragma pop
