// beNDMWStatusCtrlSendBit: Alchemy class registration (0x80330F40..0x803310A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusCtrlSendBit)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusCtrlSendBit_dependencies[8];
extern char beNDMWStatusCtrlSendBit_fieldNames[];
extern char beNDMWStatusCtrlSendBit_fieldOffsets[];
extern char beNDMWStatusCtrlSendBit_fieldStorage[];
extern char beNDMWStatusCtrlSendBit_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusCtrlSendBit)

void beNDMWStatusCtrlSendBit_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrlSendBit_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusCtrlSendBit_getMetaCall,
                       beNDMWStatusCtrlSendBit_className, 0x64,
                       beNDMWStatusCtrlSendBit_vtableRead, beNDMWStatusCtrlSendBit_fieldInit, 0, beNDMWStatusCtrlSendBit_dependencies);
}

META_GET_META_CALL(beNDMWStatusCtrlSendBit)

void beNDMWStatusCtrlSendBit_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlSendBit_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlSendBit_fieldTypes, 4);
    Meta::igObjectRefMetaField *playerNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value3 = fn_800365B4();
    playerNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beNDMWStatusCtrlSendBit_fieldNames, beNDMWStatusCtrlSendBit_fieldStorage, beNDMWStatusCtrlSendBit_fieldOffsets, base);
}

}
#pragma pop
