// beChangePosTransformInfoRam: Alchemy class registration (0x802E0C68..0x802E0EFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beChangePosTransformInfoRam)
META_DECLARE(beBaseInfoRam)

extern "C" {
extern char beChangePosTransformInfoRam_dependencies[8];
extern char beChangePosTransformInfoRam_fieldNames[];
extern char beChangePosTransformInfoRam_fieldOffsets[];
extern char beChangePosTransformInfoRam_fieldStorage[];
extern char beChangePosTransformInfoRam_fieldTypes[];
void *fn_801AC644();
void fn_802B1AC8();
void *fn_802B2B2C();
}

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beChangePosTransformInfoRamInstance : beBaseInfoRamInstance {
    igObjectRefMember _transform;
    inline ~beChangePosTransformInfoRamInstance() { __vtable = beChangePosTransformInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beChangePosTransformInfoRam)

#pragma push
#pragma optimize_for_size on
void *beChangePosTransformInfoRam_vtableRead()
{
    beChangePosTransformInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beChangePosTransformInfoRam_vtable;
    object._transform._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beChangePosTransformInfoRam)

void beChangePosTransformInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beChangePosTransformInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beChangePosTransformInfoRam_getMetaCall,
                       beChangePosTransformInfoRam_className, 0x30,
                       beChangePosTransformInfoRam_vtableRead, beChangePosTransformInfoRam_fieldInit, 0, beChangePosTransformInfoRam_dependencies);
}

META_GET_META_CALL(beChangePosTransformInfoRam)

void beChangePosTransformInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beChangePosTransformInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beChangePosTransformInfoRam_fieldTypes, 1);
    Meta::igObjectRefMetaField *transformField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801AC644();
    transformField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beChangePosTransformInfoRam_fieldNames, beChangePosTransformInfoRam_fieldStorage, beChangePosTransformInfoRam_fieldOffsets, base);
}

}
#pragma pop
