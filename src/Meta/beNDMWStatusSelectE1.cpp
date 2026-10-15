// beNDMWStatusSelectE1: Alchemy class registration (0x8032A14C..0x8032A200). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusSelectE1)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusSelectE1)

void beNDMWStatusSelectE1_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusSelectE1_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWStatusSelectE1_getMetaCall,
                       beNDMWStatusSelectE1_className, 0x70,
                       beNDMWStatusSelectE1_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStatusSelectE1)

}
#pragma pop
