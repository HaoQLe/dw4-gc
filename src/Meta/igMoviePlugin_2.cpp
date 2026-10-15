// igMoviePlugin: Alchemy class registration (0x802AD8B0..0x802AD950). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igMoviePlugin)
META_DECLARE(igMovieManager)

extern "C" {
extern char igMoviePlugin_fieldNames[];
extern char igMoviePlugin_fieldOffsets[];
extern char igMoviePlugin_fieldStorage[];
extern char igMoviePlugin_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMoviePlugin_fieldInit()
{
    Meta::igMetaObject *meta = igMoviePlugin_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMoviePlugin_fieldTypes, 1);
    Meta::igObjectRefMetaField *movieManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    movieManagerField->_metaObject = igMovieManager_metaObject();
    meta_setupFields(meta, igMoviePlugin_fieldNames, igMoviePlugin_fieldStorage, igMoviePlugin_fieldOffsets, base);
}

}
#pragma pop
