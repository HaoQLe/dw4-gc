// beTextureCtrlInfo: Alchemy class registration (0x802B6070..0x802B63C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beTextureCtrlInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beTextureCtrlInfo_dependencies[8];
extern char beTextureCtrlInfo_fieldNames[];
extern char beTextureCtrlInfo_fieldOffsets[];
extern char beTextureCtrlInfo_fieldStorage[];
extern char beTextureCtrlInfo_fieldTypes[];
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

struct beTextureCtrlInfoInstance : Instance_804DCD14 {
    char unknown1C[4];
    igObjectRefMember unknown20;
    char unknown24[4];
    inline ~beTextureCtrlInfoInstance() { __vtable = beTextureCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beTextureCtrlInfo)
#pragma pop

void *beTextureCtrlInfo_vtableRead()
{
    beTextureCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beTextureCtrlInfo_vtable;
    object.unknown20._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beTextureCtrlInfo)

void beTextureCtrlInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTextureCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beTextureCtrlInfo_getMetaCall,
                       beTextureCtrlInfo_className, 0x24,
                       beTextureCtrlInfo_vtableRead, beTextureCtrlInfo_fieldInit, 0, beTextureCtrlInfo_dependencies);
}

META_GET_META_CALL(beTextureCtrlInfo)

void beTextureCtrlInfo_fieldInit()
{
    Meta::igMetaObject *meta = beTextureCtrlInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTextureCtrlInfo_fieldTypes, 2);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_80029A5C();
    dataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataListField->_construct = true;
    meta_setupFields(meta, beTextureCtrlInfo_fieldNames, beTextureCtrlInfo_fieldStorage, beTextureCtrlInfo_fieldOffsets, base);
}

}
#pragma pop
