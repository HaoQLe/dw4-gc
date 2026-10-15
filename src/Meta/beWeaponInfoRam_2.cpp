// beWeaponInfoRam: Alchemy class registration (0x802B2A78..0x802B2B2C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWeaponInfoRam)
META_DECLARE(beBaseInfoRam)

extern "C" {
void fn_802B1AC8();
void *fn_802B2B2C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beWeaponInfoRam)

void beWeaponInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWeaponInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beWeaponInfoRam_getMetaCall,
                       beWeaponInfoRam_className, 0x2C,
                       beWeaponInfoRam_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beWeaponInfoRam)

}
#pragma pop
