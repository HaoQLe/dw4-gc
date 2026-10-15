// igVectorConstantAttr: Alchemy class registration (0x800AD710..0x800AD790). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(igVectorConstantAttr)

extern "C" {
void *fn_800C4BF8(int);
extern char igVectorConstantAttr_fieldNames[8];
extern char igVectorConstantAttr_fieldOffsets[8];
extern char igVectorConstantAttr_fieldStorage[8];
extern char igVectorConstantAttr_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVectorConstantAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVectorConstantAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVectorConstantAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C4BF8);
    meta_setupFields(meta, igVectorConstantAttr_fieldNames, igVectorConstantAttr_fieldStorage, igVectorConstantAttr_fieldOffsets, base);
}

}
#pragma pop
