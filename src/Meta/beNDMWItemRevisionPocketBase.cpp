// beNDMWItemRevisionPocketBase: Alchemy class registration (0x80343314..0x80343498). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemRevisionPocketBase)
META_DECLARE(beNDMWItemRevisionBase)

extern "C" {
extern char beNDMWItemRevisionPocketBase_fieldNames[];
extern char beNDMWItemRevisionPocketBase_fieldOffsets[];
extern char beNDMWItemRevisionPocketBase_fieldStorage[];
extern char beNDMWItemRevisionPocketBase_fieldTypes[];
void fn_803250AC();
void *fn_80342F9C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWItemRevisionPocketBase)

META_ARK_REGISTER(beNDMWItemRevisionPocketBase)

void beNDMWItemRevisionPocketBase_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWItemRevisionPocketBase_meta, beNDMWItemRevisionBase_register,
                       fn_80342F9C, beNDMWItemRevisionPocketBase_getMetaCall,
                       beNDMWItemRevisionPocketBase_className, 0x1C,
                       0, beNDMWItemRevisionPocketBase_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWItemRevisionPocketBase)

void beNDMWItemRevisionPocketBase_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWItemRevisionPocketBase_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWItemRevisionPocketBase_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWItemRevisionPocketBase_fieldNames, beNDMWItemRevisionPocketBase_fieldStorage, beNDMWItemRevisionPocketBase_fieldOffsets, base);
}

}
#pragma pop
