// beNDMWShopTitle03: Alchemy class registration (0x80326ED4..0x80326F88). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopTitle03)
META_DECLARE(beNDMWWindowTitle)

extern "C" {
void fn_803250AC();
void *fn_80326F88();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopTitle03)

void beNDMWShopTitle03_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopTitle03_meta, beNDMWWindowTitle_register,
                       fn_80326F88, beNDMWShopTitle03_getMetaCall,
                       beNDMWShopTitle03_className, 0x50,
                       beNDMWShopTitle03_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopTitle03)

}
#pragma pop
