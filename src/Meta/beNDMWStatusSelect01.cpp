// beNDMWStatusSelect01: Alchemy class registration (0x8032A5C4..0x8032A678). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusSelect01)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusSelect01)

void beNDMWStatusSelect01_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusSelect01_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWStatusSelect01_getMetaCall,
                       beNDMWStatusSelect01_className, 0x70,
                       beNDMWStatusSelect01_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStatusSelect01)

}
#pragma pop
