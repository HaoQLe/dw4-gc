// igModelViewMatrixAttr: Alchemy class registration (0x800B419C..0x800B42F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igModelViewMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_800B43D8();
void fn_801285A0(void *);
extern char lbl_8047D578[128];
extern char lbl_8047E50C[132];
}

struct Instance_LigModelViewMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigModelViewMatrixAttr_1 : Instance_LigModelViewMatrixAttr_0 {
};

struct Instance_LigModelViewMatrixAttr_2 : Instance_LigModelViewMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[64];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModelViewMatrixAttr)

void *igModelViewMatrixAttr_vtableRead()
{
    Instance_LigModelViewMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igModelViewMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModelViewMatrixAttr)

void igModelViewMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igModelViewMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igModelViewMatrixAttr_getMetaCall,
                       igModelViewMatrixAttr_className, 0x4C,
                       igModelViewMatrixAttr_vtableRead, igModelViewMatrixAttr_fieldInit, fn_800B43D8, 0);
}

META_GET_META_CALL(igModelViewMatrixAttr)

}
#pragma pop
