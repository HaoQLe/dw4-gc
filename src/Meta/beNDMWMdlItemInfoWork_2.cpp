// beNDMWMdlItemInfoWork: Alchemy class registration (0x8033AB80..0x8033ACF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWMdlItemInfoWork)
META_DECLARE(beModelCtrlInfoWork)
META_DECLARE(beNDMWItemBase)

extern "C" {
extern char beNDMWMdlItemInfoWork_dependencies[8];
extern char beNDMWMdlItemInfoWork_fieldNames[];
extern char beNDMWMdlItemInfoWork_fieldOffsets[];
extern char beNDMWMdlItemInfoWork_fieldStorage[];
extern char beNDMWMdlItemInfoWork_fieldTypes[];
void fn_80053650(void *,int);
void fn_803250AC();
void *fn_80338A20();
void *fn_8033A934();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWMdlItemInfoWork)

void beNDMWMdlItemInfoWork_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlItemInfoWork_meta, beModelCtrlInfoWork_register,
                       fn_80338A20, beNDMWMdlItemInfoWork_getMetaCall,
                       beNDMWMdlItemInfoWork_className, 0x10C,
                       fn_8033A934, beNDMWMdlItemInfoWork_fieldInit, 0, beNDMWMdlItemInfoWork_dependencies);
}

META_GET_META_CALL(beNDMWMdlItemInfoWork)

void beNDMWMdlItemInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMdlItemInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMdlItemInfoWork_fieldTypes, 8);
    Meta::igObjectRefMetaField *itemObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    itemObjectField->_metaObject = beNDMWItemBase_metaObject();
    Meta::igIntMetaField *dispPlayerRamNoField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 4));
    fn_80053650(dispPlayerRamNoField, -1);
    meta_setupFields(meta, beNDMWMdlItemInfoWork_fieldNames, beNDMWMdlItemInfoWork_fieldStorage, beNDMWMdlItemInfoWork_fieldOffsets, base);
}

}
#pragma pop
