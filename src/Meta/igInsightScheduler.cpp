// igInsightScheduler: Alchemy class registration (0x80285A5C..0x80285BB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInsightScheduler)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
void fn_80285BB4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igInsightScheduler)

META_GET_META(igInsightScheduler)

META_ARK_REGISTER(igInsightScheduler)

void igInsightScheduler_register()
{
    fn_80284294();
    meta_registerClass(1, &igInsightScheduler_meta, igObject_register,
                       fn_800237D0, igInsightScheduler_getMetaCall,
                       igInsightScheduler_className, 0x8,
                       0, fn_80285BB4, 0, 0);
}

META_GET_META_CALL(igInsightScheduler)

}
#pragma pop
