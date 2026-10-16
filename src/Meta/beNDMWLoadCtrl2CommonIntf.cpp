// beNDMWLoadCtrl2CommonIntf: Alchemy class registration (0x8033EC68..0x8033F1CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadCtrl2CommonIntf)
META_DECLARE(beBaseInfoData)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWDegiDataList)
META_DECLARE(beNDMWLoadSavePlWorkList)
META_DECLARE(beNDMWLoadSlotPlayerList)
META_DECLARE(beNDMWMcUtilCtrl)
META_DECLARE(beSystem)
META_DECLARE(igInsightCore)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadCtrl2CommonIntf_dependencies[36];
extern char beNDMWLoadCtrl2CommonIntf_fieldNames[56];
extern char beNDMWLoadCtrl2CommonIntf_fieldOffsets[56];
extern char beNDMWLoadCtrl2CommonIntf_fieldStorage[56];
extern char beNDMWLoadCtrl2CommonIntf_fieldTypes[56];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80454CD4[11];
extern char lbl_804DBC50[];
extern char lbl_80536524[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadCtrl2CommonIntfInstance : Instance_804DBC50 {
    char unknown0C[20];
    igObjectRefMember _slotSaveData;
    igObjectRefMember _gameUseData;
    igObjectRefMember _flagWork;
    char unknown2C[8];
    igObjectRefMember _mcUtilCtrl;
    char unknown38[24];
    inline ~beNDMWLoadCtrl2CommonIntfInstance() { __vtable = beNDMWLoadCtrl2CommonIntf_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWLoadCtrl2CommonIntf)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWLoadCtrl2CommonIntf)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWLoadCtrl2CommonIntf)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beNDMWLoadCtrl2CommonIntf_vtableRead()
{
    beNDMWLoadCtrl2CommonIntfInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadCtrl2CommonIntf_vtable;
    object._slotSaveData._value = 0;
    object._gameUseData._value = 0;
    object._flagWork._value = 0;
    object._mcUtilCtrl._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWLoadCtrl2CommonIntf)

void beNDMWLoadCtrl2CommonIntf_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadCtrl2CommonIntf_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadCtrl2CommonIntf_getMetaCall,
                       beNDMWLoadCtrl2CommonIntf_className, 0x48,
                       beNDMWLoadCtrl2CommonIntf_vtableRead, beNDMWLoadCtrl2CommonIntf_fieldInit, 0, beNDMWLoadCtrl2CommonIntf_dependencies);
}

META_GET_META_CALL(beNDMWLoadCtrl2CommonIntf)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadCtrl2CommonIntf_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadCtrl2CommonIntf_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadCtrl2CommonIntf_fieldTypes, 14);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80454CD4);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80536524);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    systemField->_metaObject = beSystem_metaObject();
    systemField->_refCounted = false;
    Meta::igObjectRefMetaField *inforamField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    inforamField->_metaObject = beBaseInfoRam_metaObject();
    inforamField->_refCounted = false;
    Meta::igObjectRefMetaField *insightField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    insightField->_metaObject = igInsightCore_metaObject();
    insightField->_refCounted = false;
    Meta::igObjectRefMetaField *slotSaveDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    slotSaveDataField->_metaObject = beNDMWLoadSlotPlayerList_metaObject();
    slotSaveDataField->_construct = true;
    Meta::igObjectRefMetaField *gameUseDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    gameUseDataField->_metaObject = beNDMWDegiDataList_metaObject();
    gameUseDataField->_construct = true;
    Meta::igObjectRefMetaField *flagWorkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    flagWorkField->_metaObject = beNDMWLoadSavePlWorkList_metaObject();
    flagWorkField->_construct = true;
    Meta::igObjectRefMetaField *mcUtilCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    mcUtilCtrlField->_metaObject = beNDMWMcUtilCtrl_metaObject();
    mcUtilCtrlField->_construct = true;
    meta_setupFields(meta, beNDMWLoadCtrl2CommonIntf_fieldNames, beNDMWLoadCtrl2CommonIntf_fieldStorage, beNDMWLoadCtrl2CommonIntf_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
