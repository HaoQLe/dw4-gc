// libBecRuntimePlugin: Alchemy class registration (0x802B2428..0x802B291C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(libBecRuntimePlugin)
META_DECLARE(be)
META_DECLARE(beAction2)
META_DECLARE(beActionStarter)
META_DECLARE(beBkColor)
META_DECLARE(beCameraCtrl)
META_DECLARE(beChangePosTransform)
META_DECLARE(beCri)
META_DECLARE(beDBManager)
META_DECLARE(beDemoManager)
META_DECLARE(beFileListInfoManager)
META_DECLARE(beFont)
META_DECLARE(beGenerater)
META_DECLARE(beHitLandDeliv)
META_DECLARE(beHitLandModel)
META_DECLARE(beLayerCtl)
META_DECLARE(beLightCtrl)
META_DECLARE(beLua)
META_DECLARE(beMatCtrl)
META_DECLARE(beMemory)
META_DECLARE(beMessenger)
META_DECLARE(beMeterCtrl)
META_DECLARE(beMovie)
META_DECLARE(beNumberCtrl)
META_DECLARE(bePadManager)
META_DECLARE(beParticleCtrl2)
META_DECLARE(bePoint01)
META_DECLARE(beSaveUtil)
META_DECLARE(beSeCtl)
META_DECLARE(beSelectCtrl)
META_DECLARE(beShadow01)
META_DECLARE(beSound)
META_DECLARE(beStaticInfoCtl)
META_DECLARE(beSwitchCtrl)
META_DECLARE(beSystem)
META_DECLARE(beTargetObj)
META_DECLARE(beTextureCtrl)
META_DECLARE(beTimer)
META_DECLARE(beWaterPlain)
META_DECLARE(beWeapon)
META_DECLARE(igInsightPlugin)

extern "C" {
void *fn_802AD8A0();
void fn_802B1AC8();
void *fn_802B1B48();
extern char libBecRuntimePlugin_dependencies[160];
extern char libBecRuntimePlugin_fieldNames[];
extern char libBecRuntimePlugin_fieldOffsets[];
extern char libBecRuntimePlugin_fieldStorage[];
extern char libBecRuntimePlugin_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(libBecRuntimePlugin)

void libBecRuntimePlugin_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &libBecRuntimePlugin_meta, igInsightPlugin_register,
                       fn_802AD8A0, libBecRuntimePlugin_getMetaCall,
                       libBecRuntimePlugin_className, 0xA4,
                       fn_802B1B48, libBecRuntimePlugin_fieldInit, 0, libBecRuntimePlugin_dependencies);
}

META_GET_META_CALL(libBecRuntimePlugin)

