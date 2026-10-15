// igOptManager: Alchemy class registration (0x8013B028..0x8013B2B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOptManager)
META_DECLARE(igManager)

extern "C" {
void fn_8012FC48();
void *fn_8013B2B0();
void fn_8013B3D8();
extern char igOptManager_dependencies[20];
extern char lbl_804A6460[];
}

struct igOptManagerInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    igObjectRefMember _statistics;
    igObjectRefMember _root;
    igStringMember _applicationPath;
    char unknown34[12];
    inline ~igOptManagerInstance() { __vtable = igOptManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOptManager)

void *igOptManager_vtableRead()
{
    igOptManagerInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = igManager_vtable;
    object.__vtable = igOptManager_vtable;
    object._registry._value = 0;
    object._configuration._value = 0;
    object._statistics._value = 0;
    object._root._value = 0;
    object._applicationPath._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOptManager)

void igOptManager_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igOptManager_meta, igManager_register,
                       fn_8013B2B0, igOptManager_getMetaCall,
                       igOptManager_className, 0x3C,
                       igOptManager_vtableRead, igOptManager_fieldInit, fn_8013B3D8, igOptManager_dependencies);
}

META_GET_META_CALL(igOptManager)

}
#pragma pop
