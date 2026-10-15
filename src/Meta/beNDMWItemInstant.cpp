// beNDMWItemInstant: Alchemy class registration (0x803427E0..0x803429FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemInstant)
META_DECLARE(beNDMWItemBase)

extern "C" {
extern char beNDMWItemInstant_fieldNames[];
extern char beNDMWItemInstant_fieldOffsets[];
extern char beNDMWItemInstant_fieldStorage[];
extern char beNDMWItemInstant_fieldTypes[];
void fn_803250AC();
void *fn_803425BC();
extern char lbl_804E4A68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWItemInstant)

META_GET_META(beNDMWItemInstant)

void *beNDMWItemInstant_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E4A68;
    object.__vtable = beNDMWItemInstant_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWItemInstant)

void beNDMWItemInstant_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWItemInstant_meta, beNDMWItemBase_register,
                       fn_803425BC, beNDMWItemInstant_getMetaCall,
                       beNDMWItemInstant_className, 0x18,
                       beNDMWItemInstant_vtableRead, beNDMWItemInstant_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWItemInstant)

void beNDMWItemInstant_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWItemInstant_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWItemInstant_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWItemInstant_fieldNames, beNDMWItemInstant_fieldStorage, beNDMWItemInstant_fieldOffsets, base);
}

}
#pragma pop
