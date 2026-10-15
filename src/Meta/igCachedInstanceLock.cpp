// igCachedInstanceLock: Alchemy class registration (0x80152664..0x8015274C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCachedInstanceLock)
META_DECLARE(igInstanceLock)

extern "C" {
void fn_8012FC48();
void *fn_8014C1F8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCachedInstanceLock)

META_ARK_REGISTER(igCachedInstanceLock)

void igCachedInstanceLock_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igCachedInstanceLock_meta, igInstanceLock_register,
                       fn_8014C1F8, igCachedInstanceLock_getMetaCall,
                       igCachedInstanceLock_className, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igCachedInstanceLock)

}
#pragma pop
