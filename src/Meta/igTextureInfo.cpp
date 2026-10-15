// igTextureInfo: Alchemy class registration (0x800AE470..0x800AE5A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igTextureInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _textureList;
    char unknown18[8];
    inline ~igTextureInfoInstance() { __vtable = igTextureInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureInfo)

void *igTextureInfo_vtableRead()
{
    igTextureInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igTextureInfo_vtable;
    object._textureList._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
