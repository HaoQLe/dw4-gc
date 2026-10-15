// igThread: Alchemy class registration (0x80023C04..0x80023CF4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igThread)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_80023CF4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igThread)

META_ARK_REGISTER(igThread)

void igThread_register()
{
    fn_80021B94();
    meta_registerClass(1, &igThread_meta, igNamedObject_register,
                       fn_80023CF4, igThread_getMetaCall,
                       igThread_className, 0x30,
                       0, igThread_fieldInit, 0, 0);
}

META_GET_META_CALL(igThread)

}
#pragma pop
