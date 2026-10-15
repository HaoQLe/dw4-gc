// beNDMWMdlPEBaseInfoWork: Alchemy class registration (0x803397EC..0x803399E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWMdlPEBaseInfoWork)
META_DECLARE(beMessenger)
META_DECLARE(beModelCtrlInfoWork)

extern "C" {
extern char beNDMWMdlPEBaseInfoWork_dependencies[16];
extern char beNDMWMdlPEBaseInfoWork_fieldNames[];
extern char beNDMWMdlPEBaseInfoWork_fieldOffsets[];
extern char beNDMWMdlPEBaseInfoWork_fieldStorage[];
extern char beNDMWMdlPEBaseInfoWork_fieldTypes[];
void *fn_800365B4();
void *fn_80036C40();
void fn_803250AC();
void *fn_80338A20();
void *fn_8033979C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWMdlPEBaseInfoWork)

void beNDMWMdlPEBaseInfoWork_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlPEBaseInfoWork_meta, beModelCtrlInfoWork_register,
                       fn_80338A20, beNDMWMdlPEBaseInfoWork_getMetaCall,
                       beNDMWMdlPEBaseInfoWork_className, 0x114,
                       fn_8033979C, beNDMWMdlPEBaseInfoWork_fieldInit, 0, beNDMWMdlPEBaseInfoWork_dependencies);
}

META_GET_META_CALL(beNDMWMdlPEBaseInfoWork)

void beNDMWMdlPEBaseInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMdlPEBaseInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMdlPEBaseInfoWork_fieldTypes, 10);
    Meta::igObjectRefMetaField *dispRamNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_800365B4();
    dispRamNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *dispPosNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value5 = fn_800365B4();
    dispPosNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    Meta::igObjectRefMetaField *timerListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value7 = fn_800365B4();
    timerListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    Meta::igObjectRefMetaField *isFirstListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value9 = fn_80036C40();
    isFirstListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    Meta::igObjectRefMetaField *downDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value11 = fn_800365B4();
    downDataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    Meta::igObjectRefMetaField *upDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_value13 = fn_800365B4();
    upDataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value13);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    meta_setupFields(meta, beNDMWMdlPEBaseInfoWork_fieldNames, beNDMWMdlPEBaseInfoWork_fieldStorage, beNDMWMdlPEBaseInfoWork_fieldOffsets, base);
}

}
#pragma pop
