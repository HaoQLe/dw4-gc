// igMemoryPool: Alchemy class registration (0x8002BF0C..0x8002BFF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryPool)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMemoryPool)

META_ARK_REGISTER(igMemoryPool)

void igMemoryPool_register()
{
    meta_registerClass(1, &igMemoryPool_meta, igObject_register,
                       fn_800237D0, igMemoryPool_getMetaCall,
                       igMemoryPool_className, 0x70,
                       0, igMemoryPool_fieldInit, 0, 0);
}

META_GET_META_CALL(igMemoryPool)

}
#pragma pop
