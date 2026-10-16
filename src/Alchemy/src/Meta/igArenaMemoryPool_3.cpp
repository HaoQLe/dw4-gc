// igArenaMemoryPool: Alchemy class registration (0x800396F8..0x80039794). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igArenaMemoryPool)
META_DECLARE(igMemoryPool)

extern "C" {
void *fn_80038F58();
void *fn_8003964C();
extern char igArenaMemoryPool_dependencies[12];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igArenaMemoryPool)

void igArenaMemoryPool_register()
{
    meta_registerClass(0, &igArenaMemoryPool_meta, igMemoryPool_register,
                       fn_80038F58, igArenaMemoryPool_getMetaCall,
                       igArenaMemoryPool_className, 0xD0,
                       fn_8003964C, igArenaMemoryPool_fieldInit, 0, igArenaMemoryPool_dependencies);
}

}
#pragma pop
