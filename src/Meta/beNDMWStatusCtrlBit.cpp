// beNDMWStatusCtrlBit: Alchemy class registration (0x803313C4..0x80331530). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusCtrlBit)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusCtrlBit_dependencies[8];
extern char beNDMWStatusCtrlBit_fieldNames[];
extern char beNDMWStatusCtrlBit_fieldOffsets[];
extern char beNDMWStatusCtrlBit_fieldStorage[];
extern char beNDMWStatusCtrlBit_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusCtrlBit)

void beNDMWStatusCtrlBit_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrlBit_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusCtrlBit_getMetaCall,
                       beNDMWStatusCtrlBit_className, 0x58,
                       beNDMWStatusCtrlBit_vtableRead, beNDMWStatusCtrlBit_fieldInit, 0, beNDMWStatusCtrlBit_dependencies);
}

META_GET_META_CALL(beNDMWStatusCtrlBit)

void beNDMWStatusCtrlBit_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlBit_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlBit_fieldTypes, 1);
    Meta::igObjectRefMetaField *playerNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    playerNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    playerNoListField->_construct = true;
    meta_setupFields(meta, beNDMWStatusCtrlBit_fieldNames, beNDMWStatusCtrlBit_fieldStorage, beNDMWStatusCtrlBit_fieldOffsets, base);
}

}
#pragma pop
