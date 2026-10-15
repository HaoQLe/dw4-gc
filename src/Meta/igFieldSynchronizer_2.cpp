// igFieldSynchronizer: Alchemy class registration (0x801124BC..0x801126C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igFieldSynchronizer)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
void *fn_801126C4();
extern char igFieldSynchronizer_dependencies[8];
extern char igFieldSynchronizer_fieldNames[4];
extern char igFieldSynchronizer_fieldOffsets[4];
extern char igFieldSynchronizer_fieldStorage[4];
extern char igFieldSynchronizer_fieldTypes[4];
}

struct igFieldSynchronizerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    char unknown0C[4];
    inline ~igFieldSynchronizerInstance() { __vtable = igFieldSynchronizer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFieldSynchronizer)

void *igFieldSynchronizer_vtableRead()
{
    igFieldSynchronizerInstance object;
    object.__vtable = igFieldSynchronizer_vtable;
    object._views._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFieldSynchronizer)

void igFieldSynchronizer_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igFieldSynchronizer_meta, igObject_register,
                       fn_800237D0, igFieldSynchronizer_getMetaCall,
                       igFieldSynchronizer_className, 0xC,
                       igFieldSynchronizer_vtableRead, igFieldSynchronizer_fieldInit, 0, igFieldSynchronizer_dependencies);
}

META_GET_META_CALL(igFieldSynchronizer)

void igFieldSynchronizer_fieldInit()
{
    Meta::igMetaObject *meta = igFieldSynchronizer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFieldSynchronizer_fieldTypes, 1);
    Meta::igObjectRefMetaField *viewsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801126C4();
    viewsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    viewsField->_construct = true;
    meta_setupFields(meta, igFieldSynchronizer_fieldNames, igFieldSynchronizer_fieldStorage, igFieldSynchronizer_fieldOffsets, base);
}

}
#pragma pop
