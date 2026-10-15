// beNDMWShopCtrlXdataChip: Alchemy class registration (0x8032C140..0x8032C2AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopCtrlXdataChip)
META_DECLARE(beNDMWItemBaseList)
META_DECLARE(beNDMWListCtrl)

extern "C" {
extern char beNDMWShopCtrlXdataChip_dependencies[8];
extern char beNDMWShopCtrlXdataChip_fieldNames[];
extern char beNDMWShopCtrlXdataChip_fieldOffsets[];
extern char beNDMWShopCtrlXdataChip_fieldStorage[];
extern char beNDMWShopCtrlXdataChip_fieldTypes[];
void fn_803250AC();
void *fn_8032BD54();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopCtrlXdataChip)

void beNDMWShopCtrlXdataChip_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlXdataChip_meta, beNDMWListCtrl_register,
                       fn_8032BD54, beNDMWShopCtrlXdataChip_getMetaCall,
                       beNDMWShopCtrlXdataChip_className, 0x64,
                       beNDMWShopCtrlXdataChip_vtableRead, beNDMWShopCtrlXdataChip_fieldInit, 0, beNDMWShopCtrlXdataChip_dependencies);
}

META_GET_META_CALL(beNDMWShopCtrlXdataChip)

void beNDMWShopCtrlXdataChip_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlXdataChip_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlXdataChip_fieldTypes, 1);
    Meta::igObjectRefMetaField *itemBaseListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    itemBaseListField->_metaObject = beNDMWItemBaseList_metaObject();
    itemBaseListField->_construct = true;
    meta_setupFields(meta, beNDMWShopCtrlXdataChip_fieldNames, beNDMWShopCtrlXdataChip_fieldStorage, beNDMWShopCtrlXdataChip_fieldOffsets, base);
}

}
#pragma pop
