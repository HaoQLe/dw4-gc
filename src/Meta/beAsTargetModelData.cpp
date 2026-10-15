// beAsTargetModelData: Alchemy class registration (0x802E48C0..0x802E4B54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beAsTargetModelData)
META_DECLARE(beActionStarterDataList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beAsTargetModelData_dependencies[8];
extern char beAsTargetModelData_fieldNames[];
extern char beAsTargetModelData_fieldOffsets[];
extern char beAsTargetModelData_fieldStorage[];
extern char beAsTargetModelData_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beAsTargetModelDataInstance : igNamedObjectInstance {
    igObjectRefMember _dataList;
    inline ~beAsTargetModelDataInstance() { __vtable = beAsTargetModelData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beAsTargetModelData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beAsTargetModelData_vtableRead()
{
    beAsTargetModelDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beAsTargetModelData_vtable;
    object._dataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beAsTargetModelData)

void beAsTargetModelData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAsTargetModelData_meta, igNamedObject_register,
                       fn_80023CF4, beAsTargetModelData_getMetaCall,
                       beAsTargetModelData_className, 0x10,
                       beAsTargetModelData_vtableRead, beAsTargetModelData_fieldInit, 0, beAsTargetModelData_dependencies);
}

META_GET_META_CALL(beAsTargetModelData)

void beAsTargetModelData_fieldInit()
{
    Meta::igMetaObject *meta = beAsTargetModelData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAsTargetModelData_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dataListField->_metaObject = beActionStarterDataList_metaObject();
    meta_setupFields(meta, beAsTargetModelData_fieldNames, beAsTargetModelData_fieldStorage, beAsTargetModelData_fieldOffsets, base);
}

}
#pragma pop
