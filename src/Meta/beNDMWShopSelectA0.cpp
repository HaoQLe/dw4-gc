// beNDMWShopSelectA0: Alchemy class registration (0x80328DA8..0x80328E5C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelectA0)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelectA0)

void beNDMWShopSelectA0_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelectA0_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelectA0_getMetaCall,
                       beNDMWShopSelectA0_className, 0x70,
                       beNDMWShopSelectA0_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopSelectA0)

}
#pragma pop
