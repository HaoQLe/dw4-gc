// beGeneraterPlayerData: Alchemy class registration (0x802D7B18..0x802D7DC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beGeneraterPlayerData)
META_DECLARE(beGeneraterItemDataList)
META_DECLARE(igObject)

extern "C" {
extern char beGeneraterPlayerData_dependencies[8];
extern char beGeneraterPlayerData_fieldNames[];
extern char beGeneraterPlayerData_fieldOffsets[];
extern char beGeneraterPlayerData_fieldStorage[];
extern char beGeneraterPlayerData_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beGeneraterPlayerDataInstance : igObjectInstance {
    char unknown04[12];
    igObjectRefMember _itemDataList;
    igObjectRefMember _itemLastDataList;
    char unknown18[8];
    inline ~beGeneraterPlayerDataInstance() { __vtable = beGeneraterPlayerData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beGeneraterPlayerData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beGeneraterPlayerData_vtableRead()
{
    beGeneraterPlayerDataInstance object;
    object.__vtable = beGeneraterPlayerData_vtable;
    object._itemDataList._value = 0;
    object._itemLastDataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beGeneraterPlayerData)

void beGeneraterPlayerData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterPlayerData_meta, igObject_register,
                       fn_800237D0, beGeneraterPlayerData_getMetaCall,
                       beGeneraterPlayerData_className, 0x18,
                       beGeneraterPlayerData_vtableRead, beGeneraterPlayerData_fieldInit, 0, beGeneraterPlayerData_dependencies);
}

META_GET_META_CALL(beGeneraterPlayerData)

void beGeneraterPlayerData_fieldInit()
{
    Meta::igMetaObject *meta = beGeneraterPlayerData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beGeneraterPlayerData_fieldTypes, 4);
    Meta::igObjectRefMetaField *itemDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    itemDataListField->_metaObject = beGeneraterItemDataList_metaObject();
    itemDataListField->_construct = true;
    Meta::igObjectRefMetaField *itemLastDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    Meta::igMetaObject *beGeneraterItemDataListMeta_ = beGeneraterItemDataList_metaObject();
    itemLastDataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beGeneraterItemDataListMeta_);
    itemLastDataListField->_construct = true;
    meta_setupFields(meta, beGeneraterPlayerData_fieldNames, beGeneraterPlayerData_fieldStorage, beGeneraterPlayerData_fieldOffsets, base);
}

}
#pragma pop
