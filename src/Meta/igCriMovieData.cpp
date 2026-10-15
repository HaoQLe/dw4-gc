// igCriMovieData: Alchemy class registration (0x802AC024..0x802AC2B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igRawRefMetaField.h>
#include <meta/igStructMetaField.h>

META_DECLARE(igCriMovieData)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_802AA788();
extern char igCriMovieData_fieldNames[];
extern char igCriMovieData_fieldOffsets[];
extern char igCriMovieData_fieldStorage[];
extern char igCriMovieData_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(igCriMovieData)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(igCriMovieData)
#pragma pop

void *igCriMovieData_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = igCriMovieData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCriMovieData)

void igCriMovieData_register()
{
    fn_802AA788();
    meta_registerClass(0, &igCriMovieData_meta, igObject_register,
                       fn_800237D0, igCriMovieData_getMetaCall,
                       igCriMovieData_className, 0x1C,
                       igCriMovieData_vtableRead, igCriMovieData_fieldInit, 0, 0);
}

META_GET_META_CALL(igCriMovieData)

void igCriMovieData_fieldInit()
{
    Meta::igMetaObject *meta = igCriMovieData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCriMovieData_fieldTypes, 5);
    Meta::igStructMetaField *mwplyField = static_cast<Meta::igStructMetaField *>(meta_field(meta, base));
    mwplyField->_size = 4;
    mwplyField->_persistent = false;
    Meta::igRawRefMetaField *cprmbufField = static_cast<Meta::igRawRefMetaField *>(meta_field(meta, base + 1));
    cprmbufField->_persistent = false;
    Meta::igStructMetaField *adxtField = static_cast<Meta::igStructMetaField *>(meta_field(meta, base + 2));
    adxtField->_size = 4;
    adxtField->_persistent = false;
    Meta::igRawRefMetaField *adxworkField = static_cast<Meta::igRawRefMetaField *>(meta_field(meta, base + 3));
    adxworkField->_persistent = false;
    Meta::igStructMetaField *macroFunctionField = static_cast<Meta::igStructMetaField *>(meta_field(meta, base + 4));
    macroFunctionField->_size = 4;
    macroFunctionField->_persistent = false;
    meta_setupFields(meta, igCriMovieData_fieldNames, igCriMovieData_fieldStorage, igCriMovieData_fieldOffsets, base);
}

}
#pragma pop
