// beSelectCtrlInfoRamData: Alchemy class registration (0x802BA200..0x802BA34C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSelectCtrlInfoRamData)
META_DECLARE(igNamedObject)

extern "C" {
extern char lbl_804DBC50[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beSelectCtrlInfoRamDataInstance : Instance_804DBC50 {
    char unknown0C[16];
    igObjectRefMember _work;
    inline ~beSelectCtrlInfoRamDataInstance() { __vtable = beSelectCtrlInfoRamData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSelectCtrlInfoRamData)

void *beSelectCtrlInfoRamData_vtableRead()
{
    beSelectCtrlInfoRamDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beSelectCtrlInfoRamData_vtable;
    object._work._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
