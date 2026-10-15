// beHitLandModel: Alchemy class registration (0x802D4E4C..0x802D4FF4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beHitLandModel)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beHitLandModelOrder)
META_DECLARE(beHitLandModelTraversal)

extern "C" {
extern char beHitLandModel_dependencies[16];
extern char beHitLandModel_fieldNames[];
extern char beHitLandModel_fieldOffsets[];
extern char beHitLandModel_fieldStorage[];
extern char beHitLandModel_fieldTypes[];
void fn_8003EC68(void *,int);
void *fn_801BDBA0();
void fn_802B1AC8();
void *fn_802B381C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beHitLandModel)

void beHitLandModel_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beHitLandModel_meta, beBaseInfoManager_register,
                       fn_802B381C, beHitLandModel_getMetaCall,
                       beHitLandModel_className, 0x70,
                       beHitLandModel_vtableRead, beHitLandModel_fieldInit, 0, beHitLandModel_dependencies);
}

META_GET_META_CALL(beHitLandModel)

void beHitLandModel_fieldInit()
{
    Meta::igMetaObject *meta = beHitLandModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beHitLandModel_fieldTypes, 5);
    Meta::igObjectRefMetaField *orderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    orderField->_metaObject = beHitLandModelOrder_metaObject();
    Meta::igObjectRefMetaField *hitTraversalField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    hitTraversalField->_metaObject = beHitLandModelTraversal_metaObject();
    Meta::igObjectRefMetaField *probeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_801BDBA0();
    probeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    Meta::igBoolMetaField *isHitWallField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 3));
    fn_8003EC68(isHitWallField, 1);
    meta_setupFields(meta, beHitLandModel_fieldNames, beHitLandModel_fieldStorage, beHitLandModel_fieldOffsets, base);
}

}
#pragma pop
