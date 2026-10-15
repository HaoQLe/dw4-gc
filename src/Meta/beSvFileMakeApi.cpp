// beSvFileMakeApi: Alchemy class registration (0x802BEF70..0x802BF2FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSvFileMakeApi)
META_DECLARE(beSaveApi)
META_DECLARE(beSaveMemoryObj)
META_DECLARE(beSvPlatBaseData)

extern "C" {
extern char beSvFileMakeApi_dependencies[12];
extern char beSvFileMakeApi_fieldNames[];
extern char beSvFileMakeApi_fieldOffsets[];
extern char beSvFileMakeApi_fieldStorage[];
extern char beSvFileMakeApi_fieldTypes[];
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

struct beSvFileMakeApiInstance : Instance_804E0F88 {
    char unknown3C[152];
    igObjectRefMember _earlyGamedata;
    igObjectRefMember _saveWork;
    char unknownDC[4];
    inline ~beSvFileMakeApiInstance() { __vtable = beSvFileMakeApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beSvFileMakeApi)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beSvFileMakeApi)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beSvFileMakeApi_vtableRead()
{
    beSvFileMakeApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvFileMakeApi_vtable;
    object._earlyGamedata._value = 0;
    object._saveWork._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvFileMakeApi)

void beSvFileMakeApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvFileMakeApi_meta, beSaveApi_register,
                       fn_802BD764, beSvFileMakeApi_getMetaCall,
                       beSvFileMakeApi_className, 0xE0,
                       beSvFileMakeApi_vtableRead, beSvFileMakeApi_fieldInit, 0, beSvFileMakeApi_dependencies);
}

META_GET_META_CALL(beSvFileMakeApi)

void beSvFileMakeApi_fieldInit()
{
    Meta::igMetaObject *meta = beSvFileMakeApi_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvFileMakeApi_fieldTypes, 2);
    Meta::igObjectRefMetaField *earlyGamedataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    earlyGamedataField->_metaObject = beSvPlatBaseData_metaObject();
    Meta::igObjectRefMetaField *saveWorkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    saveWorkField->_metaObject = beSaveMemoryObj_metaObject();
    meta_setupFields(meta, beSvFileMakeApi_fieldNames, beSvFileMakeApi_fieldStorage, beSvFileMakeApi_fieldOffsets, base);
}

}
#pragma pop
