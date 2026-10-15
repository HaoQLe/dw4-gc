// igLongTimer: Alchemy class registration (0x8002CD1C..0x8002CDEC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLongTimer)
META_DECLARE(igTimer)

extern "C" {
void fn_80021B94();
void *igLongTimer_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLongTimer)

META_ARK_REGISTER(igLongTimer)

void igLongTimer_register()
{
    fn_80021B94();
    meta_registerClass(1, &igLongTimer_meta, igTimer_register,
                       igLongTimer_parentMeta, igLongTimer_getMetaCall,
                       igLongTimer_className, 0x28,
                       0, igLongTimer_fieldInit, 0, 0);
}

}
#pragma pop
