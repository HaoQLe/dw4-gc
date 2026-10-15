// beNDMWMdlEnemy: Alchemy class registration (0x8033AF8C..0x8033B040). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlEnemy)
META_DECLARE(beNDMWMdlPEBase)

extern "C" {
void fn_803250AC();
void *fn_80338E68();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWMdlEnemy)

void beNDMWMdlEnemy_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlEnemy_meta, beNDMWMdlPEBase_register,
                       fn_80338E68, beNDMWMdlEnemy_getMetaCall,
                       beNDMWMdlEnemy_className, 0x2C,
                       beNDMWMdlEnemy_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWMdlEnemy)

}
#pragma pop
