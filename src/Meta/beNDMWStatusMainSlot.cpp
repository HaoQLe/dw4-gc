// beNDMWStatusMainSlot: Alchemy class registration (0x80332AC8..0x80332B7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusMainSlot)
META_DECLARE(beNDMWStatusCtrlBaseEquip)

extern "C" {
void fn_803250AC();
void *fn_80332910();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusMainSlot)

void beNDMWStatusMainSlot_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusMainSlot_meta, beNDMWStatusCtrlBaseEquip_register,
                       fn_80332910, beNDMWStatusMainSlot_getMetaCall,
                       beNDMWStatusMainSlot_className, 0x7C,
                       beNDMWStatusMainSlot_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStatusMainSlot)

}
#pragma pop
