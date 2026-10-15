// igRadioGroupModel: Alchemy class registration (0x8010EE74..0x8010EEF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(igRadioGroupModel)

extern "C" {
void fn_80053650(void *,int);
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igRadioGroupModel_fieldInit()
{
    Meta::igMetaObject *meta = igRadioGroupModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRadioGroupModel_fieldTypes, 1);
    Meta::igIntMetaField *selectedField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(selectedField, -1);
    meta_setupFields(meta, igRadioGroupModel_fieldNames, igRadioGroupModel_fieldStorage, igRadioGroupModel_fieldOffsets, base);
}

}
#pragma pop
