// beActionStarterInfo: Alchemy class registration (0x802E43A8..0x802E46F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beActionStarterInfo)
META_DECLARE(beAsTargetModelDataList)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beActionStarterInfo_dependencies[8];
extern char beActionStarterInfo_fieldNames[];
extern char beActionStarterInfo_fieldOffsets[];
extern char beActionStarterInfo_fieldStorage[];
extern char beActionStarterInfo_fieldTypes[];
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

struct beActionStarterInfoInstance : Instance_804DCD14 {
    igObjectRefMember _modelList;
    char unknown20[8];
    inline ~beActionStarterInfoInstance() { __vtable = beActionStarterInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beActionStarterInfo)
#pragma pop

void *beActionStarterInfo_vtableRead()
{
    beActionStarterInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beActionStarterInfo_vtable;
    object._modelList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beActionStarterInfo)

void beActionStarterInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beActionStarterInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beActionStarterInfo_getMetaCall,
                       beActionStarterInfo_className, 0x20,
                       beActionStarterInfo_vtableRead, beActionStarterInfo_fieldInit, 0, beActionStarterInfo_dependencies);
}

META_GET_META_CALL(beActionStarterInfo)

void beActionStarterInfo_fieldInit()
{
    Meta::igMetaObject *meta = beActionStarterInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beActionStarterInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *modelListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    modelListField->_metaObject = beAsTargetModelDataList_metaObject();
    meta_setupFields(meta, beActionStarterInfo_fieldNames, beActionStarterInfo_fieldStorage, beActionStarterInfo_fieldOffsets, base);
}

}
#pragma pop
