// beSvPlatDataPS2: Alchemy class registration (0x802BC9C0..0x802BCEF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatArrayMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igShortArrayMetaField.h>
#include <meta/igUnsignedIntMetaField.h>

META_DECLARE(beSvPlatDataPS2)
META_DECLARE(beSvPlatBaseData)

extern "C" {
extern char beSvPlatDataPS2_dependencies[8];
extern char beSvPlatDataPS2_fieldNames[88];
extern char beSvPlatDataPS2_fieldOffsets[88];
extern char beSvPlatDataPS2_fieldStorage[88];
extern char beSvPlatDataPS2_fieldTypes[88];
void *fn_80028F84();
void fn_80053650(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_802B1AC8();
void *fn_802BC428();
extern char lbl_8041DCC8[12];
extern char lbl_80534868[4];
}

struct beSvPlatBaseDataInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _slotList;
    inline ~beSvPlatBaseDataInstance() { __vtable = beSvPlatBaseData_vtable; }
};

struct beSvPlatDataPS2Instance : beSvPlatBaseDataInstance {
    char unknown10[8];
    igStringMember _dirName;
    igStringMember _title;
    char unknown20[152];
    igStringMember _fnameIcon0;
    igStringMember _fnameIcon1;
    igStringMember _fnameIcon2;
    char unknownC4[16];
    igObjectRefMember _image;
    inline ~beSvPlatDataPS2Instance() { __vtable = beSvPlatDataPS2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beSvPlatDataPS2)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beSvPlatDataPS2_vtableRead()
{
    beSvPlatDataPS2Instance object;
    object.__vtable = beSvPlatBaseData_vtable;
    object._slotList._value = 0;
    object.__vtable = beSvPlatDataPS2_vtable;
    object._dirName._value = 0;
    object._title._value = 0;
    object._fnameIcon0._value = 0;
    object._fnameIcon1._value = 0;
    object._fnameIcon2._value = 0;
    object._image._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvPlatDataPS2)

void beSvPlatDataPS2_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvPlatDataPS2_meta, beSvPlatBaseData_register,
                       fn_802BC428, beSvPlatDataPS2_getMetaCall,
                       beSvPlatDataPS2_className, 0xD8,
                       beSvPlatDataPS2_vtableRead, beSvPlatDataPS2_fieldInit, 0, beSvPlatDataPS2_dependencies);
}

META_GET_META_CALL(beSvPlatDataPS2)

#pragma push
#pragma optimize_for_size off
void beSvPlatDataPS2_fieldInit()
{
    Meta::igMetaObject *meta = beSvPlatDataPS2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvPlatDataPS2_fieldTypes, 22);
    Meta::igIntMetaField *connectMaxField = static_cast<Meta::igIntMetaField *>(fn_800658F8(meta, lbl_8041DCC8));   // "_connectMax"
    int connectMaxIndex = fn_80053998(meta->_metaFields, connectMaxField);
    connectMaxField = static_cast<Meta::igIntMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(connectMaxField)->virtual54(1));   // a copy of it
    fn_80053650(connectMaxField, 5);
    connectMaxField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534868);
    fn_8006588C(meta, connectMaxIndex, connectMaxField);
    meta_release(connectMaxField);
    Meta::igShortArrayMetaField *bgColor0Field = static_cast<Meta::igShortArrayMetaField *>(meta_field(meta, base + 4));
    bgColor0Field->_num = 4;
    Meta::igShortArrayMetaField *bgColor1Field = static_cast<Meta::igShortArrayMetaField *>(meta_field(meta, base + 5));
    bgColor1Field->_num = 4;
    Meta::igShortArrayMetaField *bgColor2Field = static_cast<Meta::igShortArrayMetaField *>(meta_field(meta, base + 6));
    bgColor2Field->_num = 4;
    Meta::igShortArrayMetaField *bgColor3Field = static_cast<Meta::igShortArrayMetaField *>(meta_field(meta, base + 7));
    bgColor3Field->_num = 4;
    Meta::igFloatArrayMetaField *lightDir0Field = static_cast<Meta::igFloatArrayMetaField *>(meta_field(meta, base + 8));
    lightDir0Field->_num = 4;
    Meta::igFloatArrayMetaField *lightDir1Field = static_cast<Meta::igFloatArrayMetaField *>(meta_field(meta, base + 9));
    lightDir1Field->_num = 4;
    Meta::igFloatArrayMetaField *lightDir2Field = static_cast<Meta::igFloatArrayMetaField *>(meta_field(meta, base + 10));
    lightDir2Field->_num = 4;
    Meta::igFloatArrayMetaField *lightColor0Field = static_cast<Meta::igFloatArrayMetaField *>(meta_field(meta, base + 11));
    lightColor0Field->_num = 4;
    Meta::igFloatArrayMetaField *lightColor1Field = static_cast<Meta::igFloatArrayMetaField *>(meta_field(meta, base + 12));
    lightColor1Field->_num = 4;
    Meta::igFloatArrayMetaField *lightColor2Field = static_cast<Meta::igFloatArrayMetaField *>(meta_field(meta, base + 13));
    lightColor2Field->_num = 4;
    Meta::igFloatArrayMetaField *ambientField = static_cast<Meta::igFloatArrayMetaField *>(meta_field(meta, base + 14));
    ambientField->_num = 4;
    Meta::igUnsignedIntMetaField *saveDataSizeField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 19));
    *reinterpret_cast<int *>(reinterpret_cast<char *>(saveDataSizeField) + 0x34) = 2;
    Meta::igObjectRefMetaField *imageField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 21));
    void *value_v16 = fn_80028F84();
    imageField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v16);
    imageField->_construct = true;
    meta_setupFields(meta, beSvPlatDataPS2_fieldNames, beSvPlatDataPS2_fieldStorage, beSvPlatDataPS2_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
