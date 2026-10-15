// igOptimizeActorSkeletons: Alchemy class registration (0x8013A03C..0x8013A2B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>

META_DECLARE(igOptimizeActorSkeletons)
META_DECLARE(igOptBase)

extern "C" {
void fn_8003EC68(void *,int);
void fn_8012FC48();
void *fn_801308D0();
extern char igOptimizeActorSkeletons_fieldNames[8];
extern char igOptimizeActorSkeletons_fieldOffsets[8];
extern char igOptimizeActorSkeletons_fieldStorage[8];
extern char igOptimizeActorSkeletons_fieldTypes[8];
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

struct igOptimizeActorSkeletonsInstance : Instance_804A4A04 {
    char unknown28[8];
    inline ~igOptimizeActorSkeletonsInstance() { __vtable = igOptimizeActorSkeletons_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOptimizeActorSkeletons)

void *igOptimizeActorSkeletons_vtableRead()
{
    igOptimizeActorSkeletonsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igOptimizeActorSkeletons_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOptimizeActorSkeletons)

void igOptimizeActorSkeletons_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igOptimizeActorSkeletons_meta, igOptBase_register,
                       fn_801308D0, igOptimizeActorSkeletons_getMetaCall,
                       igOptimizeActorSkeletons_className, 0x2C,
                       igOptimizeActorSkeletons_vtableRead, igOptimizeActorSkeletons_fieldInit, 0, 0);
}

META_GET_META_CALL(igOptimizeActorSkeletons)

void igOptimizeActorSkeletons_fieldInit()
{
    Meta::igMetaObject *meta = igOptimizeActorSkeletons_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igOptimizeActorSkeletons_fieldTypes, 2);
    Meta::igBoolMetaField *convertUnusedJointsToBonesField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(convertUnusedJointsToBonesField, 1);
    Meta::igBoolMetaField *removeUnusedBonesField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(removeUnusedBonesField, 1);
    meta_setupFields(meta, igOptimizeActorSkeletons_fieldNames, igOptimizeActorSkeletons_fieldStorage, igOptimizeActorSkeletons_fieldOffsets, base);
}

}
#pragma pop
