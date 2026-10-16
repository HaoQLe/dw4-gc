// igMallocMemoryPool: Alchemy class registration (0x80039D6C..0x80039E28). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMallocMemoryPool)
META_DECLARE(igMemoryPool)

extern "C" {
void *fn_80038F58();
void *fn_80039CC0();
extern char igMallocMemoryPool_dependencies[12];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igMallocMemoryPool)

void igMallocMemoryPool_register()
{
    meta_registerClass(0, &igMallocMemoryPool_meta, igMemoryPool_register,
                       fn_80038F58, igMallocMemoryPool_getMetaCall,
                       igMallocMemoryPool_className, 0xA0,
                       fn_80039CC0, igMallocMemoryPool_fieldInit, 0, igMallocMemoryPool_dependencies);
}

META_GET_META_CALL(igMallocMemoryPool)

}
#pragma pop
