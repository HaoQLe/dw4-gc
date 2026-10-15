// beNDMWWindowSelect: Alchemy class registration (0x8032A8B4..0x8032AA60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWWindowSelect)
META_DECLARE(beNDMWWindow)

extern "C" {
extern char beNDMWWindowSelect_dependencies[8];
extern char beNDMWWindowSelect_fieldNames[];
extern char beNDMWWindowSelect_fieldOffsets[];
extern char beNDMWWindowSelect_fieldStorage[];
extern char beNDMWWindowSelect_fieldTypes[];
void *fn_80036C40();
void fn_803250AC();
void *fn_803287A8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWWindowSelect)

META_ARK_REGISTER(beNDMWWindowSelect)

void beNDMWWindowSelect_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWWindowSelect_meta, beNDMWWindow_register,
                       fn_803287A8, beNDMWWindowSelect_getMetaCall,
                       beNDMWWindowSelect_className, 0x70,
                       0, beNDMWWindowSelect_fieldInit, 0, beNDMWWindowSelect_dependencies);
}

META_GET_META_CALL(beNDMWWindowSelect)

void beNDMWWindowSelect_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWWindowSelect_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWWindowSelect_fieldTypes, 6);
    Meta::igObjectRefMetaField *decideListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_value3 = fn_80036C40();
    decideListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beNDMWWindowSelect_fieldNames, beNDMWWindowSelect_fieldStorage, beNDMWWindowSelect_fieldOffsets, base);
}

}
#pragma pop
