// igCompileActorSkins: Alchemy class registration (0x8014EE0C..0x8014EFE8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCompileActorSkins)
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

struct igCompileActorSkinsInstance : Instance_804A4A04 {
    char unknown28[8];
    inline ~igCompileActorSkinsInstance() { __vtable = igCompileActorSkins_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCompileActorSkins)

void *igCompileActorSkins_vtableRead()
{
    igCompileActorSkinsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igCompileActorSkins_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCompileActorSkins)

void igCompileActorSkins_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCompileActorSkins_meta, igOptBase_register,
                       fn_801308D0, igCompileActorSkins_getMetaCall,
                       igCompileActorSkins_className, 0x28,
                       igCompileActorSkins_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igCompileActorSkins)

}
#pragma pop
