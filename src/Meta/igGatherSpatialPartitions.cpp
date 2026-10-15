// igGatherSpatialPartitions: Alchemy class registration (0x80147F40..0x8014816C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGatherSpatialPartitions)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_8012FC48();
void *fn_8012FEB0();
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

struct igGatherSpatialPartitionsInstance : Instance_804A46AC {
    char unknown2C[12];
    inline ~igGatherSpatialPartitionsInstance() { __vtable = igGatherSpatialPartitions_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGatherSpatialPartitions)

void *igGatherSpatialPartitions_vtableRead()
{
    igGatherSpatialPartitionsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igGatherSpatialPartitions_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGatherSpatialPartitions)

void igGatherSpatialPartitions_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igGatherSpatialPartitions_meta, igOptVisitObject_register,
                       fn_8012FEB0, igGatherSpatialPartitions_getMetaCall,
                       igGatherSpatialPartitions_className, 0x2C,
                       igGatherSpatialPartitions_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGatherSpatialPartitions)

}
#pragma pop
