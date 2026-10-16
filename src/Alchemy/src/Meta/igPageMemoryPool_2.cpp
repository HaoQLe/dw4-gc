// igPageMemoryPool: Alchemy class registration (0x8003922C..0x800392E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPageMemoryPool)
META_DECLARE(igMemoryPool)

extern "C" {
void *fn_80038F58();
void *fn_80039180();
extern char igPageMemoryPool_dependencies[12];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igPageMemoryPool)

void igPageMemoryPool_register()
{
    meta_registerClass(0, &igPageMemoryPool_meta, igMemoryPool_register,
                       fn_80038F58, igPageMemoryPool_getMetaCall,
                       igPageMemoryPool_className, 0x110,
                       fn_80039180, igPageMemoryPool_fieldInit, 0, igPageMemoryPool_dependencies);
}

META_GET_META_CALL(igPageMemoryPool)

}
#pragma pop
