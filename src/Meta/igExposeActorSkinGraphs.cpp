// igExposeActorSkinGraphs: Alchemy class registration (0x8014B7B0..0x8014B98C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igExposeActorSkinGraphs)
META_DECLARE(igOptBase)

extern "C" {
void fn_8012FC48();
void *fn_801308D0();
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

struct igExposeActorSkinGraphsInstance : Instance_804A4A04 {
    char unknown28[8];
    inline ~igExposeActorSkinGraphsInstance() { __vtable = igExposeActorSkinGraphs_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igExposeActorSkinGraphs)

void *igExposeActorSkinGraphs_vtableRead()
{
    igExposeActorSkinGraphsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igExposeActorSkinGraphs_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igExposeActorSkinGraphs)

void igExposeActorSkinGraphs_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igExposeActorSkinGraphs_meta, igOptBase_register,
                       fn_801308D0, igExposeActorSkinGraphs_getMetaCall,
                       igExposeActorSkinGraphs_className, 0x28,
                       igExposeActorSkinGraphs_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igExposeActorSkinGraphs)

}
#pragma pop
