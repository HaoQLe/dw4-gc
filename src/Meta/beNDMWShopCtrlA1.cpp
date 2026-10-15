// beNDMWShopCtrlA1: Alchemy class registration (0x8032E3A4..0x8032E530). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopCtrlA1)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrlA1_dependencies[12];
extern char beNDMWShopCtrlA1_fieldNames[];
extern char beNDMWShopCtrlA1_fieldOffsets[];
extern char beNDMWShopCtrlA1_fieldStorage[];
extern char beNDMWShopCtrlA1_fieldTypes[];
void *fn_80024B94();
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopCtrlA1)

void beNDMWShopCtrlA1_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlA1_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrlA1_getMetaCall,
                       beNDMWShopCtrlA1_className, 0x5C,
                       beNDMWShopCtrlA1_vtableRead, beNDMWShopCtrlA1_fieldInit, 0, beNDMWShopCtrlA1_dependencies);
}

META_GET_META_CALL(beNDMWShopCtrlA1)

void beNDMWShopCtrlA1_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlA1_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlA1_fieldTypes, 2);
    Meta::igObjectRefMetaField *cardInfoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80024B94();
    cardInfoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    cardInfoListField->_construct = true;
    Meta::igObjectRefMetaField *cardRamNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800365B4();
    cardRamNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    cardRamNoListField->_construct = true;
    meta_setupFields(meta, beNDMWShopCtrlA1_fieldNames, beNDMWShopCtrlA1_fieldStorage, beNDMWShopCtrlA1_fieldOffsets, base);
}

}
#pragma pop
