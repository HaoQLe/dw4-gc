// beNDMWMdlPlayerInfoWork: Alchemy class registration (0x80339494..0x80339534). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWMdlPlayerInfoWork)

extern "C" {
extern char beNDMWMdlPlayerInfoWork_fieldNames[];
extern char beNDMWMdlPlayerInfoWork_fieldOffsets[];
extern char beNDMWMdlPlayerInfoWork_fieldStorage[];
extern char beNDMWMdlPlayerInfoWork_fieldTypes[];
void *fn_800365B4();
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWMdlPlayerInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMdlPlayerInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMdlPlayerInfoWork_fieldTypes, 8);
    Meta::igObjectRefMetaField *turnAtkTimerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    turnAtkTimerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beNDMWMdlPlayerInfoWork_fieldNames, beNDMWMdlPlayerInfoWork_fieldStorage, beNDMWMdlPlayerInfoWork_fieldOffsets, base);
}

}
#pragma pop
