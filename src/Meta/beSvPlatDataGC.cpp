// beSvPlatDataGC: Alchemy class registration (0x802BD0E0..0x802BD440). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(beSvPlatDataGC)
META_DECLARE(beSvPlatBaseData)

extern "C" {
extern char beSvPlatDataGC_fieldNames[52];
extern char beSvPlatDataGC_fieldOffsets[52];
extern char beSvPlatDataGC_fieldStorage[52];
extern char beSvPlatDataGC_fieldTypes[52];
void *fn_80037E48();
void fn_80053650(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_802B1AC8();
void *fn_802BC428();
extern char lbl_8041DCC8[12];
extern char lbl_805348D4[4];
}

struct beSvPlatBaseDataInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _slotList;
    inline ~beSvPlatBaseDataInstance() { __vtable = beSvPlatBaseData_vtable; }
};

struct beSvPlatDataGCInstance : beSvPlatBaseDataInstance {
    char unknown10[88];
    igStringMember _fileName;
    char unknown6C[36];
    inline ~beSvPlatDataGCInstance() { __vtable = beSvPlatDataGC_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beSvPlatDataGC)
#pragma pop

void *beSvPlatDataGC_vtableRead()
{
    beSvPlatDataGCInstance object;
    object.__vtable = beSvPlatBaseData_vtable;
    object._slotList._value = 0;
    object.__vtable = beSvPlatDataGC_vtable;
    object._fileName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSvPlatDataGC)

void beSvPlatDataGC_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvPlatDataGC_meta, beSvPlatBaseData_register,
                       fn_802BC428, beSvPlatDataGC_getMetaCall,
                       beSvPlatDataGC_className, 0x8C,
                       beSvPlatDataGC_vtableRead, beSvPlatDataGC_fieldInit, 0, 0);
}

META_GET_META_CALL(beSvPlatDataGC)

#pragma push
#pragma optimize_for_size off
void beSvPlatDataGC_fieldInit()
{
    Meta::igMetaObject *meta = beSvPlatDataGC_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvPlatDataGC_fieldTypes, 13);
    Meta::igIntMetaField *connectMaxField = static_cast<Meta::igIntMetaField *>(fn_800658F8(meta, lbl_8041DCC8));   // "_connectMax"
    int connectMaxIndex = fn_80053998(meta->_metaFields, connectMaxField);
    connectMaxField = static_cast<Meta::igIntMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(connectMaxField)->virtual54(1));   // a copy of it
    fn_80053650(connectMaxField, 2);
    connectMaxField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805348D4);
    fn_8006588C(meta, connectMaxIndex, connectMaxField);
    meta_release(connectMaxField);
    Meta::igMemoryRefMetaField *iconTplDataField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base + 2));
    *reinterpret_cast<int *>(reinterpret_cast<char *>(iconTplDataField) + 0x34) = 2;
    Meta::igIntMetaField *iconSpeedField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 9));
    void *value_v5 = fn_80037E48();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(iconSpeedField) + 0x3C) = value_v5;
    Meta::igIntMetaField *banTplSizeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 11));
    void *value_v7 = fn_80037E48();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(banTplSizeField) + 0x3C) = value_v7;
    Meta::igIntMetaField *iconTplSizeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 12));
    *reinterpret_cast<int *>(reinterpret_cast<char *>(iconTplSizeField) + 0x34) = 64;
    meta_setupFields(meta, beSvPlatDataGC_fieldNames, beSvPlatDataGC_fieldStorage, beSvPlatDataGC_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
