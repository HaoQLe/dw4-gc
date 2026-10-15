// beNDMWShopSelect01: Alchemy class registration (0x80329C00..0x80329CB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelect01)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelect01)

void beNDMWShopSelect01_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelect01_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelect01_getMetaCall,
                       beNDMWShopSelect01_className, 0x70,
                       beNDMWShopSelect01_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopSelect01)

}
#pragma pop
