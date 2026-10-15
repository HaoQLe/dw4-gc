// beNDMWMdlPlayer2InfoWork: Alchemy class registration (0x80338964..0x80338A20). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlPlayer2InfoWork)
META_DECLARE(beModelCtrlInfoWork)

extern "C" {
void fn_803250AC();
void *fn_80338A20();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWMdlPlayer2InfoWork)

void beNDMWMdlPlayer2InfoWork_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlPlayer2InfoWork_meta, beModelCtrlInfoWork_register,
                       fn_80338A20, beNDMWMdlPlayer2InfoWork_getMetaCall,
                       beNDMWMdlPlayer2InfoWork_className, 0xFC,
                       beNDMWMdlPlayer2InfoWork_vtableRead, beNDMWMdlPlayer2InfoWork_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWMdlPlayer2InfoWork)

}
#pragma pop
