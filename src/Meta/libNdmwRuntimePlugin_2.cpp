// libNdmwRuntimePlugin: Alchemy class registration (0x80325630..0x80325974). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(libNdmwRuntimePlugin)
META_DECLARE(beNDMWAfsSetup)
META_DECLARE(beNDMWGameRam)
META_DECLARE(beNDMWLoadCtrl2)
META_DECLARE(beNDMWLoadIntf2)
META_DECLARE(beNDMWLogo)
META_DECLARE(beNDMWMdlEBullet)
META_DECLARE(beNDMWMdlEffect)
META_DECLARE(beNDMWMdlEnemy)
META_DECLARE(beNDMWMdlItem)
META_DECLARE(beNDMWMdlMapBase)
META_DECLARE(beNDMWMdlMapCursor)
META_DECLARE(beNDMWMdlObject)
META_DECLARE(beNDMWMdlPBullet)
META_DECLARE(beNDMWMdlPlayer)
META_DECLARE(beNDMWMdlPlayer2)
META_DECLARE(beNDMWPanelWaza)
META_DECLARE(beNDMWSaveCtrl)
META_DECLARE(beNDMWSaveIntf)
META_DECLARE(beNDMWStageCtl)
META_DECLARE(beNDMWStatus)
META_DECLARE(beNDMWTitle2)
META_DECLARE(igInsightPlugin)

extern "C" {
void *fn_802AD8A0();
void fn_803250AC();
extern char libNdmwRuntimePlugin_dependencies[88];
extern char libNdmwRuntimePlugin_fieldNames[];
extern char libNdmwRuntimePlugin_fieldOffsets[];
extern char libNdmwRuntimePlugin_fieldStorage[];
extern char libNdmwRuntimePlugin_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(libNdmwRuntimePlugin)

void libNdmwRuntimePlugin_register()
{
    fn_803250AC();
    meta_registerClass(0, &libNdmwRuntimePlugin_meta, igInsightPlugin_register,
                       fn_802AD8A0, libNdmwRuntimePlugin_getMetaCall,
                       libNdmwRuntimePlugin_className, 0x5C,
                       libNdmwRuntimePlugin_vtableRead, libNdmwRuntimePlugin_fieldInit, 0, libNdmwRuntimePlugin_dependencies);
}

META_GET_META_CALL(libNdmwRuntimePlugin)

void libNdmwRuntimePlugin_fieldInit()
{
    Meta::igMetaObject *meta = libNdmwRuntimePlugin_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, libNdmwRuntimePlugin_fieldTypes, 21);
    Meta::igObjectRefMetaField *afsSetupField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    afsSetupField->_metaObject = beNDMWAfsSetup_metaObject();
    Meta::igObjectRefMetaField *stageCtlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    stageCtlField->_metaObject = beNDMWStageCtl_metaObject();
    Meta::igObjectRefMetaField *panelWazaField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    panelWazaField->_metaObject = beNDMWPanelWaza_metaObject();
    Meta::igObjectRefMetaField *logoField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    logoField->_metaObject = beNDMWLogo_metaObject();
    Meta::igObjectRefMetaField *title2Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    title2Field->_metaObject = beNDMWTitle2_metaObject();
    Meta::igObjectRefMetaField *loadCtrl2Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    loadCtrl2Field->_metaObject = beNDMWLoadCtrl2_metaObject();
    Meta::igObjectRefMetaField *loadIntf2Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    loadIntf2Field->_metaObject = beNDMWLoadIntf2_metaObject();
    Meta::igObjectRefMetaField *saveCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    saveCtrlField->_metaObject = beNDMWSaveCtrl_metaObject();
    Meta::igObjectRefMetaField *saveIntfField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    saveIntfField->_metaObject = beNDMWSaveIntf_metaObject();
    Meta::igObjectRefMetaField *gameRamField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    gameRamField->_metaObject = beNDMWGameRam_metaObject();
    Meta::igObjectRefMetaField *statusField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    statusField->_metaObject = beNDMWStatus_metaObject();
    Meta::igObjectRefMetaField *mdlPlayerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    mdlPlayerField->_metaObject = beNDMWMdlPlayer_metaObject();
    Meta::igObjectRefMetaField *mdlPlayer2Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    mdlPlayer2Field->_metaObject = beNDMWMdlPlayer2_metaObject();
    Meta::igObjectRefMetaField *mdlPBulletField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    mdlPBulletField->_metaObject = beNDMWMdlPBullet_metaObject();
    Meta::igObjectRefMetaField *mdlEnemyField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 14));
    mdlEnemyField->_metaObject = beNDMWMdlEnemy_metaObject();
    Meta::igObjectRefMetaField *mdlEBulletField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 15));
    mdlEBulletField->_metaObject = beNDMWMdlEBullet_metaObject();
    Meta::igObjectRefMetaField *mdlObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 16));
    mdlObjectField->_metaObject = beNDMWMdlObject_metaObject();
    Meta::igObjectRefMetaField *mdlItemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    mdlItemField->_metaObject = beNDMWMdlItem_metaObject();
    Meta::igObjectRefMetaField *mdlEffectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 18));
    mdlEffectField->_metaObject = beNDMWMdlEffect_metaObject();
    Meta::igObjectRefMetaField *mdlMapBaseField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 19));
    mdlMapBaseField->_metaObject = beNDMWMdlMapBase_metaObject();
    Meta::igObjectRefMetaField *mdlMapCursorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 20));
    mdlMapCursorField->_metaObject = beNDMWMdlMapCursor_metaObject();
    meta_setupFields(meta, libNdmwRuntimePlugin_fieldNames, libNdmwRuntimePlugin_fieldStorage, libNdmwRuntimePlugin_fieldOffsets, base);
}

}
#pragma pop
