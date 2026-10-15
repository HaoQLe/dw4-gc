// beSvDeliver: Alchemy class registration (0x802C04CC..0x802C0960). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igCharMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSvDeliver)
META_DECLARE(beSaveDataDeliver)
META_DECLARE(beSvPlatBaseData)
META_DECLARE(igObject)

extern "C" {
extern char beSvDeliver_dependencies[16];
extern char beSvDeliver_fieldNames[];
extern char beSvDeliver_fieldOffsets[];
extern char beSvDeliver_fieldStorage[];
extern char beSvDeliver_fieldTypes[];
void *fn_800237D0();
void *fn_800365B4();
void fn_80040030(void *,int);
void fn_802B1AC8();
}

struct beSvDeliverInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _actConnect;
    char unknown10[32];
    igObjectRefMember _freeSizeList;
    igObjectRefMember _freeFileList;
    igObjectRefMember _formatList;
    igObjectRefMember _totalSizeList;
    igObjectRefMember _platformData;
    char unknown44[12];
    inline ~beSvDeliverInstance() { __vtable = beSvDeliver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beSvDeliver)

META_GET_META(beSvDeliver)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beSvDeliver_vtableRead()
{
    beSvDeliverInstance object;
    object.__vtable = beSvDeliver_vtable;
    object._actConnect._value = 0;
    object._freeSizeList._value = 0;
    object._freeFileList._value = 0;
    object._formatList._value = 0;
    object._totalSizeList._value = 0;
    object._platformData._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvDeliver)

void beSvDeliver_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvDeliver_meta, igObject_register,
                       fn_800237D0, beSvDeliver_getMetaCall,
                       beSvDeliver_className, 0x44,
                       beSvDeliver_vtableRead, beSvDeliver_fieldInit, 0, beSvDeliver_dependencies);
}

META_GET_META_CALL(beSvDeliver)

void beSvDeliver_fieldInit()
{
    Meta::igMetaObject *meta = beSvDeliver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvDeliver_fieldTypes, 18);
    Meta::igObjectRefMetaField *gameDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    gameDataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    gameDataField->_construct = true;
    Meta::igIntMetaField *fileCapaField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 7));
    fn_80040030(fileCapaField, -1);
    Meta::igCharMetaField *useMtapField = static_cast<Meta::igCharMetaField *>(meta_field(meta, base + 8));
    fn_80040030(useMtapField, 0);
    Meta::igBoolMetaField *isEndOperatField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 12));
    void *value_value7 = fn_800365B4();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(isEndOperatField) + 0x38) = value_value7;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(isEndOperatField) + 0x34) = 1;
    Meta::igObjectRefMetaField *freeSizeListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    void *value_value9 = fn_800365B4();
    freeSizeListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    freeSizeListField->_construct = true;
    Meta::igObjectRefMetaField *freeFileListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 14));
    void *value_value11 = fn_800365B4();
    freeFileListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    freeFileListField->_construct = true;
    Meta::igObjectRefMetaField *formatListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 15));
    void *value_value13 = fn_800365B4();
    formatListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value13);
    formatListField->_construct = true;
    Meta::igObjectRefMetaField *totalSizeListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 16));
    totalSizeListField->_metaObject = beSaveDataDeliver_metaObject();
    totalSizeListField->_refCounted = false;
    Meta::igObjectRefMetaField *platformDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    platformDataField->_metaObject = beSvPlatBaseData_metaObject();
    meta_setupFields(meta, beSvDeliver_fieldNames, beSvDeliver_fieldStorage, beSvDeliver_fieldOffsets, base);
}

}
#pragma pop
