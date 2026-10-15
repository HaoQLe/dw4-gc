// beLuaInfo: Alchemy class registration (0x802D18D0..0x802D1C20). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beLuaInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(beLuaDataList)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beLuaInfo_dependencies[8];
extern char beLuaInfo_fieldNames[];
extern char beLuaInfo_fieldOffsets[];
extern char beLuaInfo_fieldStorage[];
extern char beLuaInfo_fieldTypes[];
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

struct beLuaInfoInstance : Instance_804DCD14 {
    igObjectRefMember unknown1C;
    char unknown20[8];
    inline ~beLuaInfoInstance() { __vtable = beLuaInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beLuaInfo)
#pragma pop

void *beLuaInfo_vtableRead()
{
    beLuaInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beLuaInfo_vtable;
    object.unknown1C._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLuaInfo)

void beLuaInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLuaInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beLuaInfo_getMetaCall,
                       beLuaInfo_className, 0x20,
                       beLuaInfo_vtableRead, beLuaInfo_fieldInit, 0, beLuaInfo_dependencies);
}

META_GET_META_CALL(beLuaInfo)

void beLuaInfo_fieldInit()
{
    Meta::igMetaObject *meta = beLuaInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLuaInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dataListField->_metaObject = beLuaDataList_metaObject();
    dataListField->_construct = true;
    meta_setupFields(meta, beLuaInfo_fieldNames, beLuaInfo_fieldStorage, beLuaInfo_fieldOffsets, base);
}

}
#pragma pop
