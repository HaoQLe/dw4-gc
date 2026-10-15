// igLockBase: Alchemy class registration (0x80142E44..0x80142F2C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLockBase)
META_DECLARE(igInterfaced)

extern "C" {
void fn_8012FC48();
void *fn_801420C0();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLockBase)

META_ARK_REGISTER(igLockBase)

void igLockBase_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igLockBase_meta, igInterfaced_register,
                       fn_801420C0, igLockBase_getMetaCall,
                       igLockBase_className, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igLockBase)

}
#pragma pop
