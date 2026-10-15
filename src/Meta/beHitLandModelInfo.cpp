// beHitLandModelInfo: Alchemy class registration (0x802D4698..0x802D4A68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beHitLandModelInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beHitLandModelInfo_dependencies[12];
extern char beHitLandModelInfo_fieldNames[];
extern char beHitLandModelInfo_fieldOffsets[];
extern char beHitLandModelInfo_fieldStorage[];
extern char beHitLandModelInfo_fieldTypes[];
void *fn_80028F84();
void *fn_801ADB98();
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_804DCD14[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct Instance_804DCD14 : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _dataList;
    igObjectRefMember _ramList;
    inline ~Instance_804DCD14() { __vtable = lbl_804DCD14; }
};

struct beHitLandModelInfoInstance : Instance_804DCD14 {
    igObjectRefMember _nameList;
    igObjectRefMember _switchgraph;
    igObjectRefMember _checkSwitch;
    char unknown28[8];
    inline ~beHitLandModelInfoInstance() { __vtable = beHitLandModelInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beHitLandModelInfo)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beHitLandModelInfo_vtableRead()
{
    beHitLandModelInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beHitLandModelInfo_vtable;
    object._nameList._value = 0;
    object._switchgraph._value = 0;
    object._checkSwitch._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beHitLandModelInfo)

void beHitLandModelInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beHitLandModelInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beHitLandModelInfo_getMetaCall,
                       beHitLandModelInfo_className, 0x2C,
                       beHitLandModelInfo_vtableRead, beHitLandModelInfo_fieldInit, 0, beHitLandModelInfo_dependencies);
}

META_GET_META_CALL(beHitLandModelInfo)

void beHitLandModelInfo_fieldInit()
{
    Meta::igMetaObject *meta = beHitLandModelInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beHitLandModelInfo_fieldTypes, 4);
    Meta::igObjectRefMetaField *nameListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801ADB98();
    nameListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *switchgraphField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_801ADB98();
    switchgraphField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    Meta::igObjectRefMetaField *checkSwitchField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_80028F84();
    checkSwitchField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    meta_setupFields(meta, beHitLandModelInfo_fieldNames, beHitLandModelInfo_fieldStorage, beHitLandModelInfo_fieldOffsets, base);
}

}
#pragma pop
