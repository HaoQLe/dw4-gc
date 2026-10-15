// beNDMWPanelObject: Alchemy class registration (0x80337E34..0x80338064). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWPanelObject)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beDataObjList)
META_DECLARE(beMessenger)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWPanelObject_dependencies[24];
extern char beNDMWPanelObject_fieldNames[];
extern char beNDMWPanelObject_fieldOffsets[];
extern char beNDMWPanelObject_fieldStorage[];
extern char beNDMWPanelObject_fieldTypes[];
void *fn_800237D0();
void *fn_80024B94();
void *fn_800365B4();
void fn_80053650(void *,int);
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWPanelObject)

META_ARK_REGISTER(beNDMWPanelObject)

void beNDMWPanelObject_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWPanelObject_meta, igObject_register,
                       fn_800237D0, beNDMWPanelObject_getMetaCall,
                       beNDMWPanelObject_className, 0x3C,
                       0, beNDMWPanelObject_fieldInit, 0, beNDMWPanelObject_dependencies);
}

META_GET_META_CALL(beNDMWPanelObject)

void beNDMWPanelObject_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWPanelObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWPanelObject_fieldTypes, 16);
    Meta::igObjectRefMetaField *managerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    managerField->_metaObject = beBaseInfoManager_metaObject();
    managerField->_refCounted = false;
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igIntMetaField *lineModeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 6));
    fn_80053650(lineModeField, 2);
    Meta::igObjectRefMetaField *playerDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    playerDataListField->_metaObject = beDataObjList_metaObject();
    Meta::igObjectRefMetaField *textSetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    void *value_value10 = fn_80024B94();
    textSetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value10);
    Meta::igObjectRefMetaField *textColorListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_value12 = fn_800365B4();
    textColorListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value12);
    meta_setupFields(meta, beNDMWPanelObject_fieldNames, beNDMWPanelObject_fieldStorage, beNDMWPanelObject_fieldOffsets, base);
}

}
#pragma pop
