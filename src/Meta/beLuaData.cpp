// beLuaData: Alchemy class registration (0x802D1DF0..0x802D2084). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beLuaData)
META_DECLARE(beLuaDataObject)
META_DECLARE(igNamedObject)

extern "C" {
extern char beLuaData_dependencies[8];
extern char beLuaData_fieldNames[];
extern char beLuaData_fieldOffsets[];
extern char beLuaData_fieldStorage[];
extern char beLuaData_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beLuaDataInstance : igNamedObjectInstance {
    igObjectRefMember _dataObject;
    inline ~beLuaDataInstance() { __vtable = beLuaData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beLuaData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beLuaData_vtableRead()
{
    beLuaDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beLuaData_vtable;
    object._dataObject._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beLuaData)

void beLuaData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLuaData_meta, igNamedObject_register,
                       fn_80023CF4, beLuaData_getMetaCall,
                       beLuaData_className, 0x10,
                       beLuaData_vtableRead, beLuaData_fieldInit, 0, beLuaData_dependencies);
}

META_GET_META_CALL(beLuaData)

void beLuaData_fieldInit()
{
    Meta::igMetaObject *meta = beLuaData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLuaData_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dataObjectField->_metaObject = beLuaDataObject_metaObject();
    meta_setupFields(meta, beLuaData_fieldNames, beLuaData_fieldStorage, beLuaData_fieldOffsets, base);
}

}
#pragma pop
