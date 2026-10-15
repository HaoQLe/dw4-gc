// beNDMWPanelWazaInfoWork: Alchemy class registration (0x80336F04..0x80337108). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWPanelWazaInfoWork)
META_DECLARE(beNDMWMdlPlayerInfoWork)
META_DECLARE(beNDMWPanelObjectItem)
META_DECLARE(beNDMWPanelObjectStat)
META_DECLARE(beNDMWPanelObjectWaza)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWPanelWazaInfoWork_dependencies[28];
extern char beNDMWPanelWazaInfoWork_fieldNames[];
extern char beNDMWPanelWazaInfoWork_fieldOffsets[];
extern char beNDMWPanelWazaInfoWork_fieldStorage[];
extern char beNDMWPanelWazaInfoWork_fieldTypes[];
void *fn_800237D0();
void *fn_80024B94();
void *fn_800365B4();
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWPanelWazaInfoWork)

void beNDMWPanelWazaInfoWork_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWPanelWazaInfoWork_meta, igObject_register,
                       fn_800237D0, beNDMWPanelWazaInfoWork_getMetaCall,
                       beNDMWPanelWazaInfoWork_className, 0x30,
                       beNDMWPanelWazaInfoWork_vtableRead, beNDMWPanelWazaInfoWork_fieldInit, 0, beNDMWPanelWazaInfoWork_dependencies);
}

META_GET_META_CALL(beNDMWPanelWazaInfoWork)

void beNDMWPanelWazaInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWPanelWazaInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWPanelWazaInfoWork_fieldTypes, 11);
    Meta::igObjectRefMetaField *panelWazaField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    panelWazaField->_metaObject = beNDMWPanelObjectWaza_metaObject();
    panelWazaField->_construct = true;
    Meta::igObjectRefMetaField *panelItemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    panelItemField->_metaObject = beNDMWPanelObjectItem_metaObject();
    panelItemField->_construct = true;
    Meta::igObjectRefMetaField *panelStatField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    panelStatField->_metaObject = beNDMWPanelObjectStat_metaObject();
    panelStatField->_construct = true;
    Meta::igObjectRefMetaField *playerWorkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    playerWorkField->_metaObject = beNDMWMdlPlayerInfoWork_metaObject();
    Meta::igObjectRefMetaField *textSetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_value11 = fn_80024B94();
    textSetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    textSetListField->_construct = true;
    Meta::igObjectRefMetaField *textColorListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    void *value_value13 = fn_800365B4();
    textColorListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value13);
    textColorListField->_construct = true;
    meta_setupFields(meta, beNDMWPanelWazaInfoWork_fieldNames, beNDMWPanelWazaInfoWork_fieldStorage, beNDMWPanelWazaInfoWork_fieldOffsets, base);
}

}
#pragma pop
