// igMessageDispatcher: Alchemy class registration (0x80285644..0x8028579C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageDispatcher)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
void fn_8028579C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igMessageDispatcher)

META_GET_META(igMessageDispatcher)

META_ARK_REGISTER(igMessageDispatcher)

void igMessageDispatcher_register()
{
    fn_80284294();
    meta_registerClass(1, &igMessageDispatcher_meta, igObject_register,
                       fn_800237D0, igMessageDispatcher_getMetaCall,
                       igMessageDispatcher_className, 0x8,
                       0, fn_8028579C, 0, 0);
}

META_GET_META_CALL(igMessageDispatcher)

}
#pragma pop
