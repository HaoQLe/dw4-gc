// beNDMWStatusCtrlBaseEquip: Alchemy class registration (0x80332DD8..0x80333028). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusCtrlBaseEquip)
META_DECLARE(beDataObjList)
META_DECLARE(beNDMWItemBaseList)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusCtrlBaseEquip_dependencies[12];
extern char beNDMWStatusCtrlBaseEquip_fieldNames[];
extern char beNDMWStatusCtrlBaseEquip_fieldOffsets[];
extern char beNDMWStatusCtrlBaseEquip_fieldStorage[];
extern char beNDMWStatusCtrlBaseEquip_fieldTypes[];
void fn_80053650(void *,int);
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWStatusCtrlBaseEquip)

META_ARK_REGISTER(beNDMWStatusCtrlBaseEquip)

void beNDMWStatusCtrlBaseEquip_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWStatusCtrlBaseEquip_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusCtrlBaseEquip_getMetaCall,
                       beNDMWStatusCtrlBaseEquip_className, 0x7C,
                       0, beNDMWStatusCtrlBaseEquip_fieldInit, 0, beNDMWStatusCtrlBaseEquip_dependencies);
}

META_GET_META_CALL(beNDMWStatusCtrlBaseEquip)

void beNDMWStatusCtrlBaseEquip_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlBaseEquip_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlBaseEquip_fieldTypes, 10);
    Meta::igIntMetaField *kindListMaxField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    fn_80053650(kindListMaxField, 1);
    Meta::igObjectRefMetaField *playerListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    playerListField->_metaObject = beDataObjList_metaObject();
    Meta::igObjectRefMetaField *powerSocketField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    powerSocketField->_metaObject = beNDMWItemBaseList_metaObject();
    Meta::igObjectRefMetaField *mainSlotField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    Meta::igMetaObject *beNDMWItemBaseListMeta_ = beNDMWItemBaseList_metaObject();
    mainSlotField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beNDMWItemBaseListMeta_);
    Meta::igObjectRefMetaField *subSlotField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    Meta::igMetaObject *beNDMWItemBaseListMeta__ = beNDMWItemBaseList_metaObject();
    subSlotField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beNDMWItemBaseListMeta__);
    Meta::igObjectRefMetaField *wpuPocketField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    Meta::igMetaObject *beNDMWItemBaseListMeta___ = beNDMWItemBaseList_metaObject();
    wpuPocketField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beNDMWItemBaseListMeta___);
    Meta::igObjectRefMetaField *apuPocketField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    Meta::igMetaObject *beNDMWItemBaseListMeta____ = beNDMWItemBaseList_metaObject();
    apuPocketField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beNDMWItemBaseListMeta____);
    Meta::igObjectRefMetaField *deviceFolderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    Meta::igMetaObject *beNDMWItemBaseListMeta_____ = beNDMWItemBaseList_metaObject();
    deviceFolderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beNDMWItemBaseListMeta_____);
    meta_setupFields(meta, beNDMWStatusCtrlBaseEquip_fieldNames, beNDMWStatusCtrlBaseEquip_fieldStorage, beNDMWStatusCtrlBaseEquip_fieldOffsets, base);
}

}
#pragma pop
