// beNDMWShopSelect52: Alchemy class registration (0x80328FE4..0x80329098). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelect52)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelect52)

void beNDMWShopSelect52_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelect52_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelect52_getMetaCall,
                       beNDMWShopSelect52_className, 0x70,
                       beNDMWShopSelect52_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopSelect52)

}
#pragma pop
