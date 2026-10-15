// igStatisticsNodeUsage: Alchemy class registration (0x80130C64..0x80130CE4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igStatisticsNodeUsage)

extern "C" {
void *fn_80029F84();
extern char igStatisticsNodeUsage_fieldNames[4];
extern char igStatisticsNodeUsage_fieldOffsets[4];
extern char igStatisticsNodeUsage_fieldStorage[4];
extern char igStatisticsNodeUsage_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStatisticsNodeUsage_fieldInit()
{
    Meta::igMetaObject *meta = igStatisticsNodeUsage_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStatisticsNodeUsage_fieldTypes, 1);
    Meta::igObjectRefMetaField *nodeTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029F84();
    nodeTypeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igStatisticsNodeUsage_fieldNames, igStatisticsNodeUsage_fieldStorage, igStatisticsNodeUsage_fieldOffsets, base);
}

}
#pragma pop