void libBecRuntimePlugin_fieldInit()
{
    Meta::igMetaObject *meta = libBecRuntimePlugin_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, libBecRuntimePlugin_fieldTypes, 39);
    Meta::igObjectRefMetaField *particleCtrl2Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    particleCtrl2Field->_metaObject = beParticleCtrl2_metaObject();
    Meta::igObjectRefMetaField *luaManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    luaManagerField->_metaObject = beLua_metaObject();
    Meta::igObjectRefMetaField *matCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    matCtrlField->_metaObject = beMatCtrl_metaObject();
    Meta::igObjectRefMetaField *selectCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    selectCtrlField->_metaObject = beSelectCtrl_metaObject();
    Meta::igObjectRefMetaField *waterPlainField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    waterPlainField->_metaObject = beWaterPlain_metaObject();
    Meta::igObjectRefMetaField *action2Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    action2Field->_metaObject = beAction2_metaObject();
    Meta::igObjectRefMetaField *meterCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    meterCtrlField->_metaObject = beMeterCtrl_metaObject();
    Meta::igObjectRefMetaField *targetObjField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    targetObjField->_metaObject = beTargetObj_metaObject();
    Meta::igObjectRefMetaField *weaponField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    weaponField->_metaObject = beWeapon_metaObject();
    Meta::igObjectRefMetaField *cameraCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    cameraCtrlField->_metaObject = beCameraCtrl_metaObject();
    Meta::igObjectRefMetaField *point01Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    point01Field->_metaObject = bePoint01_metaObject();
    Meta::igObjectRefMetaField *bkColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    bkColorField->_metaObject = beBkColor_metaObject();
    Meta::igObjectRefMetaField *cpTransformField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    cpTransformField->_metaObject = beChangePosTransform_metaObject();
    Meta::igObjectRefMetaField *shadow01Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    shadow01Field->_metaObject = beShadow01_metaObject();
    Meta::igObjectRefMetaField *generaterField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 14));
    generaterField->_metaObject = beGenerater_metaObject();
    Meta::igObjectRefMetaField *hitLandModelField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 15));
    hitLandModelField->_metaObject = beHitLandModel_metaObject();
    Meta::igObjectRefMetaField *hitLandDelivField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 16));
    hitLandDelivField->_metaObject = beHitLandDeliv_metaObject();
    Meta::igObjectRefMetaField *soundField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    soundField->_metaObject = beSound_metaObject();
    Meta::igObjectRefMetaField *seCtlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 18));
    seCtlField->_metaObject = beSeCtl_metaObject();
    Meta::igObjectRefMetaField *actionStarterField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 19));
    actionStarterField->_metaObject = beActionStarter_metaObject();
    Meta::igObjectRefMetaField *layerCtlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 20));
    layerCtlField->_metaObject = beLayerCtl_metaObject();
    Meta::igObjectRefMetaField *fontField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 21));
    fontField->_metaObject = beFont_metaObject();
    Meta::igObjectRefMetaField *switchCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 22));
    switchCtrlField->_metaObject = beSwitchCtrl_metaObject();
    Meta::igObjectRefMetaField *lightCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 23));
    lightCtrlField->_metaObject = beLightCtrl_metaObject();
    Meta::igObjectRefMetaField *numberCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 24));
    numberCtrlField->_metaObject = beNumberCtrl_metaObject();
    Meta::igObjectRefMetaField *staticInfoCtlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 25));
    staticInfoCtlField->_metaObject = beStaticInfoCtl_metaObject();
    Meta::igObjectRefMetaField *movieField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 26));
    movieField->_metaObject = beMovie_metaObject();
    Meta::igObjectRefMetaField *dbManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 27));
    dbManagerField->_metaObject = beDBManager_metaObject();
    Meta::igObjectRefMetaField *saveUtilField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 28));
    saveUtilField->_metaObject = beSaveUtil_metaObject();
    Meta::igObjectRefMetaField *textureCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 29));
    textureCtrlField->_metaObject = beTextureCtrl_metaObject();
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 30));
    systemField->_metaObject = beSystem_metaObject();
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 31));
    messengerField->_metaObject = beMessenger_metaObject();
    Meta::igObjectRefMetaField *fileListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 32));
    fileListField->_metaObject = beFileListInfoManager_metaObject();
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 33));
    padManagerField->_metaObject = bePadManager_metaObject();
    Meta::igObjectRefMetaField *criField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 34));
    criField->_metaObject = beCri_metaObject();
    Meta::igObjectRefMetaField *luaInterfaceField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 35));
    luaInterfaceField->_metaObject = be_metaObject();
    Meta::igObjectRefMetaField *demoManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 36));
    demoManagerField->_metaObject = beDemoManager_metaObject();
    Meta::igObjectRefMetaField *timerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 37));
    timerField->_metaObject = beTimer_metaObject();
    Meta::igObjectRefMetaField *memoryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 38));
    memoryField->_metaObject = beMemory_metaObject();
    meta_setupFields(meta, libBecRuntimePlugin_fieldNames, libBecRuntimePlugin_fieldStorage, libBecRuntimePlugin_fieldOffsets, base);
}

}
#pragma pop
