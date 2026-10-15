// beWeapon: Alchemy class registration (0x802B382C..0x802B38CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beWeapon)
META_DECLARE(beWeaponAttachDataList)

extern "C" {
extern char beWeapon_fieldNames[];
extern char beWeapon_fieldOffsets[];
extern char beWeapon_fieldStorage[];
extern char beWeapon_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beWeapon_fieldInit()
{
    Meta::igMetaObject *meta = beWeapon_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beWeapon_fieldTypes, 1);
    Meta::igObjectRefMetaField *attachDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    attachDataListField->_metaObject = beWeaponAttachDataList_metaObject();
    meta_setupFields(meta, beWeapon_fieldNames, beWeapon_fieldStorage, beWeapon_fieldOffsets, base);
}

}
#pragma pop
