// beNDMWMdlPlayerInfoWork: Alchemy class registration (0x803393C0..0x80339484). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlPlayerInfoWork)
META_DECLARE(beNDMWMdlPEBaseInfoWork)

extern "C" {
extern char beNDMWMdlPlayerInfoWork_dependencies[8];
void fn_803250AC();
void *fn_80339040();
void *fn_80339484();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWMdlPlayerInfoWork)

void beNDMWMdlPlayerInfoWork_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlPlayerInfoWork_meta, beNDMWMdlPEBaseInfoWork_register,
                       fn_80339484, beNDMWMdlPlayerInfoWork_getMetaCall,
                       beNDMWMdlPlayerInfoWork_className, 0x130,
                       fn_80339040, beNDMWMdlPlayerInfoWork_fieldInit, 0, beNDMWMdlPlayerInfoWork_dependencies);
}

META_GET_META_CALL(beNDMWMdlPlayerInfoWork)

}
#pragma pop
