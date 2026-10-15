// beNDMWStatusPowerSocket: Alchemy class registration (0x80332D24..0x80332DD8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusPowerSocket)
META_DECLARE(beNDMWStatusCtrlBaseEquip)

extern "C" {
void fn_803250AC();
void *fn_80332910();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusPowerSocket)

void beNDMWStatusPowerSocket_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusPowerSocket_meta, beNDMWStatusCtrlBaseEquip_register,
                       fn_80332910, beNDMWStatusPowerSocket_getMetaCall,
                       beNDMWStatusPowerSocket_className, 0x7C,
                       beNDMWStatusPowerSocket_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStatusPowerSocket)

}
#pragma pop
