// igInsightPlugin: Alchemy class registration (0x80285DA0..0x80285E9C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInsightPlugin)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInsightPlugin)

META_ARK_REGISTER(igInsightPlugin)

void igInsightPlugin_register()
{
    fn_80284294();
    meta_registerClass(1, &igInsightPlugin_meta, igObject_register,
                       fn_800237D0, igInsightPlugin_getMetaCall,
                       igInsightPlugin_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igInsightPlugin)

}
#pragma pop
