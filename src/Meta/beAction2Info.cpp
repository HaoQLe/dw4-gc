// beAction2Info: Alchemy class registration (0x802E5E54..0x802E622C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beAction2Info)
META_DECLARE(beAction2DataList)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beAction2Info_dependencies[16];
extern char beAction2Info_fieldNames[];
extern char beAction2Info_fieldOffsets[];
extern char beAction2Info_fieldStorage[];
extern char beAction2Info_fieldTypes[];
void *fn_801ADB98();
void *fn_801CAC30();
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

struct beAction2InfoInstance : Instance_804DCD14 {
    igObjectRefMember _switch;
    igObjectRefMember _animationDatabase;
    igObjectRefMember unknown24;
    char unknown28[8];
    inline ~beAction2InfoInstance() { __vtable = beAction2Info_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beAction2Info)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beAction2Info_vtableRead()
{
    beAction2InfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beAction2Info_vtable;
    object._switch._value = 0;
    object._animationDatabase._value = 0;
    object.unknown24._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beAction2Info)

void beAction2Info_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2Info_meta, beBaseInfo_register,
                       fn_802B2E3C, beAction2Info_getMetaCall,
                       beAction2Info_className, 0x28,
                       beAction2Info_vtableRead, beAction2Info_fieldInit, 0, beAction2Info_dependencies);
}

META_GET_META_CALL(beAction2Info)

void beAction2Info_fieldInit()
{
    Meta::igMetaObject *meta = beAction2Info_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAction2Info_fieldTypes, 3);
    Meta::igObjectRefMetaField *switchField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801ADB98();
    switchField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *animationDatabaseField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_801CAC30();
    animationDatabaseField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    dataListField->_metaObject = beAction2DataList_metaObject();
    dataListField->_construct = true;
    meta_setupFields(meta, beAction2Info_fieldNames, beAction2Info_fieldStorage, beAction2Info_fieldOffsets, base);
}

}
#pragma pop
