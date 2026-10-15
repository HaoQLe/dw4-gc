// igVertexBlending: Alchemy class registration (0x8012FEB8..0x8012FF34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igUnsignedIntMetaField.h>

META_DECLARE(igVertexBlending)

extern "C" {
void fn_80075AC4(void *,int);
extern char igVertexBlending_fieldNames[4];
extern char igVertexBlending_fieldOffsets[4];
extern char igVertexBlending_fieldStorage[4];
extern char igVertexBlending_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexBlending_fieldInit()
{
    Meta::igMetaObject *meta = igVertexBlending_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexBlending_fieldTypes, 1);
    Meta::igUnsignedIntMetaField *maxBlendMatrixCountField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base));
    fn_80075AC4(maxBlendMatrixCountField, 16);
    meta_setupFields(meta, igVertexBlending_fieldNames, igVertexBlending_fieldStorage, igVertexBlending_fieldOffsets, base);
}

}
#pragma pop
