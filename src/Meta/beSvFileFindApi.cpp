// beSvFileFindApi: Alchemy class registration (0x802BED14..0x802BEF70). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvFileFindApi)
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

struct beSvFileFindApiInstance : Instance_804E0F88 {
    char unknown3C[156];
    inline ~beSvFileFindApiInstance() { __vtable = beSvFileFindApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSvFileFindApi)

META_GET_META(beSvFileFindApi)

#pragma push
#pragma optimize_for_size off
void *beSvFileFindApi_vtableRead()
{
    beSvFileFindApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvFileFindApi_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvFileFindApi)

void beSvFileFindApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvFileFindApi_meta, beSaveApi_register,
                       fn_802BD764, beSvFileFindApi_getMetaCall,
                       beSvFileFindApi_className, 0xD4,
                       beSvFileFindApi_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beSvFileFindApi)

}
#pragma pop
