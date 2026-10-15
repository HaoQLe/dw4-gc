// beSystem: Alchemy class registration (0x802B7774..0x802B79CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igFloatMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beSystem)
META_DECLARE(igInfoManager)

extern "C" {
extern char beSystem_dependencies[28];
extern char beSystem_fieldNames[];
extern char beSystem_fieldOffsets[];
extern char beSystem_fieldStorage[];
extern char beSystem_fieldTypes[];
void *fn_80024B94();
void *fn_80024FEC();
void *fn_8002E824();
void *fn_800326A0();
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void fn_80071694(void *,int);
void *fn_801BF730();
void *fn_80216AA0();
void *fn_80284550();
void fn_802B1AC8();
extern char lbl_8041D5B0[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beSystem)

void beSystem_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSystem_meta, igInfoManager_register,
                       fn_80284550, beSystem_getMetaCall,
                       beSystem_className, 0x68,
                       beSystem_vtableRead, beSystem_fieldInit, 0, beSystem_dependencies);
}

META_GET_META_CALL(beSystem)

void beSystem_fieldInit()
{
    Meta::igMetaObject *meta = beSystem_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSystem_fieldTypes, 26);
    Meta::igFloatMetaField *frameTimeFField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 3));
    fn_8004D4BC(frameTimeFField, *reinterpret_cast<float *>(lbl_8041D5B0 + 0));
    Meta::igObjectRefMetaField *randomField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value4 = fn_80216AA0();
    randomField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    randomField->_construct = true;
    Meta::igObjectRefMetaField *readFileListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_value6 = fn_80024B94();
    readFileListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value6);
    readFileListField->_construct = true;
    Meta::igStringMetaField *nextStageField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 10));
    fn_80071694(nextStageField, 0);
    Meta::igBoolMetaField *isStageLoopField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 11));
    fn_8003EC68(isStageLoopField, 1);
    Meta::igObjectRefMetaField *bootDirectoryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    void *value_value10 = fn_800326A0();
    bootDirectoryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value10);
    Meta::igObjectRefMetaField *globalStrObjField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_value12 = fn_80024FEC();
    globalStrObjField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value12);
    globalStrObjField->_construct = true;
    Meta::igObjectRefMetaField *discErrInfosField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 14));
    void *value_value14 = fn_8002E824();
    discErrInfosField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value14);
    discErrInfosField->_construct = true;
    Meta::igObjectRefMetaField *viewerSceneField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 15));
    void *value_value16 = fn_801BF730();
    viewerSceneField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value16);
    viewerSceneField->_construct = true;
    Meta::igBoolMetaField *isResetEnableField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 21));
    fn_8003EC68(isResetEnableField, 1);
    meta_setupFields(meta, beSystem_fieldNames, beSystem_fieldStorage, beSystem_fieldOffsets, base);
}

}
#pragma pop
