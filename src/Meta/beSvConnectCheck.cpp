// beSvConnectCheck: Alchemy class registration (0x802BD440..0x802BD63C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvConnectCheck)

extern "C" {
extern char lbl_804E0F88[];
}

struct Instance_804E0F88 : igObjectInstance {
    char unknown04[44];
    igObjectRefMember _imageWork;
    igObjectRefMember _mountWork;
    igObjectRefMember _iconWork;
    inline ~Instance_804E0F88() { __vtable = lbl_804E0F88; }
};

struct beSvConnectCheckInstance : Instance_804E0F88 {
    char unknown3C[188];
    inline ~beSvConnectCheckInstance() { __vtable = beSvConnectCheck_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSvConnectCheck)

META_METAOBJECT(beSvConnectCheck)

META_GET_META(beSvConnectCheck)

#pragma push
#pragma optimize_for_size off
void *beSvConnectCheck_vtableRead()
{
    beSvConnectCheckInstance object;
    object.__vtable = lbl_804E0F88;
    object._imageWork._value = 0;
    object._mountWork._value = 0;
    object._iconWork._value = 0;
    object.__vtable = beSvConnectCheck_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
