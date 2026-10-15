// igInstanceLock: Alchemy class registration (0x80146E7C..0x80146F64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInstanceLock)
META_DECLARE(igLockBase)

extern "C" {
void fn_8012FC48();
void *fn_8013001C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInstanceLock)

META_ARK_REGISTER(igInstanceLock)

void igInstanceLock_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igInstanceLock_meta, igLockBase_register,
                       fn_8013001C, igInstanceLock_getMetaCall,
                       igInstanceLock_className, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igInstanceLock)

}
#pragma pop
