// igMessageReceiver: Alchemy class registration (0x80284DD0..0x80284ECC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageReceiver)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessageReceiver)

META_ARK_REGISTER(igMessageReceiver)

void igMessageReceiver_register()
{
    fn_80284294();
    meta_registerClass(1, &igMessageReceiver_meta, igObject_register,
                       fn_800237D0, igMessageReceiver_getMetaCall,
                       igMessageReceiver_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igMessageReceiver)

}
#pragma pop
