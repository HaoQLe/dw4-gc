// beNDMWShopDevice: Alchemy class registration (0x8032BC90..0x8032BD54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopDevice)
META_DECLARE(beNDMWListCtrl)

extern "C" {
extern char beNDMWShopDevice_dependencies[8];
void fn_803250AC();
void *fn_8032BD54();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopDevice)

void beNDMWShopDevice_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopDevice_meta, beNDMWListCtrl_register,
                       fn_8032BD54, beNDMWShopDevice_getMetaCall,
                       beNDMWShopDevice_className, 0x64,
                       beNDMWShopDevice_vtableRead, beNDMWShopDevice_fieldInit, 0, beNDMWShopDevice_dependencies);
}

META_GET_META_CALL(beNDMWShopDevice)

}
#pragma pop
