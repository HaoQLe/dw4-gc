// igContextExt: Alchemy class registration (0x800374AC..0x80037594). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igContextExt)
META_DECLARE(igContext)

extern "C" {
void fn_80021B94();
void *fn_80037594();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igContextExt)

META_ARK_REGISTER(igContextExt)

void igContextExt_register()
{
    fn_80021B94();
    meta_registerClass(1, &igContextExt_meta, igContext_register,
                       fn_80037594, igContextExt_getMetaCall,
                       igContextExt_className, 0x14,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igContextExt)

}
#pragma pop
