// igTypeLock: Alchemy class registration (0x8012FF34..0x8013001C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTypeLock)
META_DECLARE(igLockBase)

extern "C" {
void fn_8012FC48();
void *fn_8013001C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTypeLock)

META_ARK_REGISTER(igTypeLock)

void igTypeLock_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igTypeLock_meta, igLockBase_register,
                       fn_8013001C, igTypeLock_getMetaCall,
                       igTypeLock_className, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igTypeLock)

}
#pragma pop
