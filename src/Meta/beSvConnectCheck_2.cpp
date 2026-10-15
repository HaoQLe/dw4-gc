// beSvConnectCheck: Alchemy class registration (0x802BD6B0..0x802BD764). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvConnectCheck)
META_DECLARE(beSaveApi)

extern "C" {
void fn_802B1AC8();
void *fn_802BD764();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beSvConnectCheck)

void beSvConnectCheck_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvConnectCheck_meta, beSaveApi_register,
                       fn_802BD764, beSvConnectCheck_getMetaCall,
                       beSvConnectCheck_className, 0xF4,
                       beSvConnectCheck_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beSvConnectCheck)

}
#pragma pop
