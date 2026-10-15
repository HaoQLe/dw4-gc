// beLayerInfo: Alchemy class registration (0x802D3228..0x802D3570). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beLayerInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(beLayerGroupList)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beLayerInfo_dependencies[8];
extern char beLayerInfo_fieldNames[];
extern char beLayerInfo_fieldOffsets[];
extern char beLayerInfo_fieldStorage[];
extern char beLayerInfo_fieldTypes[];
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

struct beLayerInfoInstance : Instance_804DCD14 {
    igObjectRefMember _groups;
    char unknown20[8];
    inline ~beLayerInfoInstance() { __vtable = beLayerInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beLayerInfo)
#pragma pop

void *beLayerInfo_vtableRead()
{
    beLayerInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beLayerInfo_vtable;
    object._groups._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLayerInfo)

void beLayerInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLayerInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beLayerInfo_getMetaCall,
                       beLayerInfo_className, 0x20,
                       beLayerInfo_vtableRead, beLayerInfo_fieldInit, 0, beLayerInfo_dependencies);
}

META_GET_META_CALL(beLayerInfo)

void beLayerInfo_fieldInit()
{
    Meta::igMetaObject *meta = beLayerInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLayerInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *groupsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    groupsField->_metaObject = beLayerGroupList_metaObject();
    meta_setupFields(meta, beLayerInfo_fieldNames, beLayerInfo_fieldStorage, beLayerInfo_fieldOffsets, base);
}

}
#pragma pop
