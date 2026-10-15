// beNDMWStatusCtrlD0: Alchemy class registration (0x80333760..0x80333900). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusCtrlD0)
META_DECLARE(beNDMWListCtrl)

extern "C" {
extern char beNDMWStatusCtrlD0_dependencies[12];
extern char beNDMWStatusCtrlD0_fieldNames[];
extern char beNDMWStatusCtrlD0_fieldOffsets[];
extern char beNDMWStatusCtrlD0_fieldStorage[];
extern char beNDMWStatusCtrlD0_fieldTypes[];
void *fn_800365B4();
void *fn_80036C40();
void fn_8003EC68(void *,int);
void fn_803250AC();
void *fn_8032BD54();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusCtrlD0)

void beNDMWStatusCtrlD0_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrlD0_meta, beNDMWListCtrl_register,
                       fn_8032BD54, beNDMWStatusCtrlD0_getMetaCall,
                       beNDMWStatusCtrlD0_className, 0x74,
                       beNDMWStatusCtrlD0_vtableRead, beNDMWStatusCtrlD0_fieldInit, 0, beNDMWStatusCtrlD0_dependencies);
}

META_GET_META_CALL(beNDMWStatusCtrlD0)

void beNDMWStatusCtrlD0_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlD0_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlD0_fieldTypes, 8);
    Meta::igObjectRefMetaField *kindListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_800365B4();
    kindListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    kindListField->_construct = true;
    Meta::igBoolMetaField *isAutoCloseField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 6));
    fn_8003EC68(isAutoCloseField, 1);
    Meta::igObjectRefMetaField *decideListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value6 = fn_80036C40();
    decideListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value6);
    decideListField->_construct = true;
    meta_setupFields(meta, beNDMWStatusCtrlD0_fieldNames, beNDMWStatusCtrlD0_fieldStorage, beNDMWStatusCtrlD0_fieldOffsets, base);
}

}
#pragma pop
