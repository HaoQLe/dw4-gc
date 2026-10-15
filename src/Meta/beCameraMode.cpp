// beCameraMode: Alchemy class registration (0x802E171C..0x802E17F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCameraMode)
META_DECLARE(igInsightCore)

extern "C" {
extern char beCameraMode_fieldNames[];
extern char beCameraMode_fieldOffsets[];
extern char beCameraMode_fieldStorage[];
extern char beCameraMode_fieldTypes[];
void *fn_801BFC74();
void *fn_801C5E38();
}

#pragma push
#pragma auto_inline off
extern "C" {

void beCameraMode_fieldInit()
{
    Meta::igMetaObject *meta = beCameraMode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCameraMode_fieldTypes, 8);
    Meta::igObjectRefMetaField *cameraPathField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801BFC74();
    cameraPathField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *cameraField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_801C5E38();
    cameraField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    Meta::igObjectRefMetaField *insightField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    insightField->_metaObject = igInsightCore_metaObject();
    insightField->_refCounted = false;
    meta_setupFields(meta, beCameraMode_fieldNames, beCameraMode_fieldStorage, beCameraMode_fieldOffsets, base);
}

}
#pragma pop
