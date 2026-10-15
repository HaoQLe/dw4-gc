// beHitLandModelTraversal: Alchemy class registration (0x802D53B8..0x802D5458). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beHitLandModelTraversal)
META_DECLARE(beHitLandModelOrder)

extern "C" {
extern char beHitLandModelTraversal_fieldNames[];
extern char beHitLandModelTraversal_fieldOffsets[];
extern char beHitLandModelTraversal_fieldStorage[];
extern char beHitLandModelTraversal_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beHitLandModelTraversal_fieldInit()
{
    Meta::igMetaObject *meta = beHitLandModelTraversal_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beHitLandModelTraversal_fieldTypes, 1);
    Meta::igObjectRefMetaField *orderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    orderField->_metaObject = beHitLandModelOrder_metaObject();
    meta_setupFields(meta, beHitLandModelTraversal_fieldNames, beHitLandModelTraversal_fieldStorage, beHitLandModelTraversal_fieldOffsets, base);
}

}
#pragma pop
