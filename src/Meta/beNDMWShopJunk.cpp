// beNDMWShopJunk: Alchemy class registration (0x8032B7E0..0x8032B8A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopJunk)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopJunk_dependencies[8];
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopJunk)

void beNDMWShopJunk_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopJunk_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopJunk_getMetaCall,
                       beNDMWShopJunk_className, 0x60,
                       beNDMWShopJunk_vtableRead, beNDMWShopJunk_fieldInit, 0, beNDMWShopJunk_dependencies);
}

META_GET_META_CALL(beNDMWShopJunk)

}
#pragma pop
