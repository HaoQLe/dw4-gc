// beBaseInfo: Alchemy class registration (0x802E3C58..0x802E3E78). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beBaseInfo)
META_DECLARE(beBaseInfoDataList)
META_DECLARE(beBaseInfoRamList)
META_DECLARE(igInfo)

extern "C" {
extern char beBaseInfo_dependencies[12];
extern char beBaseInfo_fieldNames[];
extern char beBaseInfo_fieldOffsets[];
extern char beBaseInfo_fieldStorage[];
extern char beBaseInfo_fieldTypes[];
void *fn_800284EC();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beBaseInfo)

META_GET_META(beBaseInfo)

META_ARK_REGISTER(beBaseInfo)

void beBaseInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(1, &beBaseInfo_meta, igInfo_register,
                       fn_800284EC, beBaseInfo_getMetaCall,
                       beBaseInfo_className, 0x1C,
                       0, beBaseInfo_fieldInit, 0, beBaseInfo_dependencies);
}

META_GET_META_CALL(beBaseInfo)

void beBaseInfo_fieldInit()
{
    Meta::igMetaObject *meta = beBaseInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beBaseInfo_fieldTypes, 2);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dataListField->_metaObject = beBaseInfoDataList_metaObject();
    Meta::igObjectRefMetaField *ramListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    ramListField->_metaObject = beBaseInfoRamList_metaObject();
    ramListField->_construct = true;
    meta_setupFields(meta, beBaseInfo_fieldNames, beBaseInfo_fieldStorage, beBaseInfo_fieldOffsets, base);
}

}
#pragma pop
