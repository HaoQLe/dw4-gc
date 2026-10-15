// igLightSet: Alchemy class registration (0x801BB990..0x801BBBF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLightSet)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801AA6DC();
void *fn_801BBBF0();
extern char igLightSet_dependencies[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igLightSetInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _lights;
    char unknown20[8];
    inline ~igLightSetInstance() { __vtable = igLightSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightSet)

void *igLightSet_vtableRead()
{
    igLightSetInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igLightSet_vtable;
    object._lights._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightSet)

void igLightSet_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igLightSet_meta, igNode_register,
                       fn_801BBBF0, igLightSet_getMetaCall,
                       igLightSet_className, 0x20,
                       igLightSet_vtableRead, igLightSet_fieldInit, 0, igLightSet_dependencies);
}

META_GET_META_CALL(igLightSet)

}
#pragma pop
