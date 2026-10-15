// beNDMWItemDisk: Alchemy class registration (0x803429FC..0x80342C6C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemDisk)
META_DECLARE(beNDMWItemBase)

extern "C" {
extern char beNDMWItemDisk_fieldNames[];
extern char beNDMWItemDisk_fieldOffsets[];
extern char beNDMWItemDisk_fieldStorage[];
extern char beNDMWItemDisk_fieldTypes[];
void fn_803250AC();
void *fn_803425BC();
extern char lbl_804E4A68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWItemDisk)

META_METAOBJECT(beNDMWItemDisk)

META_GET_META(beNDMWItemDisk)

void *beNDMWItemDisk_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E4A68;
    object.__vtable = beNDMWItemDisk_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWItemDisk)

void beNDMWItemDisk_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWItemDisk_meta, beNDMWItemBase_register,
                       fn_803425BC, beNDMWItemDisk_getMetaCall,
                       beNDMWItemDisk_className, 0x18,
                       beNDMWItemDisk_vtableRead, beNDMWItemDisk_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWItemDisk)

void beNDMWItemDisk_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWItemDisk_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWItemDisk_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWItemDisk_fieldNames, beNDMWItemDisk_fieldStorage, beNDMWItemDisk_fieldOffsets, base);
}

}
#pragma pop
