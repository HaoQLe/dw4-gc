// beNDMWShopSelect34: Alchemy class registration (0x80329220..0x803292D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelect34)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelect34)

void beNDMWShopSelect34_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelect34_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelect34_getMetaCall,
                       beNDMWShopSelect34_className, 0x70,
                       beNDMWShopSelect34_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopSelect34)

}
#pragma pop
