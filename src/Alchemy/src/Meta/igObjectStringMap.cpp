// igObjectStringMap: Alchemy class registration (0x80028530..0x8002879C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igObjectStringMap)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80028F84();
void *fn_80029A5C();
extern char igObjectStringMap_dependencies[12];
extern char igObjectStringMap_fieldNames[8];
extern char igObjectStringMap_fieldOffsets[8];
extern char igObjectStringMap_fieldStorage[8];
extern char igObjectStringMap_fieldTypes[8];
}

struct igObjectStringMapInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _names;
    igObjectRefMember _data;
    inline ~igObjectStringMapInstance() { __vtable = igObjectStringMap_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectStringMap)

void *igObjectStringMap_vtableRead()
{
    igObjectStringMapInstance object;
    object.__vtable = igObjectStringMap_vtable;
    object._names._value = 0;
    object._data._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectStringMap)

void igObjectStringMap_register()
{
    fn_80021B94();
    meta_registerClass(0, &igObjectStringMap_meta, igObject_register,
                       fn_800237D0, igObjectStringMap_getMetaCall,
                       igObjectStringMap_className, 0x10,
                       igObjectStringMap_vtableRead, igObjectStringMap_fieldInit, 0, igObjectStringMap_dependencies);
}

META_GET_META_CALL(igObjectStringMap)

void igObjectStringMap_fieldInit()
{
    Meta::igMetaObject *meta = igObjectStringMap_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igObjectStringMap_fieldTypes, 2);
    Meta::igObjectRefMetaField *namesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    namesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    namesField->_construct = true;
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80028F84();
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    dataField->_construct = true;
    meta_setupFields(meta, igObjectStringMap_fieldNames, igObjectStringMap_fieldStorage, igObjectStringMap_fieldOffsets, base);
}

}
#pragma pop
