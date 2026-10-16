// igAliasMemoryPool: Alchemy class registration (0x80038E9C..0x80038F58). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAliasMemoryPool)
META_DECLARE(igMemoryPool)

extern "C" {
void *fn_80038DC0();
void *fn_80038F58();
extern char igAliasMemoryPool_dependencies[16];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igAliasMemoryPool)

void igAliasMemoryPool_register()
{
    meta_registerClass(0, &igAliasMemoryPool_meta, igMemoryPool_register,
                       fn_80038F58, igAliasMemoryPool_getMetaCall,
                       igAliasMemoryPool_className, 0xB8,
                       fn_80038DC0, igAliasMemoryPool_fieldInit, 0, igAliasMemoryPool_dependencies);
}

META_GET_META_CALL(igAliasMemoryPool)

}
#pragma pop
