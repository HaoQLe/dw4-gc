// beSvFormatApi: Alchemy class registration (0x802BEAB8..0x802BED14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvFormatApi)
META_DECLARE(beSaveApi)

extern "C" {
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

struct beSvFormatApiInstance : Instance_804E0F88 {
    char unknown3C[156];
    inline ~beSvFormatApiInstance() { __vtable = beSvFormatApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSvFormatApi)

META_GET_META(beSvFormatApi)

#pragma push
#pragma optimize_for_size off
void *beSvFormatApi_vtableRead()
{
    beSvFormatApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvFormatApi_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvFormatApi)

void beSvFormatApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvFormatApi_meta, beSaveApi_register,
                       fn_802BD764, beSvFormatApi_getMetaCall,
                       beSvFormatApi_className, 0xD4,
                       beSvFormatApi_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beSvFormatApi)

}
#pragma pop
