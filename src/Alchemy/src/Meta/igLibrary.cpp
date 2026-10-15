// igLibrary: Alchemy class registration (0x8002D9F4..0x8002DB4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLibrary)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
extern char igLibrary_fieldNames[4];
extern char igLibrary_fieldOffsets[4];
extern char igLibrary_fieldStorage[4];
extern char igLibrary_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLibrary)

META_ARK_REGISTER(igLibrary)

void igLibrary_register()
{
    fn_80021B94();
    meta_registerClass(1, &igLibrary_meta, igObject_register,
                       fn_800237D0, igLibrary_getMetaCall,
                       igLibrary_className, 0xC,
                       0, igLibrary_fieldInit, 0, 0);
}

META_GET_META_CALL(igLibrary)

void igLibrary_fieldInit()
{
    Meta::igMetaObject *meta = igLibrary_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLibrary_fieldTypes, 1);
    meta_setupFields(meta, igLibrary_fieldNames, igLibrary_fieldStorage, igLibrary_fieldOffsets, base);
}

}
#pragma pop
