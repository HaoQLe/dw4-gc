// beModelCtrlInfoWork: Alchemy class registration (0x802C6C54..0x802C7090). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igFloatMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beModelCtrlInfoWork)
META_DECLARE(beDataObjInt)
META_DECLARE(beModelCtrlData)
META_DECLARE(beModelCtrlInfoAI)
META_DECLARE(beModelCtrlInfoDataTrc)
META_DECLARE(beModelCtrlInfoHitBody)
META_DECLARE(beModelCtrlInfoRideOn)
META_DECLARE(beModelCtrlMoveObjectList)
META_DECLARE(beModelCtrlNode2)
META_DECLARE(beModelCtrlSubCom)
META_DECLARE(igObject)

extern "C" {
extern char beModelCtrlInfoWork_dependencies[60];
extern char beModelCtrlInfoWork_fieldNames[];
extern char beModelCtrlInfoWork_fieldOffsets[];
extern char beModelCtrlInfoWork_fieldStorage[];
extern char beModelCtrlInfoWork_fieldTypes[];
void *fn_800237D0();
void *fn_80024B94();
void *fn_80034D84();
void *fn_800365B4();
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void fn_80053650(void *,int);
void fn_80071694(void *,int);
void *fn_80122790();
void *fn_801BF730();
void fn_802B1AC8();
extern char lbl_8041E6AC[];
extern char lbl_8041ED64[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beModelCtrlInfoWork)

void beModelCtrlInfoWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoWork_meta, igObject_register,
                       fn_800237D0, beModelCtrlInfoWork_getMetaCall,
                       beModelCtrlInfoWork_className, 0xEC,
                       beModelCtrlInfoWork_vtableRead, beModelCtrlInfoWork_fieldInit, 0, beModelCtrlInfoWork_dependencies);
}

META_GET_META_CALL(beModelCtrlInfoWork)

void beModelCtrlInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoWork_fieldTypes, 50);
    Meta::igObjectRefMetaField *mHpField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    mHpField->_metaObject = beDataObjInt_metaObject();
    mHpField->_construct = true;
    Meta::igObjectRefMetaField *hpField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    Meta::igMetaObject *beDataObjIntMeta_ = beDataObjInt_metaObject();
    hpField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataObjIntMeta_);
    hpField->_construct = true;
    Meta::igIntMetaField *recNoField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(recNoField, -1);
    Meta::igObjectRefMetaField *comDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    comDataField->_metaObject = beModelCtrlData_metaObject();
    Meta::igObjectRefMetaField *labelSeqListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value10 = fn_80024B94();
    labelSeqListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value10);
    Meta::igObjectRefMetaField *labelNameListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_value12 = fn_80024B94();
    labelNameListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value12);
    Meta::igObjectRefMetaField *labelOffsetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_value14 = fn_800365B4();
    labelOffsetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value14);
    Meta::igStringMetaField *luaBHitField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 10));
    fn_80071694(luaBHitField, 0);
    Meta::igStringMetaField *luaWHitField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 11));
    fn_80071694(luaWHitField, 0);
    Meta::igStringMetaField *luaFHitField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 12));
    fn_80071694(luaFHitField, 0);
    Meta::igBoolMetaField *isOnCtrlField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 15));
    fn_8003EC68(isOnCtrlField, 1);
    Meta::igObjectRefMetaField *pdMoveDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    void *value_value20 = fn_80034D84();
    pdMoveDataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value20);
    pdMoveDataListField->_construct = true;
    Meta::igStringMetaField *wCheckNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 18));
    fn_80071694(wCheckNameField, 0);
    Meta::igObjectRefMetaField *aIField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 19));
    aIField->_metaObject = beModelCtrlInfoAI_metaObject();
    Meta::igStringMetaField *targetModeField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 21));
    fn_80071694(targetModeField, 0);
    Meta::igStringMetaField *targetKindField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 22));
    fn_80071694(targetKindField, 0);
    Meta::igStringMetaField *targetSpc1Field = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 23));
    fn_80071694(targetSpc1Field, 0);
    Meta::igFloatMetaField *mutekiCountField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 28));
    fn_8004D4BC(mutekiCountField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    Meta::igFloatMetaField *svLODHighRangeField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 32));
    fn_8004D4BC(svLODHighRangeField, *reinterpret_cast<float *>(lbl_8041ED64 + 0));
    Meta::igObjectRefMetaField *posLockNodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 34));
    posLockNodeField->_metaObject = beModelCtrlNode2_metaObject();
    Meta::igObjectRefMetaField *posLockTrcField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 35));
    posLockTrcField->_metaObject = beModelCtrlInfoDataTrc_metaObject();
    Meta::igObjectRefMetaField *moveObjectListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 39));
    moveObjectListField->_metaObject = beModelCtrlMoveObjectList_metaObject();
    moveObjectListField->_construct = true;
    Meta::igObjectRefMetaField *rideOnDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 40));
    rideOnDataField->_metaObject = beModelCtrlInfoRideOn_metaObject();
    Meta::igObjectRefMetaField *debugHitBoxNodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 41));
    void *value_value38 = fn_801BF730();
    debugHitBoxNodeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value38);
    Meta::igObjectRefMetaField *hitBodyField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 42));
    hitBodyField->_metaObject = beModelCtrlInfoHitBody_metaObject();
    Meta::igBoolMetaField *isWallCheckField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 43));
    fn_8003EC68(isWallCheckField, 1);
    Meta::igBoolMetaField *isFloorCheckField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 44));
    fn_8003EC68(isFloorCheckField, 1);
    Meta::igBoolMetaField *isFallCheckField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 45));
    fn_8003EC68(isFallCheckField, 1);
    Meta::igStringMetaField *hitParentNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 46));
    fn_80071694(hitParentNameField, 0);
    Meta::igIntMetaField *hitParentRamNoField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 47));
    fn_80053650(hitParentRamNoField, 0);
    Meta::igObjectRefMetaField *subCommandField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 48));
    subCommandField->_metaObject = beModelCtrlSubCom_metaObject();
    subCommandField->_construct = true;
    Meta::igObjectRefMetaField *baseAABoxField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 49));
    void *value_value49 = fn_80122790();
    baseAABoxField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value49);
    meta_setupFields(meta, beModelCtrlInfoWork_fieldNames, beModelCtrlInfoWork_fieldStorage, beModelCtrlInfoWork_fieldOffsets, base);
}

}
#pragma pop
