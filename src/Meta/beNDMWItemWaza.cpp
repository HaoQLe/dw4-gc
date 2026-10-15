// beNDMWItemWaza: Alchemy class registration (0x80342420..0x803425BC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemWaza)
META_DECLARE(beNDMWItemBase)

extern "C" {
void fn_803250AC();
void *fn_803425BC();
extern char lbl_804E4A68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWItemWaza)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWItemWaza)
#pragma pop

void *beNDMWItemWaza_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E4A68;
    object.__vtable = beNDMWItemWaza_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWItemWaza)

void beNDMWItemWaza_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWItemWaza_meta, beNDMWItemBase_register,
                       fn_803425BC, beNDMWItemWaza_getMetaCall,
                       beNDMWItemWaza_className, 0x18,
                       beNDMWItemWaza_vtableRead, beNDMWItemWaza_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWItemWaza)

}
#pragma pop
