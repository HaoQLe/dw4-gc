// igRotateMode: Alchemy class registration (0x80407000..0x804071B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRotateMode)
META_DECLARE(igViewMode)

extern "C" {
void fn_801285A0(void *);
void *fn_802E170C();
void fn_80402E28();
extern char lbl_80495AD8[100];
}

struct Instance_LigRotateMode_0 : igObjectInstance {
};

struct Instance_LigRotateMode_1 : Instance_LigRotateMode_0 {
    char unknown04[8];
    char unknown0C[136];
};

struct Instance_LigRotateMode_2 : Instance_LigRotateMode_1 {
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igRotateMode)

META_GET_META(igRotateMode)

void *igRotateMode_vtableRead()
{
    Instance_LigRotateMode_2 object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igViewMode_vtable;
    fn_801285A0(&object.unknown0C);
    object.__vtable = igRotateMode_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRotateMode)

void igRotateMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igRotateMode_meta, igViewMode_register,
                       fn_802E170C, igRotateMode_getMetaCall,
                       igRotateMode_className, 0x94,
                       igRotateMode_vtableRead, igRotateMode_fieldInit, 0, 0);
}

META_GET_META_CALL(igRotateMode)

}
#pragma pop
