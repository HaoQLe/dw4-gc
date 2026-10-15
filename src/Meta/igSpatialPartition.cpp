// igSpatialPartition: Alchemy class registration (0x8013291C..0x80132B48). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSpatialPartition)

extern "C" {
extern char lbl_804A46AC[];
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

struct Instance_804A46AC : Instance_804A4A04 {
    igObjectRefMember _visitedMetaObject;
    inline ~Instance_804A46AC() { __vtable = lbl_804A46AC; }
};

struct igSpatialPartitionInstance : Instance_804A46AC {
    char unknown2C[40];
    igObjectRefMember _boxHelper;
    igObjectRefMember _vaHelper;
    igObjectRefMember _groups;
    inline ~igSpatialPartitionInstance() { __vtable = igSpatialPartition_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSpatialPartition)

void *igSpatialPartition_vtableRead()
{
    igSpatialPartitionInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igSpatialPartition_vtable;
    object._boxHelper._value = 0;
    object._vaHelper._value = 0;
    object._groups._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
