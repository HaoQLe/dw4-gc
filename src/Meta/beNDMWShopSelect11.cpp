// beNDMWShopSelect11: Alchemy class registration (0x8032945C..0x80329510). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelect11)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelect11)

void beNDMWShopSelect11_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelect11_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelect11_getMetaCall,
                       beNDMWShopSelect11_className, 0x70,
                       beNDMWShopSelect11_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopSelect11)

}
#pragma pop
