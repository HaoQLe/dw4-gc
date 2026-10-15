// beNDMWMdlPlayer: Alchemy class registration (0x80338DA4..0x80338E68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlPlayer)
META_DECLARE(beNDMWMdlPEBase)

extern "C" {
extern char beNDMWMdlPlayer_dependencies[16];
void fn_803250AC();
void *fn_80338E68();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWMdlPlayer)

void beNDMWMdlPlayer_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlPlayer_meta, beNDMWMdlPEBase_register,
                       fn_80338E68, beNDMWMdlPlayer_getMetaCall,
                       beNDMWMdlPlayer_className, 0x38,
                       beNDMWMdlPlayer_vtableRead, beNDMWMdlPlayer_fieldInit, 0, beNDMWMdlPlayer_dependencies);
}

META_GET_META_CALL(beNDMWMdlPlayer)

}
#pragma pop
