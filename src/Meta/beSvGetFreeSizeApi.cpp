// beSvGetFreeSizeApi: Alchemy class registration (0x802BDDD4..0x802BE0B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvGetFreeSizeApi)
META_DECLARE(beSaveApi)

extern "C" {
extern char beSvGetFreeSizeApi_fieldNames[];
extern char beSvGetFreeSizeApi_fieldOffsets[];
extern char beSvGetFreeSizeApi_fieldStorage[];
extern char beSvGetFreeSizeApi_fieldTypes[];
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

struct beSvGetFreeSizeApiInstance : Instance_804E0F88 {
    char unknown3C[172];
    inline ~beSvGetFreeSizeApiInstance() { __vtable = beSvGetFreeSizeApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSvGetFreeSizeApi)

META_GET_META(beSvGetFreeSizeApi)

#pragma push
#pragma optimize_for_size off
void *beSvGetFreeSizeApi_vtableRead()
{
    beSvGetFreeSizeApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvGetFreeSizeApi_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvGetFreeSizeApi)

void beSvGetFreeSizeApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvGetFreeSizeApi_meta, beSaveApi_register,
                       fn_802BD764, beSvGetFreeSizeApi_getMetaCall,
                       beSvGetFreeSizeApi_className, 0xE0,
                       beSvGetFreeSizeApi_vtableRead, beSvGetFreeSizeApi_fieldInit, 0, 0);
}

META_GET_META_CALL(beSvGetFreeSizeApi)

void beSvGetFreeSizeApi_fieldInit()
{
    Meta::igMetaObject *meta = beSvGetFreeSizeApi_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvGetFreeSizeApi_fieldTypes, 0x3);
    meta_setupFields(meta, beSvGetFreeSizeApi_fieldNames, beSvGetFreeSizeApi_fieldStorage, beSvGetFreeSizeApi_fieldOffsets, base);
}

}
#pragma pop
