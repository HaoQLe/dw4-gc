// beDataBase: Alchemy class registration (0x802DDD74..0x802DE040). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDataBase)
META_DECLARE(igObject)

extern "C" {
extern char beDataBase_dependencies[28];
extern char beDataBase_fieldNames[];
extern char beDataBase_fieldOffsets[];
extern char beDataBase_fieldStorage[];
extern char beDataBase_fieldTypes[];
void *fn_800237D0();
void *fn_80029A5C();
void *fn_80034D84();
void *fn_80035450();
void *fn_800365B4();
void *fn_800369C4();
void *fn_80036C40();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beDataBase)

void beDataBase_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataBase_meta, igObject_register,
                       fn_800237D0, beDataBase_getMetaCall,
                       beDataBase_className, 0x38,
                       beDataBase_vtableRead, beDataBase_fieldInit, 0, beDataBase_dependencies);
}

META_GET_META_CALL(beDataBase)

void beDataBase_fieldInit()
{
    Meta::igMetaObject *meta = beDataBase_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataBase_fieldTypes, 12);
    Meta::igObjectRefMetaField *charOffsetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    charOffsetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    charOffsetListField->_construct = true;
    Meta::igObjectRefMetaField *charDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800369C4();
    charDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    charDataField->_construct = true;
    Meta::igObjectRefMetaField *shortOffsetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_80029A5C();
    shortOffsetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    shortOffsetListField->_construct = true;
    Meta::igObjectRefMetaField *shortDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value9 = fn_80035450();
    shortDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    shortDataField->_construct = true;
    Meta::igObjectRefMetaField *intOffsetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value11 = fn_80029A5C();
    intOffsetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    intOffsetListField->_construct = true;
    Meta::igObjectRefMetaField *intDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_value13 = fn_800365B4();
    intDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value13);
    intDataField->_construct = true;
    Meta::igObjectRefMetaField *floatOffsetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_value15 = fn_80029A5C();
    floatOffsetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value15);
    floatOffsetListField->_construct = true;
    Meta::igObjectRefMetaField *floatDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value17 = fn_80034D84();
    floatDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value17);
    floatDataField->_construct = true;
    Meta::igObjectRefMetaField *boolOffsetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_value19 = fn_80029A5C();
    boolOffsetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value19);
    boolOffsetListField->_construct = true;
    Meta::igObjectRefMetaField *boolDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_value21 = fn_80036C40();
    boolDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value21);
    boolDataField->_construct = true;
    Meta::igObjectRefMetaField *stringOffsetListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    void *value_value23 = fn_80029A5C();
    stringOffsetListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value23);
    stringOffsetListField->_construct = true;
    Meta::igObjectRefMetaField *stringDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    void *value_value25 = fn_80029A5C();
    stringDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value25);
    stringDataField->_construct = true;
    meta_setupFields(meta, beDataBase_fieldNames, beDataBase_fieldStorage, beDataBase_fieldOffsets, base);
}

}
#pragma pop
