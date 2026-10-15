// beMeterCtrlInfo: Alchemy class registration (0x802CD4FC..0x802CD84C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMeterCtrlInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMeterCtrlInfo_dependencies[8];
extern char beMeterCtrlInfo_fieldNames[];
extern char beMeterCtrlInfo_fieldOffsets[];
extern char beMeterCtrlInfo_fieldStorage[];
extern char beMeterCtrlInfo_fieldTypes[];
void *fn_80029A5C();
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

struct beMeterCtrlInfoInstance : Instance_804DCD14 {
    igObjectRefMember _oneDataList;
    char unknown20[8];
    inline ~beMeterCtrlInfoInstance() { __vtable = beMeterCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beMeterCtrlInfo)
#pragma pop

void *beMeterCtrlInfo_vtableRead()
{
    beMeterCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beMeterCtrlInfo_vtable;
    object._oneDataList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMeterCtrlInfo)

void beMeterCtrlInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMeterCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beMeterCtrlInfo_getMetaCall,
                       beMeterCtrlInfo_className, 0x20,
                       beMeterCtrlInfo_vtableRead, beMeterCtrlInfo_fieldInit, 0, beMeterCtrlInfo_dependencies);
}

META_GET_META_CALL(beMeterCtrlInfo)

void beMeterCtrlInfo_fieldInit()
{
    Meta::igMetaObject *meta = beMeterCtrlInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMeterCtrlInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *oneDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    oneDataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    oneDataListField->_construct = true;
    meta_setupFields(meta, beMeterCtrlInfo_fieldNames, beMeterCtrlInfo_fieldStorage, beMeterCtrlInfo_fieldOffsets, base);
}

}
#pragma pop
