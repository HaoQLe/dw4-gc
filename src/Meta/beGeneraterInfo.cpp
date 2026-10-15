// beGeneraterInfo: Alchemy class registration (0x802D6F94..0x802D72E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beGeneraterInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(beGeneraterDataList)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beGeneraterInfo_dependencies[8];
extern char beGeneraterInfo_fieldNames[];
extern char beGeneraterInfo_fieldOffsets[];
extern char beGeneraterInfo_fieldStorage[];
extern char beGeneraterInfo_fieldTypes[];
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

struct beGeneraterInfoInstance : Instance_804DCD14 {
    igObjectRefMember unknown1C;
    char unknown20[8];
    inline ~beGeneraterInfoInstance() { __vtable = beGeneraterInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beGeneraterInfo)

void *beGeneraterInfo_vtableRead()
{
    beGeneraterInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beGeneraterInfo_vtable;
    object.unknown1C._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beGeneraterInfo)

void beGeneraterInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beGeneraterInfo_getMetaCall,
                       beGeneraterInfo_className, 0x20,
                       beGeneraterInfo_vtableRead, beGeneraterInfo_fieldInit, 0, beGeneraterInfo_dependencies);
}

META_GET_META_CALL(beGeneraterInfo)

void beGeneraterInfo_fieldInit()
{
    Meta::igMetaObject *meta = beGeneraterInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beGeneraterInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dataListField->_metaObject = beGeneraterDataList_metaObject();
    dataListField->_construct = true;
    meta_setupFields(meta, beGeneraterInfo_fieldNames, beGeneraterInfo_fieldStorage, beGeneraterInfo_fieldOffsets, base);
}

}
#pragma pop
