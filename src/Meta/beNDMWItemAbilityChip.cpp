// beNDMWItemAbilityChip: Alchemy class registration (0x80342C6C..0x80342E00). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemAbilityChip)
META_DECLARE(beNDMWItemBase)

extern "C" {
void fn_803250AC();
void *fn_803425BC();
extern char lbl_804E4A68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWItemAbilityChip)

META_GET_META(beNDMWItemAbilityChip)

void *beNDMWItemAbilityChip_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E4A68;
    object.__vtable = beNDMWItemAbilityChip_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWItemAbilityChip)

void beNDMWItemAbilityChip_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWItemAbilityChip_meta, beNDMWItemBase_register,
                       fn_803425BC, beNDMWItemAbilityChip_getMetaCall,
                       beNDMWItemAbilityChip_className, 0x14,
                       beNDMWItemAbilityChip_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWItemAbilityChip)

}
#pragma pop
