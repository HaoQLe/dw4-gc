// beSvWriteMediaApi: Alchemy class registration (0x802BE0B8..0x802BE444). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSvWriteMediaApi)
META_DECLARE(beSaveApi)
META_DECLARE(beSaveMemoryObj)
META_DECLARE(beSvPlatBaseData)

extern "C" {
extern char beSvWriteMediaApi_dependencies[12];
extern char beSvWriteMediaApi_fieldNames[];
extern char beSvWriteMediaApi_fieldOffsets[];
extern char beSvWriteMediaApi_fieldStorage[];
extern char beSvWriteMediaApi_fieldTypes[];
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

struct beSvWriteMediaApiInstance : Instance_804E0F88 {
    char unknown3C[152];
    igObjectRefMember _nowGamedata;
    igObjectRefMember _saveWork;
    char unknownDC[4];
    inline ~beSvWriteMediaApiInstance() { __vtable = beSvWriteMediaApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beSvWriteMediaApi)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beSvWriteMediaApi)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beSvWriteMediaApi_vtableRead()
{
    beSvWriteMediaApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvWriteMediaApi_vtable;
    object._nowGamedata._value = 0;
    object._saveWork._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvWriteMediaApi)

void beSvWriteMediaApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvWriteMediaApi_meta, beSaveApi_register,
                       fn_802BD764, beSvWriteMediaApi_getMetaCall,
                       beSvWriteMediaApi_className, 0xE0,
                       beSvWriteMediaApi_vtableRead, beSvWriteMediaApi_fieldInit, 0, beSvWriteMediaApi_dependencies);
}

META_GET_META_CALL(beSvWriteMediaApi)

void beSvWriteMediaApi_fieldInit()
{
    Meta::igMetaObject *meta = beSvWriteMediaApi_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvWriteMediaApi_fieldTypes, 2);
    Meta::igObjectRefMetaField *nowGamedataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    nowGamedataField->_metaObject = beSvPlatBaseData_metaObject();
    Meta::igObjectRefMetaField *saveWorkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    saveWorkField->_metaObject = beSaveMemoryObj_metaObject();
    meta_setupFields(meta, beSvWriteMediaApi_fieldNames, beSvWriteMediaApi_fieldStorage, beSvWriteMediaApi_fieldOffsets, base);
}

}
#pragma pop
