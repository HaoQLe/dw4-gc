// beSvUseCheckApi: Alchemy class registration (0x802BE85C..0x802BEAB8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvUseCheckApi)
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

struct beSvUseCheckApiInstance : Instance_804E0F88 {
    char unknown3C[156];
    inline ~beSvUseCheckApiInstance() { __vtable = beSvUseCheckApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beSvUseCheckApi)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beSvUseCheckApi)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beSvUseCheckApi_vtableRead()
{
    beSvUseCheckApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvUseCheckApi_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvUseCheckApi)

void beSvUseCheckApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvUseCheckApi_meta, beSaveApi_register,
                       fn_802BD764, beSvUseCheckApi_getMetaCall,
                       beSvUseCheckApi_className, 0xD4,
                       beSvUseCheckApi_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beSvUseCheckApi)

}
#pragma pop
