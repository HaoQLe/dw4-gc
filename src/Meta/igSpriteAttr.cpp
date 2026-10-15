// igSpriteAttr: Alchemy class registration (0x800B06C8..0x800B07A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSpriteAttr)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igSpriteAttrInstance : igObjectInstance {
    char unknown04[20];
    igObjectRefMember _vertexArray;
    char unknown1C[4];
    inline ~igSpriteAttrInstance() { __vtable = igSpriteAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSpriteAttr)

void *igSpriteAttr_vtableRead()
{
    igSpriteAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igSpriteAttr_vtable;
    object._vertexArray._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
