// beBaseInfoRam: Alchemy class registration (0x802E3130..0x802E341C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beBaseInfoRam)
META_DECLARE(beBaseInfo)
META_DECLARE(beBaseInfoDataList)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igObject)

extern "C" {
extern char beBaseInfoRam_dependencies[16];
extern char beBaseInfoRam_fieldNames[];
extern char beBaseInfoRam_fieldOffsets[];
extern char beBaseInfoRam_fieldStorage[];
extern char beBaseInfoRam_fieldTypes[];
void *fn_800237D0();
void fn_8003EC68(void *,int);
void fn_802B1AC8();
}

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    char unknown2C[4];
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beBaseInfoRam)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beBaseInfoRam)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beBaseInfoRam_vtableRead()
{
    beBaseInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beBaseInfoRam)

void beBaseInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beBaseInfoRam_meta, igObject_register,
                       fn_800237D0, beBaseInfoRam_getMetaCall,
                       beBaseInfoRam_className, 0x2C,
                       beBaseInfoRam_vtableRead, beBaseInfoRam_fieldInit, 0, beBaseInfoRam_dependencies);
}

META_GET_META_CALL(beBaseInfoRam)

void beBaseInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beBaseInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beBaseInfoRam_fieldTypes, 9);
    Meta::igObjectRefMetaField *parentInfoField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    parentInfoField->_metaObject = beBaseInfo_metaObject();
    parentInfoField->_refCounted = false;
    parentInfoField->_persistent = false;
    Meta::igObjectRefMetaField *parentManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    parentManagerField->_metaObject = beBaseInfoManager_metaObject();
    parentManagerField->_refCounted = false;
    parentManagerField->_persistent = false;
    Meta::igBoolMetaField *isRunField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 3));
    fn_8003EC68(isRunField, 1);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    dataListField->_metaObject = beBaseInfoDataList_metaObject();
    meta_setupFields(meta, beBaseInfoRam_fieldNames, beBaseInfoRam_fieldStorage, beBaseInfoRam_fieldOffsets, base);
}

}
#pragma pop
