// beNDMWShopSelect03: Alchemy class registration (0x80329698..0x8032974C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelect03)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelect03)

void beNDMWShopSelect03_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelect03_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelect03_getMetaCall,
                       beNDMWShopSelect03_className, 0x70,
                       beNDMWShopSelect03_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopSelect03)

}
#pragma pop
