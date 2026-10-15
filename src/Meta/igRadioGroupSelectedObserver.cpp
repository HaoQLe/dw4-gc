// igRadioGroupSelectedObserver: Alchemy class registration (0x8010E7A8..0x8010E974). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igRadioGroupSelectedObserver)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
void *fn_8010E974();
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char lbl_80495AD8[];
}

struct Instance_8010E7E4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRadioGroupSelectedObserver)

void *igRadioGroupSelectedObserver_vtableRead()
{
    Instance_8010E7E4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igRadioGroupSelectedObserver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRadioGroupSelectedObserver)

void igRadioGroupSelectedObserver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igRadioGroupSelectedObserver_meta, igView_register,
                       fn_8010E6DC, igRadioGroupSelectedObserver_getMetaCall,
                       igRadioGroupSelectedObserver_className, 0x10,
                       igRadioGroupSelectedObserver_vtableRead, igRadioGroupSelectedObserver_fieldInit, 0, igRadioGroupSelectedObserver_dependencies);
}

META_GET_META_CALL(igRadioGroupSelectedObserver)

void igRadioGroupSelectedObserver_fieldInit()
{
    Meta::igMetaObject *meta = igRadioGroupSelectedObserver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRadioGroupSelectedObserver_fieldTypes, 1);
    Meta::igObjectRefMetaField *groupField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010E974();
    groupField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    groupField->_refCounted = false;
    meta_setupFields(meta, igRadioGroupSelectedObserver_fieldNames, igRadioGroupSelectedObserver_fieldStorage, igRadioGroupSelectedObserver_fieldOffsets, base);
}

}
#pragma pop
