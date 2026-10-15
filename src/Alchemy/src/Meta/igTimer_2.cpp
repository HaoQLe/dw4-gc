// igTimer: Alchemy class registration (0x800236E4..0x800237D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTimer)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_800237D8();
extern char lbl_8055CF90[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTimer)

META_ARK_REGISTER(igTimer)

void igTimer_register()
{
    fn_80021B94();
    meta_registerClass(1, &igTimer_meta, igObject_register,
                       fn_800237D0, igTimer_getMetaCall,
                       lbl_8055CF90, 0x8,
                       0, fn_800237D8, 0, 0);
}

META_GET_META_CALL(igTimer)

}
#pragma pop
