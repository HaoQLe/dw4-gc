// beGeneraterData: Alchemy class registration (0x802D7774..0x802D7948). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beGeneraterData)
META_DECLARE(beGeneraterPlayerDataList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beGeneraterData_dependencies[16];
extern char beGeneraterData_fieldNames[];
extern char beGeneraterData_fieldOffsets[];
extern char beGeneraterData_fieldStorage[];
extern char beGeneraterData_fieldTypes[];
void *fn_80023CF4();
void *fn_80034D84();
void fn_80071694(void *,int);
void *fn_80122100();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beGeneraterData)

void beGeneraterData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterData_meta, igNamedObject_register,
                       fn_80023CF4, beGeneraterData_getMetaCall,
                       beGeneraterData_className, 0x44,
                       beGeneraterData_vtableRead, beGeneraterData_fieldInit, 0, beGeneraterData_dependencies);
}

META_GET_META_CALL(beGeneraterData)

void beGeneraterData_fieldInit()
{
    Meta::igMetaObject *meta = beGeneraterData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beGeneraterData_fieldTypes, 12);
    Meta::igObjectRefMetaField *genePosListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value3 = fn_80122100();
    genePosListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    genePosListField->_construct = true;
    Meta::igObjectRefMetaField *geneRotYRadianListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value5 = fn_80034D84();
    geneRotYRadianListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    geneRotYRadianListField->_construct = true;
    Meta::igStringMetaField *geneEnemySeqField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 5));
    fn_80071694(geneEnemySeqField, 0);
    Meta::igStringMetaField *callLuaField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 10));
    fn_80071694(callLuaField, 0);
    Meta::igObjectRefMetaField *playerDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    playerDataListField->_metaObject = beGeneraterPlayerDataList_metaObject();
    playerDataListField->_construct = true;
    meta_setupFields(meta, beGeneraterData_fieldNames, beGeneraterData_fieldStorage, beGeneraterData_fieldOffsets, base);
}

}
#pragma pop
