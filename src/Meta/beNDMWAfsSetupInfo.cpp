// beNDMWAfsSetupInfo: Alchemy class registration (0x80344DF4..0x803450FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWAfsSetupInfo)
META_DECLARE(beNDMWAfsSetupDataList)
META_DECLARE(igAdxAfsFileList)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWAfsSetupInfo_dependencies[12];
extern char beNDMWAfsSetupInfo_fieldNames[];
extern char beNDMWAfsSetupInfo_fieldOffsets[];
extern char beNDMWAfsSetupInfo_fieldStorage[];
extern char beNDMWAfsSetupInfo_fieldTypes[];
void *fn_800284EC();
void fn_803250AC();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct beNDMWAfsSetupInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _insideFiles;
    igObjectRefMember _dataList;
    char unknown1C[12];
    inline ~beNDMWAfsSetupInfoInstance() { __vtable = beNDMWAfsSetupInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWAfsSetupInfo)
#pragma pop

void *beNDMWAfsSetupInfo_vtableRead()
{
    beNDMWAfsSetupInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = beNDMWAfsSetupInfo_vtable;
    object._insideFiles._value = 0;
    object._dataList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWAfsSetupInfo)

void beNDMWAfsSetupInfo_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWAfsSetupInfo_meta, igInfo_register,
                       fn_800284EC, beNDMWAfsSetupInfo_getMetaCall,
                       beNDMWAfsSetupInfo_className, 0x1C,
                       beNDMWAfsSetupInfo_vtableRead, beNDMWAfsSetupInfo_fieldInit, 0, beNDMWAfsSetupInfo_dependencies);
}

META_GET_META_CALL(beNDMWAfsSetupInfo)

void beNDMWAfsSetupInfo_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWAfsSetupInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWAfsSetupInfo_fieldTypes, 2);
    Meta::igObjectRefMetaField *insideFilesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    insideFilesField->_metaObject = igAdxAfsFileList_metaObject();
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    dataListField->_metaObject = beNDMWAfsSetupDataList_metaObject();
    meta_setupFields(meta, beNDMWAfsSetupInfo_fieldNames, beNDMWAfsSetupInfo_fieldStorage, beNDMWAfsSetupInfo_fieldOffsets, base);
}

}
#pragma pop
