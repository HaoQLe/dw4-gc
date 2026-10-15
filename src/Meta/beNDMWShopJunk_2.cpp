// beNDMWShopJunk: Alchemy class registration (0x8032B8B4..0x8032B954). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopJunk)
META_DECLARE(beNDMWItemBaseList)

extern "C" {
extern char beNDMWShopJunk_fieldNames[];
extern char beNDMWShopJunk_fieldOffsets[];
extern char beNDMWShopJunk_fieldStorage[];
extern char beNDMWShopJunk_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWShopJunk_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopJunk_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopJunk_fieldTypes, 3);
    Meta::igObjectRefMetaField *junkItemListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    junkItemListField->_metaObject = beNDMWItemBaseList_metaObject();
    meta_setupFields(meta, beNDMWShopJunk_fieldNames, beNDMWShopJunk_fieldStorage, beNDMWShopJunk_fieldOffsets, base);
}

}
#pragma pop
