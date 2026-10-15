// beNDMWPanelWazaInfoRam: Alchemy class registration (0x80336A6C..0x80336BD0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWPanelWazaInfoRam)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beNDMWPanelWazaInfoWork)

extern "C" {
extern char beNDMWPanelWazaInfoRam_dependencies[8];
extern char beNDMWPanelWazaInfoRam_fieldNames[];
extern char beNDMWPanelWazaInfoRam_fieldOffsets[];
extern char beNDMWPanelWazaInfoRam_fieldStorage[];
extern char beNDMWPanelWazaInfoRam_fieldTypes[];
void *fn_802B2B2C();
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWPanelWazaInfoRam)

void beNDMWPanelWazaInfoRam_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWPanelWazaInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beNDMWPanelWazaInfoRam_getMetaCall,
                       beNDMWPanelWazaInfoRam_className, 0x30,
                       beNDMWPanelWazaInfoRam_vtableRead, beNDMWPanelWazaInfoRam_fieldInit, 0, beNDMWPanelWazaInfoRam_dependencies);
}

META_GET_META_CALL(beNDMWPanelWazaInfoRam)

void beNDMWPanelWazaInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWPanelWazaInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWPanelWazaInfoRam_fieldTypes, 1);
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    workField->_metaObject = beNDMWPanelWazaInfoWork_metaObject();
    meta_setupFields(meta, beNDMWPanelWazaInfoRam_fieldNames, beNDMWPanelWazaInfoRam_fieldStorage, beNDMWPanelWazaInfoRam_fieldOffsets, base);
}

}
#pragma pop
