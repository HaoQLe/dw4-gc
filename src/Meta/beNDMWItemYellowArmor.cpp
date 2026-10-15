// beNDMWItemYellowArmor: Alchemy class registration (0x80342E00..0x80342F9C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemYellowArmor)
META_DECLARE(beNDMWItemRevisionBase)

extern "C" {
void fn_803250AC();
void *fn_80342F9C();
extern char lbl_804E49FC[];
extern char lbl_804E4A68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWItemYellowArmor)

META_GET_META(beNDMWItemYellowArmor)

void *beNDMWItemYellowArmor_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E4A68;
    object.__vtable = lbl_804E49FC;
    object.__vtable = beNDMWItemYellowArmor_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWItemYellowArmor)

void beNDMWItemYellowArmor_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWItemYellowArmor_meta, beNDMWItemRevisionBase_register,
                       fn_80342F9C, beNDMWItemYellowArmor_getMetaCall,
                       beNDMWItemYellowArmor_className, 0x18,
                       beNDMWItemYellowArmor_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWItemYellowArmor)

}
#pragma pop
