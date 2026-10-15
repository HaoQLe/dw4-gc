// beNDMWWindow: Alchemy class registration (0x80325BA4..0x80325ED8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWWindow)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWWindowList)
META_DECLARE(bePadManager)
META_DECLARE(igInsightCore)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWWindow_dependencies[28];
extern char beNDMWWindow_fieldNames[];
extern char beNDMWWindow_fieldOffsets[];
extern char beNDMWWindow_fieldStorage[];
extern char beNDMWWindow_fieldTypes[];
void *fn_800237D0();
void *fn_80024B94();
void *fn_800365B4();
void fn_8003EC68(void *,int);
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beNDMWWindow)

META_GET_META(beNDMWWindow)

META_ARK_REGISTER(beNDMWWindow)

void beNDMWWindow_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWWindow_meta, igObject_register,
                       fn_800237D0, beNDMWWindow_getMetaCall,
                       beNDMWWindow_className, 0x50,
                       0, beNDMWWindow_fieldInit, 0, beNDMWWindow_dependencies);
}

META_GET_META_CALL(beNDMWWindow)

void beNDMWWindow_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWWindow_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWWindow_fieldTypes, 18);
    Meta::igObjectRefMetaField *insightField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    insightField->_metaObject = igInsightCore_metaObject();
    insightField->_refCounted = false;
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    Meta::igBoolMetaField *isRunField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 4));
    fn_8003EC68(isRunField, 1);
    Meta::igObjectRefMetaField *subWindowField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    subWindowField->_metaObject = beNDMWWindowList_metaObject();
    subWindowField->_construct = true;
    Meta::igObjectRefMetaField *motherField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    motherField->_metaObject = beNDMWWindow_metaObject();
    Meta::igObjectRefMetaField *textCloseTypeListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_value14 = fn_80024B94();
    textCloseTypeListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value14);
    textCloseTypeListField->_construct = true;
    Meta::igObjectRefMetaField *textCloseNameListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 14));
    void *value_value16 = fn_80024B94();
    textCloseNameListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value16);
    textCloseNameListField->_construct = true;
    Meta::igObjectRefMetaField *modelCloseInfoNameListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 15));
    void *value_value18 = fn_80024B94();
    modelCloseInfoNameListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value18);
    modelCloseInfoNameListField->_construct = true;
    Meta::igObjectRefMetaField *modelCloseRamNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 16));
    void *value_value20 = fn_800365B4();
    modelCloseRamNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value20);
    modelCloseRamNoListField->_construct = true;
    Meta::igObjectRefMetaField *modelCloseSeqNameListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    void *value_value22 = fn_80024B94();
    modelCloseSeqNameListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value22);
    modelCloseSeqNameListField->_construct = true;
    meta_setupFields(meta, beNDMWWindow_fieldNames, beNDMWWindow_fieldStorage, beNDMWWindow_fieldOffsets, base);
}

}
#pragma pop
