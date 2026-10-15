// beNDMWShopDevice: Alchemy class registration (0x8032BD64..0x8032BE04). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopDevice)
META_DECLARE(beNDMWItemBaseList)

extern "C" {
extern char beNDMWShopDevice_fieldNames[];
extern char beNDMWShopDevice_fieldOffsets[];
extern char beNDMWShopDevice_fieldStorage[];
extern char beNDMWShopDevice_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWShopDevice_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopDevice_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopDevice_fieldTypes, 1);
    Meta::igObjectRefMetaField *salesListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    salesListField->_metaObject = beNDMWItemBaseList_metaObject();
    meta_setupFields(meta, beNDMWShopDevice_fieldNames, beNDMWShopDevice_fieldStorage, beNDMWShopDevice_fieldOffsets, base);
}

}
#pragma pop
