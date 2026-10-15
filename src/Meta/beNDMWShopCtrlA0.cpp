// beNDMWShopCtrlA0: Alchemy class registration (0x8032E8F8..0x8032EA7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopCtrlA0)
META_DECLARE(beNDMWStatusTitle03)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrlA0_dependencies[12];
extern char beNDMWShopCtrlA0_fieldNames[];
extern char beNDMWShopCtrlA0_fieldOffsets[];
extern char beNDMWShopCtrlA0_fieldStorage[];
extern char beNDMWShopCtrlA0_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopCtrlA0)

void beNDMWShopCtrlA0_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlA0_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrlA0_getMetaCall,
                       beNDMWShopCtrlA0_className, 0x5C,
                       beNDMWShopCtrlA0_vtableRead, beNDMWShopCtrlA0_fieldInit, 0, beNDMWShopCtrlA0_dependencies);
}

META_GET_META_CALL(beNDMWShopCtrlA0)

void beNDMWShopCtrlA0_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlA0_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlA0_fieldTypes, 2);
    Meta::igObjectRefMetaField *accountField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    accountField->_metaObject = beNDMWStatusTitle03_metaObject();
    Meta::igObjectRefMetaField *playerNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800365B4();
    playerNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    playerNoListField->_construct = true;
    meta_setupFields(meta, beNDMWShopCtrlA0_fieldNames, beNDMWShopCtrlA0_fieldStorage, beNDMWShopCtrlA0_fieldOffsets, base);
}

}
#pragma pop
