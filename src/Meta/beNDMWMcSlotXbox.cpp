// beNDMWMcSlotXbox: Alchemy class registration (0x8033FB30..0x8033FD10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMcSlotXbox)
META_DECLARE(beNDMWMcSlot)

extern "C" {
void fn_803250AC();
void *fn_8033FD10();
extern char lbl_804E5334[];
}

struct beNDMWMcSlotXboxInstance : igObjectInstance {
    char unknown04[20];
    igStringMember _mName;
    char unknown1C[4];
    inline ~beNDMWMcSlotXboxInstance() { __vtable = beNDMWMcSlotXbox_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMcSlotXbox)

META_GET_META(beNDMWMcSlotXbox)

void *beNDMWMcSlotXbox_vtableRead()
{
    beNDMWMcSlotXboxInstance object;
    object.__vtable = lbl_804E5334;
    object.__vtable = beNDMWMcSlotXbox_vtable;
    object._mName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMcSlotXbox)

void beNDMWMcSlotXbox_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMcSlotXbox_meta, beNDMWMcSlot_register,
                       fn_8033FD10, beNDMWMcSlotXbox_getMetaCall,
                       beNDMWMcSlotXbox_className, 0x1C,
                       beNDMWMcSlotXbox_vtableRead, beNDMWMcSlotXbox_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWMcSlotXbox)

}
#pragma pop
