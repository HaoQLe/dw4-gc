// beNDMWMcSlotPS2: Alchemy class registration (0x8033FFBC..0x80340150). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMcSlotPS2)
META_DECLARE(beNDMWMcSlot)

extern "C" {
void fn_803250AC();
void *fn_8033FD10();
extern char lbl_804E5334[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMcSlotPS2)

META_GET_META(beNDMWMcSlotPS2)

void *beNDMWMcSlotPS2_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E5334;
    object.__vtable = beNDMWMcSlotPS2_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMcSlotPS2)

void beNDMWMcSlotPS2_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMcSlotPS2_meta, beNDMWMcSlot_register,
                       fn_8033FD10, beNDMWMcSlotPS2_getMetaCall,
                       beNDMWMcSlotPS2_className, 0x18,
                       beNDMWMcSlotPS2_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWMcSlotPS2)

}
#pragma pop
