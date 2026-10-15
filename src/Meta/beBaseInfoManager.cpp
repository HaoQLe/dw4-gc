// beBaseInfoManager: Alchemy class registration (0x802E3840..0x802E3A88). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beBaseInfoManager)
META_DECLARE(beBaseInfoList)
META_DECLARE(beMessenger)
META_DECLARE(beSystem)
META_DECLARE(igInfoManager)

extern "C" {
extern char beBaseInfoManager_dependencies[16];
extern char beBaseInfoManager_fieldNames[];
extern char beBaseInfoManager_fieldOffsets[];
extern char beBaseInfoManager_fieldStorage[];
extern char beBaseInfoManager_fieldTypes[];
void *fn_80284550();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beBaseInfoManager)

META_GET_META(beBaseInfoManager)

META_ARK_REGISTER(beBaseInfoManager)

void beBaseInfoManager_register()
{
    fn_802B1AC8();
    meta_registerClass(1, &beBaseInfoManager_meta, igInfoManager_register,
                       fn_80284550, beBaseInfoManager_getMetaCall,
                       beBaseInfoManager_className, 0x20,
                       0, beBaseInfoManager_fieldInit, 0, beBaseInfoManager_dependencies);
}

META_GET_META_CALL(beBaseInfoManager)

void beBaseInfoManager_fieldInit()
{
    Meta::igMetaObject *meta = beBaseInfoManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beBaseInfoManager_fieldTypes, 4);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = beSystem_metaObject();
    systemField->_refCounted = false;
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *infoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    infoListField->_metaObject = beBaseInfoList_metaObject();
    infoListField->_construct = true;
    meta_setupFields(meta, beBaseInfoManager_fieldNames, beBaseInfoManager_fieldStorage, beBaseInfoManager_fieldOffsets, base);
}

}
#pragma pop
