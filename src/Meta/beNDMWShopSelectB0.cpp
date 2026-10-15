// beNDMWShopSelectB0: Alchemy class registration (0x80328B5C..0x80328C10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelectB0)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelectB0)

void beNDMWShopSelectB0_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelectB0_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelectB0_getMetaCall,
                       beNDMWShopSelectB0_className, 0x70,
                       beNDMWShopSelectB0_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopSelectB0)

}
#pragma pop
