// igMemoryRefMetaField: Alchemy class registration (0x8002AE84..0x8002AF40). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryRefMetaField)
META_DECLARE(igRefMetaField)

extern "C" {
void *fn_80025494();
void *fn_8002AD90();
extern char igMemoryRefMetaField_dependencies[12];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igMemoryRefMetaField)

void igMemoryRefMetaField_register()
{
    meta_registerClass(0, &igMemoryRefMetaField_meta, igRefMetaField_register,
                       fn_80025494, igMemoryRefMetaField_getMetaCall,
                       igMemoryRefMetaField_className, 0x50,
                       fn_8002AD90, igMemoryRefMetaField_fieldInit, 0, igMemoryRefMetaField_dependencies);
}

META_GET_META_CALL(igMemoryRefMetaField)

}
#pragma pop
