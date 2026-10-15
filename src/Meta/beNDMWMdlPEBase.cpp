// beNDMWMdlPEBase: Alchemy class registration (0x80339654..0x80339750). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlPEBase)
META_DECLARE(beModelCtrl)

extern "C" {
void fn_803250AC();
void *fn_803386E8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWMdlPEBase)

META_ARK_REGISTER(beNDMWMdlPEBase)

void beNDMWMdlPEBase_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWMdlPEBase_meta, beModelCtrl_register,
                       fn_803386E8, beNDMWMdlPEBase_getMetaCall,
                       beNDMWMdlPEBase_className, 0x2C,
                       0, 0, 0, 0);
}

META_GET_META_CALL(beNDMWMdlPEBase)

}
#pragma pop
