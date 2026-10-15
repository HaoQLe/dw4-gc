// igCriMovieCodec: Alchemy class registration (0x802ABF48..0x802AC024). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igCriMovieCodec)

extern "C" {
void *fn_800C6F94();
void *fn_800CE788();
extern char igCriMovieCodec_fieldNames[];
extern char igCriMovieCodec_fieldOffsets[];
extern char igCriMovieCodec_fieldStorage[];
extern char igCriMovieCodec_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igCriMovieCodec_fieldInit()
{
    Meta::igMetaObject *meta = igCriMovieCodec_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCriMovieCodec_fieldTypes, 3);
    Meta::igBoolMetaField *initializedField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    initializedField->_persistent = false;
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    visualContextField->_persistent = false;
    Meta::igObjectRefMetaField *audioContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value6 = fn_800C6F94();
    audioContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value6);
    audioContextField->_persistent = false;
    meta_setupFields(meta, igCriMovieCodec_fieldNames, igCriMovieCodec_fieldStorage, igCriMovieCodec_fieldOffsets, base);
}

}
#pragma pop
