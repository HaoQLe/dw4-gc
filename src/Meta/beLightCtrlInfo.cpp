// beLightCtrlInfo: Alchemy class registration (0x802D2A38..0x802D2D88). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beLightCtrlInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igLightSetList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beLightCtrlInfo_dependencies[8];
extern char beLightCtrlInfo_fieldNames[];
extern char beLightCtrlInfo_fieldOffsets[];
extern char beLightCtrlInfo_fieldStorage[];
extern char beLightCtrlInfo_fieldTypes[];
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

struct beLightCtrlInfoInstance : Instance_804DCD14 {
    igObjectRefMember _lightSetList;
    char unknown20[8];
    inline ~beLightCtrlInfoInstance() { __vtable = beLightCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beLightCtrlInfo)
#pragma pop

void *beLightCtrlInfo_vtableRead()
{
    beLightCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beLightCtrlInfo_vtable;
    object._lightSetList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLightCtrlInfo)

void beLightCtrlInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLightCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beLightCtrlInfo_getMetaCall,
                       beLightCtrlInfo_className, 0x20,
                       beLightCtrlInfo_vtableRead, beLightCtrlInfo_fieldInit, 0, beLightCtrlInfo_dependencies);
}

META_GET_META_CALL(beLightCtrlInfo)

void beLightCtrlInfo_fieldInit()
{
    Meta::igMetaObject *meta = beLightCtrlInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLightCtrlInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *lightSetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    lightSetListField->_metaObject = igLightSetList_metaObject();
    lightSetListField->_construct = true;
    meta_setupFields(meta, beLightCtrlInfo_fieldNames, beLightCtrlInfo_fieldStorage, beLightCtrlInfo_fieldOffsets, base);
}

}
#pragma pop
