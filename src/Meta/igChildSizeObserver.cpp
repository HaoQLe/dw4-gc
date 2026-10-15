// igChildSizeObserver: Alchemy class registration (0x801141D4..0x801143D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igChildSizeObserver)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
void *fn_80114424();
extern char igChildSizeObserver_dependencies[8];
extern char igChildSizeObserver_fieldNames[4];
extern char igChildSizeObserver_fieldOffsets[4];
extern char igChildSizeObserver_fieldStorage[4];
extern char igChildSizeObserver_fieldTypes[4];
extern char lbl_80495AD8[];
}

struct Instance_80114248_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igChildSizeObserver)

META_GET_META(igChildSizeObserver)

void *igChildSizeObserver_vtableRead()
{
    Instance_80114248_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igChildSizeObserver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igChildSizeObserver)

void igChildSizeObserver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igChildSizeObserver_meta, igView_register,
                       fn_8010E6DC, igChildSizeObserver_getMetaCall,
                       igChildSizeObserver_className, 0x10,
                       igChildSizeObserver_vtableRead, igChildSizeObserver_fieldInit, 0, igChildSizeObserver_dependencies);
}

META_GET_META_CALL(igChildSizeObserver)

void igChildSizeObserver_fieldInit()
{
    Meta::igMetaObject *meta = igChildSizeObserver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igChildSizeObserver_fieldTypes, 1);
    Meta::igObjectRefMetaField *boxAspectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80114424();
    boxAspectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    boxAspectField->_refCounted = false;
    meta_setupFields(meta, igChildSizeObserver_fieldNames, igChildSizeObserver_fieldStorage, igChildSizeObserver_fieldOffsets, base);
}

}
#pragma pop
