// beNDMWGameRam: Alchemy class registration (0x8034474C..0x80344988). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWGameRam)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beDataBase)
META_DECLARE(beDataObjList)
META_DECLARE(beDataObjListList)

extern "C" {
extern char beNDMWGameRam_dependencies[16];
extern char beNDMWGameRam_fieldNames[];
extern char beNDMWGameRam_fieldOffsets[];
extern char beNDMWGameRam_fieldStorage[];
extern char beNDMWGameRam_fieldTypes[];
void *fn_802B381C();
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWGameRam)

void beNDMWGameRam_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWGameRam_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWGameRam_getMetaCall,
                       beNDMWGameRam_className, 0x4C,
                       beNDMWGameRam_vtableRead, beNDMWGameRam_fieldInit, 0, beNDMWGameRam_dependencies);
}

META_GET_META_CALL(beNDMWGameRam)

void beNDMWGameRam_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWGameRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWGameRam_fieldTypes, 11);
    Meta::igObjectRefMetaField *dBShinkaField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dBShinkaField->_metaObject = beDataBase_metaObject();
    Meta::igObjectRefMetaField *dBPcTechField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    Meta::igMetaObject *beDataBaseMeta_ = beDataBase_metaObject();
    dBPcTechField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataBaseMeta_);
    Meta::igObjectRefMetaField *dBWeaponField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    Meta::igMetaObject *beDataBaseMeta__ = beDataBase_metaObject();
    dBWeaponField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataBaseMeta__);
    Meta::igObjectRefMetaField *dBArmor1Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    Meta::igMetaObject *beDataBaseMeta___ = beDataBase_metaObject();
    dBArmor1Field->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataBaseMeta___);
    Meta::igObjectRefMetaField *dBArmor2Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    Meta::igMetaObject *beDataBaseMeta____ = beDataBase_metaObject();
    dBArmor2Field->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataBaseMeta____);
    Meta::igObjectRefMetaField *dBAbChipField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    Meta::igMetaObject *beDataBaseMeta_____ = beDataBase_metaObject();
    dBAbChipField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataBaseMeta_____);
    Meta::igObjectRefMetaField *dBEnemyField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    Meta::igMetaObject *beDataBaseMeta______ = beDataBase_metaObject();
    dBEnemyField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataBaseMeta______);
    Meta::igObjectRefMetaField *dBEneatkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    Meta::igMetaObject *beDataBaseMeta_______ = beDataBase_metaObject();
    dBEneatkField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataBaseMeta_______);
    Meta::igObjectRefMetaField *commonDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    commonDataListField->_metaObject = beDataObjList_metaObject();
    Meta::igObjectRefMetaField *playerDataListListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    playerDataListListField->_metaObject = beDataObjListList_metaObject();
    meta_setupFields(meta, beNDMWGameRam_fieldNames, beNDMWGameRam_fieldStorage, beNDMWGameRam_fieldOffsets, base);
}

}
#pragma pop
