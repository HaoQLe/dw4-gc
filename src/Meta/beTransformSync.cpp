// beTransformSync: Alchemy class registration (0x802B558C..0x802B56F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beTransformSync)
META_DECLARE(igTransform)

extern "C" {
extern char beTransformSync_dependencies[8];
extern char beTransformSync_fieldNames[];
extern char beTransformSync_fieldOffsets[];
extern char beTransformSync_fieldStorage[];
extern char beTransformSync_fieldTypes[];
void *fn_801AC2D4();
void *fn_801BC078();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beTransformSync)

void beTransformSync_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTransformSync_meta, igTransform_register,
                       fn_801BC078, beTransformSync_getMetaCall,
                       beTransformSync_className, 0x70,
                       beTransformSync_vtableRead, beTransformSync_fieldInit, 0, beTransformSync_dependencies);
}

META_GET_META_CALL(beTransformSync)

void beTransformSync_fieldInit()
{
    Meta::igMetaObject *meta = beTransformSync_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTransformSync_fieldTypes, 1);
    Meta::igObjectRefMetaField *syncTransformListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801AC2D4();
    syncTransformListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    syncTransformListField->_construct = true;
    meta_setupFields(meta, beTransformSync_fieldNames, beTransformSync_fieldStorage, beTransformSync_fieldOffsets, base);
}

}
#pragma pop
