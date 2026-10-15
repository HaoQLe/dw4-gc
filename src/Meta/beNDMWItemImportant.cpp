// beNDMWItemImportant: Alchemy class registration (0x8034264C..0x803427E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemImportant)
META_DECLARE(beNDMWItemBase)

extern "C" {
void fn_803250AC();
void *fn_803425BC();
extern char lbl_804E4A68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWItemImportant)

META_GET_META(beNDMWItemImportant)

void *beNDMWItemImportant_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E4A68;
    object.__vtable = beNDMWItemImportant_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWItemImportant)

void beNDMWItemImportant_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWItemImportant_meta, beNDMWItemBase_register,
                       fn_803425BC, beNDMWItemImportant_getMetaCall,
                       beNDMWItemImportant_className, 0x14,
                       beNDMWItemImportant_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWItemImportant)

}
#pragma pop
