// beSvReadMediaApi: Alchemy class registration (0x802BE444..0x802BE85C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSvReadMediaApi)
META_DECLARE(beSaveApi)
META_DECLARE(beSaveDataDeliver)
META_DECLARE(beSvPlatBaseData)

extern "C" {
extern char beSvReadMediaApi_dependencies[16];
extern char beSvReadMediaApi_fieldNames[];
extern char beSvReadMediaApi_fieldOffsets[];
extern char beSvReadMediaApi_fieldStorage[];
extern char beSvReadMediaApi_fieldTypes[];
void *fn_80028F84();
void fn_80053650(void *,int);
void fn_802B1AC8();
void *fn_802BD764();
extern char lbl_804E0F88[];
}

struct Instance_804E0F88 : igObjectInstance {
    char unknown04[44];
    igObjectRefMember _imageWork;
    igObjectRefMember _mountWork;
    igObjectRefMember _iconWork;
    inline ~Instance_804E0F88() { __vtable = lbl_804E0F88; }
};

struct beSvReadMediaApiInstance : Instance_804E0F88 {
    char unknown3C[156];
    igObjectRefMember _outputGamedata;
    char unknownDC[4];
    igObjectRefMember _lodeData;
    igObjectRefMember _loadWorkList;
    char unknownE8[8];
    inline ~beSvReadMediaApiInstance() { __vtable = beSvReadMediaApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSvReadMediaApi)

META_GET_META(beSvReadMediaApi)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beSvReadMediaApi_vtableRead()
{
    beSvReadMediaApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvReadMediaApi_vtable;
    object._outputGamedata._value = 0;
    object._lodeData._value = 0;
    object._loadWorkList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvReadMediaApi)

void beSvReadMediaApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvReadMediaApi_meta, beSaveApi_register,
                       fn_802BD764, beSvReadMediaApi_getMetaCall,
                       beSvReadMediaApi_className, 0xEC,
                       beSvReadMediaApi_vtableRead, beSvReadMediaApi_fieldInit, 0, beSvReadMediaApi_dependencies);
}

META_GET_META_CALL(beSvReadMediaApi)

void beSvReadMediaApi_fieldInit()
{
    Meta::igMetaObject *meta = beSvReadMediaApi_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvReadMediaApi_fieldTypes, 5);
    Meta::igObjectRefMetaField *gameDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    gameDataField->_metaObject = beSvPlatBaseData_metaObject();
    Meta::igObjectRefMetaField *outputGamedataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    outputGamedataField->_metaObject = beSaveDataDeliver_metaObject();
    outputGamedataField->_refCounted = false;
    Meta::igIntMetaField *oneSvDataSizeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(oneSvDataSizeField, 16);
    Meta::igObjectRefMetaField *lodeDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    Meta::igMetaObject *beSaveDataDeliverMeta_ = beSaveDataDeliver_metaObject();
    lodeDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beSaveDataDeliverMeta_);
    Meta::igObjectRefMetaField *loadWorkListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value10 = fn_80028F84();
    loadWorkListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value10);
    loadWorkListField->_construct = true;
    meta_setupFields(meta, beSvReadMediaApi_fieldNames, beSvReadMediaApi_fieldStorage, beSvReadMediaApi_fieldOffsets, base);
}

}
#pragma pop
