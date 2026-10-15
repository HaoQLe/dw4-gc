// beGeneraterItemData: Alchemy class registration (0x802D7F90..0x802D822C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beGeneraterItemData)
META_DECLARE(beGeneraterItemDataOneList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beGeneraterItemData_dependencies[8];
extern char beGeneraterItemData_fieldNames[];
extern char beGeneraterItemData_fieldOffsets[];
extern char beGeneraterItemData_fieldStorage[];
extern char beGeneraterItemData_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beGeneraterItemDataInstance : igNamedObjectInstance {
    igObjectRefMember _dataList;
    inline ~beGeneraterItemDataInstance() { __vtable = beGeneraterItemData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beGeneraterItemData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beGeneraterItemData_vtableRead()
{
    beGeneraterItemDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beGeneraterItemData_vtable;
    object._dataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beGeneraterItemData)

void beGeneraterItemData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterItemData_meta, igNamedObject_register,
                       fn_80023CF4, beGeneraterItemData_getMetaCall,
                       beGeneraterItemData_className, 0x10,
                       beGeneraterItemData_vtableRead, beGeneraterItemData_fieldInit, 0, beGeneraterItemData_dependencies);
}

META_GET_META_CALL(beGeneraterItemData)

void beGeneraterItemData_fieldInit()
{
    Meta::igMetaObject *meta = beGeneraterItemData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beGeneraterItemData_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dataListField->_metaObject = beGeneraterItemDataOneList_metaObject();
    dataListField->_construct = true;
    meta_setupFields(meta, beGeneraterItemData_fieldNames, beGeneraterItemData_fieldStorage, beGeneraterItemData_fieldOffsets, base);
}

}
#pragma pop
