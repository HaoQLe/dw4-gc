// beNDMWMdlPlayer2: Alchemy class registration (0x803386F8..0x803387A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWMdlPlayer2)
META_DECLARE(bePadManager)

extern "C" {
extern char beNDMWMdlPlayer2_fieldNames[];
extern char beNDMWMdlPlayer2_fieldOffsets[];
extern char beNDMWMdlPlayer2_fieldStorage[];
extern char beNDMWMdlPlayer2_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWMdlPlayer2_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMdlPlayer2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMdlPlayer2_fieldTypes, 1);
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    meta_setupFields(meta, beNDMWMdlPlayer2_fieldNames, beNDMWMdlPlayer2_fieldStorage, beNDMWMdlPlayer2_fieldOffsets, base);
}

}
#pragma pop
