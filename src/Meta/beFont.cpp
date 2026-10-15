// beFont: Alchemy class registration (0x802D9DF4..0x802D9FF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beFont)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beFontGeomAttrPairList)
META_DECLARE(beFontImageList)

extern "C" {
extern char beFont_dependencies[28];
extern char beFont_fieldNames[];
extern char beFont_fieldOffsets[];
extern char beFont_fieldStorage[];
extern char beFont_fieldTypes[];
void *fn_80024FEC();
void *fn_80034D84();
void *fn_800365B4();
void *fn_801C89F0();
void fn_802B1AC8();
void *fn_802B381C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beFont)

void beFont_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFont_meta, beBaseInfoManager_register,
                       fn_802B381C, beFont_getMetaCall,
                       beFont_className, 0x48,
                       beFont_vtableRead, beFont_fieldInit, 0, beFont_dependencies);
}

META_GET_META_CALL(beFont)

void beFont_fieldInit()
{
    Meta::igMetaObject *meta = beFont_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beFont_fieldTypes, 10);
    Meta::igObjectRefMetaField *rootField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801C89F0();
    rootField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *fontsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    fontsField->_metaObject = beFontImageList_metaObject();
    fontsField->_construct = true;
    Meta::igObjectRefMetaField *gaPairListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    gaPairListField->_metaObject = beFontGeomAttrPairList_metaObject();
    gaPairListField->_construct = true;
    Meta::igObjectRefMetaField *lineFeedListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value9 = fn_800365B4();
    lineFeedListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    lineFeedListField->_construct = true;
    Meta::igObjectRefMetaField *alignListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_value11 = fn_80034D84();
    alignListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    alignListField->_construct = true;
    Meta::igObjectRefMetaField *convertDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_value13 = fn_80024FEC();
    convertDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value13);
    convertDataField->_construct = true;
    meta_setupFields(meta, beFont_fieldNames, beFont_fieldStorage, beFont_fieldOffsets, base);
}

}
#pragma pop
