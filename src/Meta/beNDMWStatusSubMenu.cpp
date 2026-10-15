// beNDMWStatusSubMenu: Alchemy class registration (0x80330580..0x80330724). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusSubMenu)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusSubMenu_dependencies[12];
extern char beNDMWStatusSubMenu_fieldNames[];
extern char beNDMWStatusSubMenu_fieldOffsets[];
extern char beNDMWStatusSubMenu_fieldStorage[];
extern char beNDMWStatusSubMenu_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusSubMenu)

void beNDMWStatusSubMenu_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusSubMenu_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusSubMenu_getMetaCall,
                       beNDMWStatusSubMenu_className, 0x68,
                       beNDMWStatusSubMenu_vtableRead, beNDMWStatusSubMenu_fieldInit, 0, beNDMWStatusSubMenu_dependencies);
}

META_GET_META_CALL(beNDMWStatusSubMenu)

void beNDMWStatusSubMenu_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusSubMenu_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusSubMenu_fieldTypes, 5);
    Meta::igObjectRefMetaField *deviceFolderListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    deviceFolderListField->_metaObject = beNDMWWindowCtrl_metaObject();
    Meta::igObjectRefMetaField *playerNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value5 = fn_800365B4();
    playerNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    playerNoListField->_construct = true;
    Meta::igObjectRefMetaField *playerDeviceCntField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value7 = fn_800365B4();
    playerDeviceCntField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    playerDeviceCntField->_construct = true;
    meta_setupFields(meta, beNDMWStatusSubMenu_fieldNames, beNDMWStatusSubMenu_fieldStorage, beNDMWStatusSubMenu_fieldOffsets, base);
}

}
#pragma pop
