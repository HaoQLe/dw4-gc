// beModelCtrlInfoRamData: Alchemy class registration (0x802C8CFC..0x802C8E88). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlInfoRamData)
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

struct beModelCtrlInfoRamDataInstance : Instance_804DBC50 {
    char unknown0C[4];
    igObjectRefMember _node;
    igObjectRefMember _work;
    inline ~beModelCtrlInfoRamDataInstance() { __vtable = beModelCtrlInfoRamData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlInfoRamData)

#pragma push
#pragma optimize_for_size off
void *beModelCtrlInfoRamData_vtableRead()
{
    beModelCtrlInfoRamDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beModelCtrlInfoRamData_vtable;
    object._node._value = 0;
    object._work._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
