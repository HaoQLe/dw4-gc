// beNDMWAfsStageLoad: Alchemy class registration (0x803454F0..0x80345760). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWAfsStageLoad)
META_DECLARE(igAction)
META_DECLARE(igInsightCore)

extern "C" {
extern char beNDMWAfsStageLoad_dependencies[12];
extern char beNDMWAfsStageLoad_fieldNames[];
extern char beNDMWAfsStageLoad_fieldOffsets[];
extern char beNDMWAfsStageLoad_fieldStorage[];
extern char beNDMWAfsStageLoad_fieldTypes[];
void *fn_80029C30();
void *fn_801159FC();
void fn_803250AC();
extern char lbl_80496CB8[];
}

struct beNDMWAfsStageLoadInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _stage;
    inline ~beNDMWAfsStageLoadInstance() { __vtable = beNDMWAfsStageLoad_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWAfsStageLoad)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beNDMWAfsStageLoad_vtableRead()
{
    beNDMWAfsStageLoadInstance object;
    object.__vtable = lbl_80496CB8;
    object.__vtable = beNDMWAfsStageLoad_vtable;
    object._stage._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWAfsStageLoad)

void beNDMWAfsStageLoad_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWAfsStageLoad_meta, igAction_register,
                       fn_801159FC, beNDMWAfsStageLoad_getMetaCall,
                       beNDMWAfsStageLoad_className, 0x10,
                       beNDMWAfsStageLoad_vtableRead, beNDMWAfsStageLoad_fieldInit, 0, beNDMWAfsStageLoad_dependencies);
}

META_GET_META_CALL(beNDMWAfsStageLoad)

void beNDMWAfsStageLoad_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWAfsStageLoad_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWAfsStageLoad_fieldTypes, 2);
    Meta::igObjectRefMetaField *insightField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    insightField->_metaObject = igInsightCore_metaObject();
    insightField->_refCounted = false;
    Meta::igObjectRefMetaField *stageField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80029C30();
    stageField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    stageField->_construct = true;
    meta_setupFields(meta, beNDMWAfsStageLoad_fieldNames, beNDMWAfsStageLoad_fieldStorage, beNDMWAfsStageLoad_fieldOffsets, base);
}

}
#pragma pop
