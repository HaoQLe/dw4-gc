// beNDMWShopSelect02: Alchemy class registration (0x8032990C..0x80329A78). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShopSelect02)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
extern char beNDMWShopSelect02_dependencies[8];
extern char beNDMWShopSelect02_fieldNames[];
extern char beNDMWShopSelect02_fieldOffsets[];
extern char beNDMWShopSelect02_fieldStorage[];
extern char beNDMWShopSelect02_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelect02)

void beNDMWShopSelect02_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelect02_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelect02_getMetaCall,
                       beNDMWShopSelect02_className, 0x74,
                       beNDMWShopSelect02_vtableRead, beNDMWShopSelect02_fieldInit, 0, beNDMWShopSelect02_dependencies);
}

META_GET_META_CALL(beNDMWShopSelect02)

void beNDMWShopSelect02_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopSelect02_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopSelect02_fieldTypes, 1);
    Meta::igObjectRefMetaField *playerNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    playerNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    playerNoListField->_construct = true;
    meta_setupFields(meta, beNDMWShopSelect02_fieldNames, beNDMWShopSelect02_fieldStorage, beNDMWShopSelect02_fieldOffsets, base);
}

}
#pragma pop
