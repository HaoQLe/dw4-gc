// beNDMWItemBase: Alchemy class registration (0x8034382C..0x80343A04). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemBase)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWItemBase_fieldNames[];
extern char beNDMWItemBase_fieldOffsets[];
extern char beNDMWItemBase_fieldStorage[];
extern char beNDMWItemBase_fieldTypes[];
void *fn_800237D0();
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beNDMWItemBase)

META_GET_META(beNDMWItemBase)

META_ARK_REGISTER(beNDMWItemBase)

void beNDMWItemBase_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWItemBase_meta, igObject_register,
                       fn_800237D0, beNDMWItemBase_getMetaCall,
                       beNDMWItemBase_className, 0x14,
                       0, beNDMWItemBase_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWItemBase)

void beNDMWItemBase_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWItemBase_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWItemBase_fieldTypes, 0x3);
    meta_setupFields(meta, beNDMWItemBase_fieldNames, beNDMWItemBase_fieldStorage, beNDMWItemBase_fieldOffsets, base);
}

}
#pragma pop
