// igViewMode: Alchemy class registration (0x80407A18..0x80407BD0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igViewMode)
META_DECLARE(igView)

extern "C" {
void *fn_8010E6DC();
void fn_801285A0(void *);
void fn_80402E28();
extern char lbl_80495AD8[100];
}

struct Instance_LigViewMode_0 : igObjectInstance {
};

struct Instance_LigViewMode_1 : Instance_LigViewMode_0 {
    char unknown04[8];
    char unknown0C[64];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewMode)

META_GET_META(igViewMode)

void *igViewMode_vtableRead()
{
    Instance_LigViewMode_1 object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igViewMode_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igViewMode)

void igViewMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igViewMode_meta, igView_register,
                       fn_8010E6DC, igViewMode_getMetaCall,
                       igViewMode_className, 0x4C,
                       igViewMode_vtableRead, igViewMode_fieldInit, 0, 0);
}

META_GET_META_CALL(igViewMode)

}
#pragma pop
