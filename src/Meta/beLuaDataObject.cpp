// beLuaDataObject: Alchemy class registration (0x802D2200..0x802D2444). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(beLuaDataObject)
META_DECLARE(igObject)

extern "C" {
extern char beLuaDataObject_fieldNames[];
extern char beLuaDataObject_fieldOffsets[];
extern char beLuaDataObject_fieldStorage[];
extern char beLuaDataObject_fieldTypes[];
void *fn_800237D0();
void *fn_80037E48();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beLuaDataObject)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beLuaDataObject)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beLuaDataObject_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = beLuaDataObject_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beLuaDataObject)

void beLuaDataObject_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLuaDataObject_meta, igObject_register,
                       fn_800237D0, beLuaDataObject_getMetaCall,
                       beLuaDataObject_className, 0x10,
                       beLuaDataObject_vtableRead, beLuaDataObject_fieldInit, 0, 0);
}

META_GET_META_CALL(beLuaDataObject)

void beLuaDataObject_fieldInit()
{
    Meta::igMetaObject *meta = beLuaDataObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLuaDataObject_fieldTypes, 2);
    Meta::igMemoryRefMetaField *dataField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_80037E48();
    dataField->_memType = reinterpret_cast<Meta::igMetaField *>(value_value3);
    meta_setupFields(meta, beLuaDataObject_fieldNames, beLuaDataObject_fieldStorage, beLuaDataObject_fieldOffsets, base);
}

}
#pragma pop
