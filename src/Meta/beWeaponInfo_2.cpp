// beWeaponInfo: Alchemy class registration (0x802B2E4C..0x802B2F34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beWeaponInfo)
META_DECLARE(beWeaponSeqDataList)

extern "C" {
extern char beWeaponInfo_fieldNames[];
extern char beWeaponInfo_fieldOffsets[];
extern char beWeaponInfo_fieldStorage[];
extern char beWeaponInfo_fieldTypes[];
void *fn_80029A5C();
void *fn_801B7354();
}

#pragma push
#pragma auto_inline off
extern "C" {

void beWeaponInfo_fieldInit()
{
    Meta::igMetaObject *meta = beWeaponInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beWeaponInfo_fieldTypes, 3);
    Meta::igObjectRefMetaField *nodeListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B7354();
    nodeListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    nodeListField->_construct = true;
    Meta::igObjectRefMetaField *boneNameListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80029A5C();
    boneNameListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    boneNameListField->_construct = true;
    Meta::igObjectRefMetaField *seqDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    seqDataListField->_metaObject = beWeaponSeqDataList_metaObject();
    seqDataListField->_construct = true;
    meta_setupFields(meta, beWeaponInfo_fieldNames, beWeaponInfo_fieldStorage, beWeaponInfo_fieldOffsets, base);
}

}
#pragma pop
