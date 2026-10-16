// beSvPlatDataXbox: Alchemy class registration (0x802BC438..0x802BC77C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igUnsignedIntMetaField.h>

META_DECLARE(beSvPlatDataXbox)
META_DECLARE(beSvPlatBaseData)
META_DECLARE(beXboxImage24k)

extern "C" {
extern char beSvPlatDataXbox_dependencies[8];
extern char beSvPlatDataXbox_fieldNames[16];
extern char beSvPlatDataXbox_fieldOffsets[16];
extern char beSvPlatDataXbox_fieldStorage[16];
extern char beSvPlatDataXbox_fieldTypes[16];
void fn_80053650(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_802B1AC8();
void *fn_802BC428();
extern char lbl_8041DCC8[12];
extern char lbl_80534844[4];
}

struct beSvPlatBaseDataInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _slotList;
    inline ~beSvPlatBaseDataInstance() { __vtable = beSvPlatBaseData_vtable; }
};

struct beSvPlatDataXboxInstance : beSvPlatBaseDataInstance {
    char unknown10[20];
    igObjectRefMember _image;
    char unknown28[8];
    inline ~beSvPlatDataXboxInstance() { __vtable = beSvPlatDataXbox_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSvPlatDataXbox)

void *beSvPlatDataXbox_vtableRead()
{
    beSvPlatDataXboxInstance object;
    object.__vtable = beSvPlatBaseData_vtable;
    object._slotList._value = 0;
    object.__vtable = beSvPlatDataXbox_vtable;
    object._image._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSvPlatDataXbox)

void beSvPlatDataXbox_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvPlatDataXbox_meta, beSvPlatBaseData_register,
                       fn_802BC428, beSvPlatDataXbox_getMetaCall,
                       beSvPlatDataXbox_className, 0x2C,
                       beSvPlatDataXbox_vtableRead, beSvPlatDataXbox_fieldInit, 0, beSvPlatDataXbox_dependencies);
}

META_GET_META_CALL(beSvPlatDataXbox)

#pragma push
#pragma optimize_for_size off
void beSvPlatDataXbox_fieldInit()
{
    Meta::igMetaObject *meta = beSvPlatDataXbox_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvPlatDataXbox_fieldTypes, 4);
    Meta::igIntMetaField *connectMaxField = static_cast<Meta::igIntMetaField *>(fn_800658F8(meta, lbl_8041DCC8));   // "_connectMax"
    int connectMaxIndex = fn_80053998(meta->_metaFields, connectMaxField);
    connectMaxField = static_cast<Meta::igIntMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(connectMaxField)->virtual54(1));   // a copy of it
    fn_80053650(connectMaxField, 9);
    connectMaxField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534844);
    fn_8006588C(meta, connectMaxIndex, connectMaxField);
    meta_release(connectMaxField);
    Meta::igIntMetaField *imageSizeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    Meta::igMetaObject *beXboxImage24kMeta = beXboxImage24k_metaObject();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(imageSizeField) + 0x38) = beXboxImage24kMeta;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(imageSizeField) + 0x34) = 1;
    Meta::igUnsignedIntMetaField *saveDataSizeField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base + 3));
    *reinterpret_cast<int *>(reinterpret_cast<char *>(saveDataSizeField) + 0x34) = 2;
    meta_setupFields(meta, beSvPlatDataXbox_fieldNames, beSvPlatDataXbox_fieldStorage, beSvPlatDataXbox_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
