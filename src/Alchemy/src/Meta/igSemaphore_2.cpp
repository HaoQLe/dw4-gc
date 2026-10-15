// igSemaphore: Alchemy class registration (0x8002605C..0x8002614C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSemaphore)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void fn_8002614C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSemaphore)

META_ARK_REGISTER(igSemaphore)

void igSemaphore_register()
{
    fn_80021B94();
    meta_registerClass(1, &igSemaphore_meta, igNamedObject_register,
                       fn_80023CF4, igSemaphore_getMetaCall,
                       igSemaphore_className, 0xC,
                       0, fn_8002614C, 0, 0);
}

META_GET_META_CALL(igSemaphore)

}
#pragma pop
