// beNDMWShopSelect00: Alchemy class registration (0x80329E74..0x80329FC4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWShopSelect00)
META_DECLARE(beNDMWWindowSelect)

extern "C" {
extern char beNDMWShopSelect00_fieldNames[];
extern char beNDMWShopSelect00_fieldOffsets[];
extern char beNDMWShopSelect00_fieldStorage[];
extern char beNDMWShopSelect00_fieldTypes[];
void fn_80071694(void *,int);
void fn_803250AC();
void *fn_80328C10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWShopSelect00)

void beNDMWShopSelect00_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopSelect00_meta, beNDMWWindowSelect_register,
                       fn_80328C10, beNDMWShopSelect00_getMetaCall,
                       beNDMWShopSelect00_className, 0x74,
                       beNDMWShopSelect00_vtableRead, beNDMWShopSelect00_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWShopSelect00)

void beNDMWShopSelect00_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopSelect00_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopSelect00_fieldTypes, 1);
    Meta::igStringMetaField *panelNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(panelNameField, 0);
    meta_setupFields(meta, beNDMWShopSelect00_fieldNames, beNDMWShopSelect00_fieldStorage, beNDMWShopSelect00_fieldOffsets, base);
}

}
#pragma pop
