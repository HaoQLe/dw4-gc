// beBinDataObject: Alchemy class registration (0x802B8780..0x802B8820). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(beBinDataObject)

extern "C" {
extern char beBinDataObject_fieldNames[];
extern char beBinDataObject_fieldOffsets[];
extern char beBinDataObject_fieldStorage[];
extern char beBinDataObject_fieldTypes[];
void *fn_80037E48();
}

#pragma push
#pragma auto_inline off
extern "C" {

void beBinDataObject_fieldInit()
{
    Meta::igMetaObject *meta = beBinDataObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beBinDataObject_fieldTypes, 2);
    Meta::igMemoryRefMetaField *dataBufferField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80037E48();
    dataBufferField->_memType = reinterpret_cast<Meta::igMetaField *>(value_value3);
    meta_setupFields(meta, beBinDataObject_fieldNames, beBinDataObject_fieldStorage, beBinDataObject_fieldOffsets, base);
}

}
#pragma pop
