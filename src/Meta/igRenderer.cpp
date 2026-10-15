// igRenderer: Alchemy class registration (0x8010E288..0x8010E3FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igRenderer)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_800CE788();
void fn_8010CBD4();
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldOffsets[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRenderer)

META_ARK_REGISTER(igRenderer)

void igRenderer_register()
{
    fn_8010CBD4();
    meta_registerClass(1, &igRenderer_meta, igObject_register,
                       fn_800237D0, igRenderer_getMetaCall,
                       igRenderer_className, 0xC,
                       0, igRenderer_fieldInit, 0, igRenderer_dependencies);
}

META_GET_META_CALL(igRenderer)

void igRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRenderer_fieldTypes, 1);
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igRenderer_fieldNames, igRenderer_fieldStorage, igRenderer_fieldOffsets, base);
}

}
#pragma pop
