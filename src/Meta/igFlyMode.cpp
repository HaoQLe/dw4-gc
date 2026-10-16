// igFlyMode: Alchemy class registration (0x8040737C..0x80407578). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFlyMode)
META_DECLARE(igViewMode)

extern "C" {
void fn_801285A0(void *);
void *fn_802E170C();
void fn_80402E28();
extern char igFlyMode_dependencies[184];
extern char lbl_80495AD8[100];
}

struct Instance_LigFlyMode_0 : igObjectInstance {
};

struct Instance_LigFlyMode_1 : Instance_LigFlyMode_0 {
    char unknown04[8];
    char unknown0C[124];
};

struct igFlyModeInstance : Instance_LigFlyMode_1 {
    igObjectRefMember _window;
    char unknown8C[20];
    inline ~igFlyModeInstance() { __vtable = igFlyMode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igFlyMode)

META_GET_META(igFlyMode)

void *igFlyMode_vtableRead()
{
    igFlyModeInstance object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igViewMode_vtable;
    fn_801285A0(&object.unknown0C);
    object.__vtable = igFlyMode_vtable;
    object._window._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFlyMode)

void igFlyMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igFlyMode_meta, igViewMode_register,
                       fn_802E170C, igFlyMode_getMetaCall,
                       igFlyMode_className, 0xA0,
                       igFlyMode_vtableRead, igFlyMode_fieldInit, 0, igFlyMode_dependencies);
}

META_GET_META_CALL(igFlyMode)

}
#pragma pop
