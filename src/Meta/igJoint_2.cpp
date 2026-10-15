// igJoint: Alchemy class registration (0x801BC080..0x801BC100). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igJoint)

extern "C" {
void *fn_80218120();
extern char igJoint_fieldNames[8];
extern char igJoint_fieldOffsets[8];
extern char igJoint_fieldStorage[8];
extern char igJoint_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igJoint_fieldInit()
{
    Meta::igMetaObject *meta = igJoint_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igJoint_fieldTypes, 2);
    Meta::igObjectRefMetaField *blendingMatrixField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_80218120();
    blendingMatrixField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igJoint_fieldNames, igJoint_fieldStorage, igJoint_fieldOffsets, base);
}

}
#pragma pop
