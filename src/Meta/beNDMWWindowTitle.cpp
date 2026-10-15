// beNDMWWindowTitle: Alchemy class registration (0x803286AC..0x803287A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWWindowTitle)
META_DECLARE(beNDMWWindow)

extern "C" {
void fn_803250AC();
void *fn_803287A8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWWindowTitle)

META_ARK_REGISTER(beNDMWWindowTitle)

void beNDMWWindowTitle_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWWindowTitle_meta, beNDMWWindow_register,
                       fn_803287A8, beNDMWWindowTitle_getMetaCall,
                       beNDMWWindowTitle_className, 0x50,
                       0, 0, 0, 0);
}

META_GET_META_CALL(beNDMWWindowTitle)

}
#pragma pop
