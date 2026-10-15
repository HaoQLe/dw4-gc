// igHistogramBase: Alchemy class registration (0x80216898..0x80216AA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igHistogramBase)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_800365B4();
void fn_80216620();
extern char igHistogramBase_dependencies[8];
extern char igHistogramBase_fieldNames[4];
extern char igHistogramBase_fieldOffsets[4];
extern char igHistogramBase_fieldStorage[4];
extern char igHistogramBase_fieldTypes[4];
}

struct igHistogramBaseInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _bins;
    char unknown0C[4];
    inline ~igHistogramBaseInstance() { __vtable = igHistogramBase_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHistogramBase)

void *igHistogramBase_vtableRead()
{
    igHistogramBaseInstance object;
    object.__vtable = igHistogramBase_vtable;
    object._bins._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHistogramBase)

void igHistogramBase_register()
{
    fn_80216620();
    meta_registerClass(0, &igHistogramBase_meta, igObject_register,
                       fn_800237D0, igHistogramBase_getMetaCall,
                       igHistogramBase_className, 0xC,
                       igHistogramBase_vtableRead, igHistogramBase_fieldInit, 0, igHistogramBase_dependencies);
}

META_GET_META_CALL(igHistogramBase)

void igHistogramBase_fieldInit()
{
    Meta::igMetaObject *meta = igHistogramBase_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igHistogramBase_fieldTypes, 1);
    Meta::igObjectRefMetaField *binsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    binsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    binsField->_construct = true;
    meta_setupFields(meta, igHistogramBase_fieldNames, igHistogramBase_fieldStorage, igHistogramBase_fieldOffsets, base);
}

}
#pragma pop
