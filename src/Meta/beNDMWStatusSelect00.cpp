// beNDMWStatusSelect00: Alchemy class registration (0x8032A800..0x8032A8B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusSelect00)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusSelect00)

void beNDMWStatusSelect00_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusSelect00_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWStatusSelect00_getMetaCall,
                       beNDMWStatusSelect00_className, 0x70,
                       beNDMWStatusSelect00_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStatusSelect00)

}
#pragma pop
