// beNDMWStatusSubSlot: Alchemy class registration (0x8033285C..0x80332910). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusSubSlot)
META_DECLARE(beNDMWStatusCtrlBaseEquip)

extern "C" {
void fn_803250AC();
void *fn_80332910();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusSubSlot)

void beNDMWStatusSubSlot_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusSubSlot_meta, beNDMWStatusCtrlBaseEquip_register,
                       fn_80332910, beNDMWStatusSubSlot_getMetaCall,
                       beNDMWStatusSubSlot_className, 0x7C,
                       beNDMWStatusSubSlot_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStatusSubSlot)

}
#pragma pop
