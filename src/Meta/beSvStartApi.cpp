// beSvStartApi: Alchemy class registration (0x802BDAA4..0x802BDD08). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvStartApi)
META_DECLARE(beSaveApi)

extern "C" {
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BDD08();
extern char lbl_804E0F88[];
}

struct Instance_804E0F88 : igObjectInstance {
    char unknown04[44];
    igObjectRefMember _imageWork;
    igObjectRefMember _mountWork;
    igObjectRefMember _iconWork;
    inline ~Instance_804E0F88() { __vtable = lbl_804E0F88; }
};

struct beSvStartApiInstance : Instance_804E0F88 {
    char unknown3C[156];
    inline ~beSvStartApiInstance() { __vtable = beSvStartApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSvStartApi)

META_GET_META(beSvStartApi)

#pragma push
#pragma optimize_for_size off
void *beSvStartApi_vtableRead()
{
    beSvStartApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvStartApi_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvStartApi)

void beSvStartApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvStartApi_meta, beSaveApi_register,
                       fn_802BD764, beSvStartApi_getMetaCall,
                       beSvStartApi_className, 0xD4,
                       beSvStartApi_vtableRead, fn_802BDD08, 0, 0);
}

META_GET_META_CALL(beSvStartApi)

}
#pragma pop
