// beNDMWStatusInfoWork: Alchemy class registration (0x8032B2B4..0x8032B4C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusInfoWork)
META_DECLARE(beNDMWItemBaseList)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWStatusInfoWork_dependencies[12];
extern char beNDMWStatusInfoWork_fieldNames[];
extern char beNDMWStatusInfoWork_fieldOffsets[];
extern char beNDMWStatusInfoWork_fieldStorage[];
extern char beNDMWStatusInfoWork_fieldTypes[];
void *fn_800237D0();
void *fn_800365B4();
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusInfoWork)

void beNDMWStatusInfoWork_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusInfoWork_meta, igObject_register,
                       fn_800237D0, beNDMWStatusInfoWork_getMetaCall,
                       beNDMWStatusInfoWork_className, 0x24,
                       beNDMWStatusInfoWork_vtableRead, beNDMWStatusInfoWork_fieldInit, 0, beNDMWStatusInfoWork_dependencies);
}

META_GET_META_CALL(beNDMWStatusInfoWork)

void beNDMWStatusInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusInfoWork_fieldTypes, 7);
    Meta::igObjectRefMetaField *parameterField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    parameterField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    parameterField->_construct = true;
    Meta::igObjectRefMetaField *previewField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800365B4();
    previewField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    previewField->_construct = true;
    Meta::igObjectRefMetaField *weaponSalesListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    weaponSalesListField->_metaObject = beNDMWItemBaseList_metaObject();
    weaponSalesListField->_construct = true;
    Meta::igObjectRefMetaField *armorSalesListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    Meta::igMetaObject *beNDMWItemBaseListMeta_ = beNDMWItemBaseList_metaObject();
    armorSalesListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beNDMWItemBaseListMeta_);
    armorSalesListField->_construct = true;
    Meta::igObjectRefMetaField *chipSalesListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    Meta::igMetaObject *beNDMWItemBaseListMeta__ = beNDMWItemBaseList_metaObject();
    chipSalesListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beNDMWItemBaseListMeta__);
    chipSalesListField->_construct = true;
    Meta::igObjectRefMetaField *junkSalesListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    Meta::igMetaObject *beNDMWItemBaseListMeta___ = beNDMWItemBaseList_metaObject();
    junkSalesListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beNDMWItemBaseListMeta___);
    junkSalesListField->_construct = true;
    meta_setupFields(meta, beNDMWStatusInfoWork_fieldNames, beNDMWStatusInfoWork_fieldStorage, beNDMWStatusInfoWork_fieldOffsets, base);
}

}
#pragma pop
