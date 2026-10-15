// igTriggerable: Alchemy class registration (0x80284444..0x80284540). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTriggerable)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_80284294();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTriggerable)

META_ARK_REGISTER(igTriggerable)

void igTriggerable_register()
{
    fn_80284294();
    meta_registerClass(1, &igTriggerable_meta, igNamedObject_register,
                       fn_80023CF4, igTriggerable_getMetaCall,
                       igTriggerable_className, 0xC,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igTriggerable)

}
#pragma pop
