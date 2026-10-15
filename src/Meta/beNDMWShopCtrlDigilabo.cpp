// beNDMWShopCtrlDigilabo: Alchemy class registration (0x8032DB64..0x8032DD10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopCtrlDigilabo)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrlDigilabo_dependencies[12];
extern char beNDMWShopCtrlDigilabo_fieldNames[];
extern char beNDMWShopCtrlDigilabo_fieldOffsets[];
extern char beNDMWShopCtrlDigilabo_fieldStorage[];
extern char beNDMWShopCtrlDigilabo_fieldTypes[];
void *fn_80033E74();
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopCtrlDigilabo)

void beNDMWShopCtrlDigilabo_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlDigilabo_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrlDigilabo_getMetaCall,
                       beNDMWShopCtrlDigilabo_className, 0x6C,
                       beNDMWShopCtrlDigilabo_vtableRead, beNDMWShopCtrlDigilabo_fieldInit, 0, beNDMWShopCtrlDigilabo_dependencies);
}

META_GET_META_CALL(beNDMWShopCtrlDigilabo)

void beNDMWShopCtrlDigilabo_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlDigilabo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlDigilabo_fieldTypes, 7);
    Meta::igObjectRefMetaField *playerNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    playerNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    playerNoListField->_construct = true;
    Meta::igObjectRefMetaField *digimonNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800365B4();
    digimonNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    digimonNoListField->_construct = true;
    Meta::igObjectRefMetaField *wpuNoListListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_80033E74();
    wpuNoListListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    wpuNoListListField->_construct = true;
    meta_setupFields(meta, beNDMWShopCtrlDigilabo_fieldNames, beNDMWShopCtrlDigilabo_fieldStorage, beNDMWShopCtrlDigilabo_fieldOffsets, base);
}

}
#pragma pop
