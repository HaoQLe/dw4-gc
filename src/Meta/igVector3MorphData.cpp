// igVector3MorphData: Alchemy class registration (0x800B375C..0x800B38DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVector3MorphData)

extern "C" {
extern char lbl_8047E058[];
}

struct igVector3MorphDataInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _base;
    igObjectRefMember _targets;
    char unknown10[8];
    igObjectRefMember _activeTargets;
    igObjectRefMember _activeCoeff;
    char unknown20[24];
    inline ~igVector3MorphDataInstance() { __vtable = igVector3MorphData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVector3MorphData)

void *igVector3MorphData_vtableRead()
{
    igVector3MorphDataInstance object;
    object.__vtable = lbl_8047E058;
    object.__vtable = igVector3MorphData_vtable;
    object._base._value = 0;
    object._targets._value = 0;
    object._activeTargets._value = 0;
    object._activeCoeff._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
