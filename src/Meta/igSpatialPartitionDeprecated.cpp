// igSpatialPartitionDeprecated: Alchemy class registration (0x80132540..0x801326AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSpatialPartitionDeprecated)

extern "C" {
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct igSpatialPartitionDeprecatedInstance : Instance_804A4A04 {
    char unknown28[24];
    igObjectRefMember _instancedGeometryList;
    char unknown44[4];
    inline ~igSpatialPartitionDeprecatedInstance() { __vtable = igSpatialPartitionDeprecated_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSpatialPartitionDeprecated)

void *igSpatialPartitionDeprecated_vtableRead()
{
    igSpatialPartitionDeprecatedInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igSpatialPartitionDeprecated_vtable;
    object._instancedGeometryList._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
