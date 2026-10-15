// igTextureBindAttr: Alchemy class registration (0x800AF1A4..0x800AF280). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureBindAttr)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igTextureBindAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _texture;
    char unknown10[16];
    inline ~igTextureBindAttrInstance() { __vtable = igTextureBindAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureBindAttr)

void *igTextureBindAttr_vtableRead()
{
    igTextureBindAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureBindAttr_vtable;
    object._texture._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
