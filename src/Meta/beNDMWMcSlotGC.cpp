// beNDMWMcSlotGC: Alchemy class registration (0x8033FDA0..0x8033FFBC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMcSlotGC)
META_DECLARE(beNDMWMcSlot)

extern "C" {
extern char beNDMWMcSlotGC_fieldNames[];
extern char beNDMWMcSlotGC_fieldOffsets[];
extern char beNDMWMcSlotGC_fieldStorage[];
extern char beNDMWMcSlotGC_fieldTypes[];
void fn_803250AC();
void *fn_8033FD10();
extern char lbl_804E5334[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMcSlotGC)

META_GET_META(beNDMWMcSlotGC)

void *beNDMWMcSlotGC_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E5334;
    object.__vtable = beNDMWMcSlotGC_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMcSlotGC)

void beNDMWMcSlotGC_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMcSlotGC_meta, beNDMWMcSlot_register,
                       fn_8033FD10, beNDMWMcSlotGC_getMetaCall,
                       beNDMWMcSlotGC_className, 0x20,
                       beNDMWMcSlotGC_vtableRead, beNDMWMcSlotGC_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWMcSlotGC)

void beNDMWMcSlotGC_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMcSlotGC_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMcSlotGC_fieldTypes, 0x2);
    meta_setupFields(meta, beNDMWMcSlotGC_fieldNames, beNDMWMcSlotGC_fieldStorage, beNDMWMcSlotGC_fieldOffsets, base);
}

}
#pragma pop
