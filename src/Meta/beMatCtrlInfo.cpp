// beMatCtrlInfo: Alchemy class registration (0x802D0454..0x802D0834). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMatCtrlInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(beMatCtrlDataList)
META_DECLARE(beMatCtrlSearchList)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMatCtrlInfo_dependencies[16];
extern char beMatCtrlInfo_fieldNames[];
extern char beMatCtrlInfo_fieldOffsets[];
extern char beMatCtrlInfo_fieldStorage[];
extern char beMatCtrlInfo_fieldTypes[];
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

struct beMatCtrlInfoInstance : Instance_804DCD14 {
    igObjectRefMember _switchgraph;
    igObjectRefMember unknown20;
    igObjectRefMember _search;
    char unknown28[8];
    inline ~beMatCtrlInfoInstance() { __vtable = beMatCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beMatCtrlInfo)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beMatCtrlInfo_vtableRead()
{
    beMatCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beMatCtrlInfo_vtable;
    object._switchgraph._value = 0;
    object.unknown20._value = 0;
    object._search._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beMatCtrlInfo)

void beMatCtrlInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMatCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beMatCtrlInfo_getMetaCall,
                       beMatCtrlInfo_className, 0x28,
                       beMatCtrlInfo_vtableRead, beMatCtrlInfo_fieldInit, 0, beMatCtrlInfo_dependencies);
}

META_GET_META_CALL(beMatCtrlInfo)

void beMatCtrlInfo_fieldInit()
{
    Meta::igMetaObject *meta = beMatCtrlInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMatCtrlInfo_fieldTypes, 3);
    Meta::igObjectRefMetaField *switchgraphField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801ADB98();
    switchgraphField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    dataListField->_metaObject = beMatCtrlDataList_metaObject();
    dataListField->_construct = true;
    Meta::igObjectRefMetaField *searchField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    searchField->_metaObject = beMatCtrlSearchList_metaObject();
    searchField->_construct = true;
    meta_setupFields(meta, beMatCtrlInfo_fieldNames, beMatCtrlInfo_fieldStorage, beMatCtrlInfo_fieldOffsets, base);
}

}
#pragma pop
