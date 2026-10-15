// beNDMWItemRevisionBase: Alchemy class registration (0x80343498..0x8034361C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemRevisionBase)
META_DECLARE(beNDMWItemBase)

extern "C" {
extern char beNDMWItemRevisionBase_fieldNames[];
extern char beNDMWItemRevisionBase_fieldOffsets[];
extern char beNDMWItemRevisionBase_fieldStorage[];
extern char beNDMWItemRevisionBase_fieldTypes[];
void fn_803250AC();
void *fn_803425BC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWItemRevisionBase)

META_ARK_REGISTER(beNDMWItemRevisionBase)

void beNDMWItemRevisionBase_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWItemRevisionBase_meta, beNDMWItemBase_register,
                       fn_803425BC, beNDMWItemRevisionBase_getMetaCall,
                       beNDMWItemRevisionBase_className, 0x18,
                       0, beNDMWItemRevisionBase_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWItemRevisionBase)

void beNDMWItemRevisionBase_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWItemRevisionBase_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWItemRevisionBase_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWItemRevisionBase_fieldNames, beNDMWItemRevisionBase_fieldStorage, beNDMWItemRevisionBase_fieldOffsets, base);
}

}
#pragma pop
