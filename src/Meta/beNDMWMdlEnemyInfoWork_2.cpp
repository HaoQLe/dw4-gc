// beNDMWMdlEnemyInfoWork: Alchemy class registration (0x8033B1B8..0x8033B26C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlEnemyInfoWork)
META_DECLARE(beNDMWMdlPEBaseInfoWork)

extern "C" {
void fn_803250AC();
void *fn_80339484();
void *fn_8033B0CC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWMdlEnemyInfoWork)

void beNDMWMdlEnemyInfoWork_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlEnemyInfoWork_meta, beNDMWMdlPEBaseInfoWork_register,
                       fn_80339484, beNDMWMdlEnemyInfoWork_getMetaCall,
                       beNDMWMdlEnemyInfoWork_className, 0x114,
                       fn_8033B0CC, 0, 0, 0);
}

META_GET_META_CALL(beNDMWMdlEnemyInfoWork)

}
#pragma pop
