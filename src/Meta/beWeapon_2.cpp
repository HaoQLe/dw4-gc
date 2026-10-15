// beWeapon: Alchemy class registration (0x802B3758..0x802B381C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWeapon)
META_DECLARE(beBaseInfoManager)

extern "C" {
extern char beWeapon_dependencies[8];
void fn_802B1AC8();
void *fn_802B381C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beWeapon)

void beWeapon_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWeapon_meta, beBaseInfoManager_register,
                       fn_802B381C, beWeapon_getMetaCall,
                       beWeapon_className, 0x24,
                       beWeapon_vtableRead, beWeapon_fieldInit, 0, beWeapon_dependencies);
}

META_GET_META_CALL(beWeapon)

}
#pragma pop
