// beMessenger: Alchemy class registration (0x802CE1F0..0x802CE3D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMessenger)
META_DECLARE(beMessengerArgData)
META_DECLARE(beMessengerArgDataList)
META_DECLARE(beMessengerDelayList)
META_DECLARE(beMessengerGroupList)
META_DECLARE(beMessengerWorkList)
META_DECLARE(igInfoManager)

extern "C" {
extern char beMessenger_dependencies[24];
extern char beMessenger_fieldNames[];
extern char beMessenger_fieldOffsets[];
extern char beMessenger_fieldStorage[];
extern char beMessenger_fieldTypes[];
void *fn_80284550();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beMessenger)

void beMessenger_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessenger_meta, igInfoManager_register,
                       fn_80284550, beMessenger_getMetaCall,
                       beMessenger_className, 0x38,
                       beMessenger_vtableRead, beMessenger_fieldInit, 0, beMessenger_dependencies);
}

META_GET_META_CALL(beMessenger)

void beMessenger_fieldInit()
{
    Meta::igMetaObject *meta = beMessenger_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMessenger_fieldTypes, 8);
    Meta::igObjectRefMetaField *argDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    argDataField->_metaObject = beMessengerArgData_metaObject();
    Meta::igObjectRefMetaField *groupListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    groupListField->_metaObject = beMessengerGroupList_metaObject();
    groupListField->_construct = true;
    Meta::igObjectRefMetaField *workStackField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    workStackField->_metaObject = beMessengerWorkList_metaObject();
    workStackField->_construct = true;
    Meta::igObjectRefMetaField *delayStackField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    delayStackField->_metaObject = beMessengerDelayList_metaObject();
    delayStackField->_construct = true;
    Meta::igObjectRefMetaField *pushPopStackField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    pushPopStackField->_metaObject = beMessengerArgDataList_metaObject();
    pushPopStackField->_construct = true;
    meta_setupFields(meta, beMessenger_fieldNames, beMessenger_fieldStorage, beMessenger_fieldOffsets, base);
}

}
#pragma pop
