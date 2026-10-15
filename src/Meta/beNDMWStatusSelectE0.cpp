// beNDMWStatusSelectE0: Alchemy class registration (0x8032A388..0x8032A43C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusSelectE0)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusSelectE0)

void beNDMWStatusSelectE0_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusSelectE0_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWStatusSelectE0_getMetaCall,
                       beNDMWStatusSelectE0_className, 0x70,
                       beNDMWStatusSelectE0_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStatusSelectE0)

}
#pragma pop
