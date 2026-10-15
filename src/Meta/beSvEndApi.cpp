// beSvEndApi: Alchemy class registration (0x802BD774..0x802BD9D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvEndApi)
META_DECLARE(beSaveApi)

extern "C" {
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BD9D8();
extern char lbl_804E0F88[];
}

struct Instance_804E0F88 : igObjectInstance {
    char unknown04[44];
    igObjectRefMember _imageWork;
    igObjectRefMember _mountWork;
    igObjectRefMember _iconWork;
    inline ~Instance_804E0F88() { __vtable = lbl_804E0F88; }
};

struct beSvEndApiInstance : Instance_804E0F88 {
    char unknown3C[156];
    inline ~beSvEndApiInstance() { __vtable = beSvEndApi_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSvEndApi)

META_GET_META(beSvEndApi)

#pragma push
#pragma optimize_for_size off
void *beSvEndApi_vtableRead()
{
    beSvEndApiInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvEndApi_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvEndApi)

void beSvEndApi_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvEndApi_meta, beSaveApi_register,
                       fn_802BD764, beSvEndApi_getMetaCall,
                       beSvEndApi_className, 0xD4,
                       beSvEndApi_vtableRead, fn_802BD9D8, 0, 0);
}

META_GET_META_CALL(beSvEndApi)

}
#pragma pop
