// beNDMWLoadSavePlWork: Alchemy class registration (0x8033F6F8..0x8033F960). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>

META_DECLARE(beNDMWLoadSavePlWork)
META_DECLARE(beNDMWLoadSlotPlayer)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWLoadSavePlWork_dependencies[8];
extern char beNDMWLoadSavePlWork_fieldNames[];
extern char beNDMWLoadSavePlWork_fieldOffsets[];
extern char beNDMWLoadSavePlWork_fieldStorage[];
extern char beNDMWLoadSavePlWork_fieldTypes[];
void *fn_800237D0();
void fn_8003EC68(void *,int);
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWLoadSavePlWork)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWLoadSavePlWork)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beNDMWLoadSavePlWork_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[52];
    } object;
    igObject_construct(&object);
    object.__vtable = beNDMWLoadSavePlWork_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWLoadSavePlWork)

void beNDMWLoadSavePlWork_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadSavePlWork_meta, igObject_register,
                       fn_800237D0, beNDMWLoadSavePlWork_getMetaCall,
                       beNDMWLoadSavePlWork_className, 0x34,
                       beNDMWLoadSavePlWork_vtableRead, beNDMWLoadSavePlWork_fieldInit, 0, beNDMWLoadSavePlWork_dependencies);
}

META_GET_META_CALL(beNDMWLoadSavePlWork)

void beNDMWLoadSavePlWork_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadSavePlWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadSavePlWork_fieldTypes, 14);
    Meta::igBoolMetaField *isCloseField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 3));
    fn_8003EC68(isCloseField, 1);
    Meta::igBoolMetaField *isCtrlField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 4));
    fn_8003EC68(isCtrlField, 1);
    Meta::igBoolMetaField *isHaveSaveDataField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 8));
    Meta::igMetaObject *beNDMWLoadSlotPlayerMeta = beNDMWLoadSlotPlayer_metaObject();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(isHaveSaveDataField) + 0x38) = beNDMWLoadSlotPlayerMeta;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(isHaveSaveDataField) + 0x3C) = 0;
    meta_setupFields(meta, beNDMWLoadSavePlWork_fieldNames, beNDMWLoadSavePlWork_fieldStorage, beNDMWLoadSavePlWork_fieldOffsets, base);
}

}
#pragma pop
