// igRemoveJoints: Alchemy class registration (0x80135D1C..0x80135EF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRemoveJoints)
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

struct igRemoveJointsInstance : Instance_804A4A04 {
    char unknown28[8];
    inline ~igRemoveJointsInstance() { __vtable = igRemoveJoints_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRemoveJoints)

void *igRemoveJoints_vtableRead()
{
    igRemoveJointsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igRemoveJoints_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRemoveJoints)

void igRemoveJoints_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igRemoveJoints_meta, igOptBase_register,
                       fn_801308D0, igRemoveJoints_getMetaCall,
                       igRemoveJoints_className, 0x28,
                       igRemoveJoints_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igRemoveJoints)

}
#pragma pop
