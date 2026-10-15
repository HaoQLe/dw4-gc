// beNDMWItemBlueArmor: Alchemy class registration (0x80342FAC..0x80343158). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemBlueArmor)
META_DECLARE(beNDMWItemRevisionPocketBase)

extern "C" {
void fn_803250AC();
void *fn_80343158();
extern char lbl_804E4990[];
extern char lbl_804E49FC[];
extern char lbl_804E4A68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWItemBlueArmor)

META_GET_META(beNDMWItemBlueArmor)

void *beNDMWItemBlueArmor_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E4A68;
    object.__vtable = lbl_804E49FC;
    object.__vtable = lbl_804E4990;
    object.__vtable = beNDMWItemBlueArmor_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWItemBlueArmor)

void beNDMWItemBlueArmor_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWItemBlueArmor_meta, beNDMWItemRevisionPocketBase_register,
                       fn_80343158, beNDMWItemBlueArmor_getMetaCall,
                       beNDMWItemBlueArmor_className, 0x1C,
                       beNDMWItemBlueArmor_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWItemBlueArmor)

}
#pragma pop
