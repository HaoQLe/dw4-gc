// beFileListInfoManager: Alchemy class registration (0x802DA490..0x802DA9A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beFileListInfoManager)
META_DECLARE(beMessenger)
META_DECLARE(beSystem)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)
META_DECLARE(igViewerSceneInfoManager)

extern "C" {
extern char beFileListInfoManager_dependencies[28];
extern char beFileListInfoManager_fieldNames[];
extern char beFileListInfoManager_fieldOffsets[];
extern char beFileListInfoManager_fieldStorage[];
extern char beFileListInfoManager_fieldTypes[];
void *fn_80024B94();
void *fn_8002E824();
void *fn_800324CC();
void fn_80053650(void *,int);
void *fn_80284550();
void fn_802B1AC8();
extern char lbl_804CBA60[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct beFileListInfoManagerInstance : Instance_804CBA60 {
    char unknown0C[24];
    igObjectRefMember _fnames;
    igObjectRefMember _infoList;
    igObjectRefMember _dirList;
    igObjectRefMember _readInfoList;
    igObjectRefMember _importantInfoList;
    char unknown38[8];
    inline ~beFileListInfoManagerInstance() { __vtable = beFileListInfoManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beFileListInfoManager)

META_METAOBJECT(beFileListInfoManager)

META_GET_META(beFileListInfoManager)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beFileListInfoManager_vtableRead()
{
    beFileListInfoManagerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beFileListInfoManager_vtable;
    object._fnames._value = 0;
    object._infoList._value = 0;
    object._dirList._value = 0;
    object._readInfoList._value = 0;
    object._importantInfoList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beFileListInfoManager)

void beFileListInfoManager_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFileListInfoManager_meta, igInfoManager_register,
                       fn_80284550, beFileListInfoManager_getMetaCall,
                       beFileListInfoManager_className, 0x40,
                       beFileListInfoManager_vtableRead, beFileListInfoManager_fieldInit, 0, beFileListInfoManager_dependencies);
}

META_GET_META_CALL(beFileListInfoManager)

void beFileListInfoManager_fieldInit()
{
    Meta::igMetaObject *meta = beFileListInfoManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beFileListInfoManager_fieldTypes, 12);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = beSystem_metaObject();
    systemField->_refCounted = false;
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *sceneInfoManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    sceneInfoManagerField->_metaObject = igViewerSceneInfoManager_metaObject();
    sceneInfoManagerField->_refCounted = false;
    Meta::igIntMetaField *onetimeCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 4));
    fn_80053650(onetimeCountField, -1);
    Meta::igObjectRefMetaField *fnamesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_value10 = fn_80024B94();
    fnamesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value10);
    fnamesField->_construct = true;
    Meta::igObjectRefMetaField *infoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_value12 = fn_8002E824();
    infoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value12);
    infoListField->_construct = true;
    Meta::igObjectRefMetaField *dirListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value14 = fn_800324CC();
    dirListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value14);
    dirListField->_construct = true;
    Meta::igObjectRefMetaField *readInfoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_value16 = fn_8002E824();
    readInfoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value16);
    readInfoListField->_construct = true;
    Meta::igObjectRefMetaField *importantInfoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_value18 = fn_8002E824();
    importantInfoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value18);
    importantInfoListField->_construct = true;
    meta_setupFields(meta, beFileListInfoManager_fieldNames, beFileListInfoManager_fieldStorage, beFileListInfoManager_fieldOffsets, base);
}

}
#pragma pop
