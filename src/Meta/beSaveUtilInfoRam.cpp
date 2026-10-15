// beSaveUtilInfoRam: Alchemy class registration (0x802BB94C..0x802BBBE8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSaveUtilInfoRam)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beSvDeliver)

extern "C" {
extern char beSaveUtilInfoRam_dependencies[8];
extern char beSaveUtilInfoRam_fieldNames[];
extern char beSaveUtilInfoRam_fieldOffsets[];
extern char beSaveUtilInfoRam_fieldStorage[];
extern char beSaveUtilInfoRam_fieldTypes[];
void fn_802B1AC8();
void *fn_802B2B2C();
}

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beSaveUtilInfoRamInstance : beBaseInfoRamInstance {
    char unknown2C[4];
    igObjectRefMember _deliver;
    char unknown34[12];
    inline ~beSaveUtilInfoRamInstance() { __vtable = beSaveUtilInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSaveUtilInfoRam)

#pragma push
#pragma optimize_for_size on
void *beSaveUtilInfoRam_vtableRead()
{
    beSaveUtilInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beSaveUtilInfoRam_vtable;
    object._deliver._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSaveUtilInfoRam)

void beSaveUtilInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSaveUtilInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beSaveUtilInfoRam_getMetaCall,
                       beSaveUtilInfoRam_className, 0x34,
                       beSaveUtilInfoRam_vtableRead, beSaveUtilInfoRam_fieldInit, 0, beSaveUtilInfoRam_dependencies);
}

META_GET_META_CALL(beSaveUtilInfoRam)

void beSaveUtilInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beSaveUtilInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSaveUtilInfoRam_fieldTypes, 2);
    Meta::igObjectRefMetaField *deliverField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    deliverField->_metaObject = beSvDeliver_metaObject();
    deliverField->_construct = true;
    meta_setupFields(meta, beSaveUtilInfoRam_fieldNames, beSaveUtilInfoRam_fieldStorage, beSaveUtilInfoRam_fieldOffsets, base);
}

}
#pragma pop
