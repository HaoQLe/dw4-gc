// beNDMWShopCtrlEvolve: Alchemy class registration (0x8032F910..0x8032FA7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopCtrlEvolve)
META_DECLARE(beNDMWListCtrl)
META_DECLARE(beNDMWShinkaCtrl)

extern "C" {
extern char beNDMWShopCtrlEvolve_dependencies[8];
extern char beNDMWShopCtrlEvolve_fieldNames[];
extern char beNDMWShopCtrlEvolve_fieldOffsets[];
extern char beNDMWShopCtrlEvolve_fieldStorage[];
extern char beNDMWShopCtrlEvolve_fieldTypes[];
void fn_803250AC();
void *fn_8032BD54();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopCtrlEvolve)

void beNDMWShopCtrlEvolve_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlEvolve_meta, beNDMWListCtrl_register,
                       fn_8032BD54, beNDMWShopCtrlEvolve_getMetaCall,
                       beNDMWShopCtrlEvolve_className, 0x64,
                       beNDMWShopCtrlEvolve_vtableRead, beNDMWShopCtrlEvolve_fieldInit, 0, beNDMWShopCtrlEvolve_dependencies);
}

META_GET_META_CALL(beNDMWShopCtrlEvolve)

void beNDMWShopCtrlEvolve_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlEvolve_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlEvolve_fieldTypes, 1);
    Meta::igObjectRefMetaField *shinkaCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    shinkaCtrlField->_metaObject = beNDMWShinkaCtrl_metaObject();
    shinkaCtrlField->_construct = true;
    meta_setupFields(meta, beNDMWShopCtrlEvolve_fieldNames, beNDMWShopCtrlEvolve_fieldStorage, beNDMWShopCtrlEvolve_fieldOffsets, base);
}

}
#pragma pop
