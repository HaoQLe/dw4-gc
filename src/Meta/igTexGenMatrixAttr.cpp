// igTexGenMatrixAttr: Alchemy class registration (0x800AFD50..0x800AFEA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTexGenMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigTexGenMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigTexGenMatrixAttr_1 : Instance_LigTexGenMatrixAttr_0 {
};

struct Instance_LigTexGenMatrixAttr_2 : Instance_LigTexGenMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[68];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTexGenMatrixAttr)

void *igTexGenMatrixAttr_vtableRead()
{
    Instance_LigTexGenMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTexGenMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTexGenMatrixAttr)

void igTexGenMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTexGenMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTexGenMatrixAttr_getMetaCall,
                       igTexGenMatrixAttr_className, 0x50,
                       igTexGenMatrixAttr_vtableRead, igTexGenMatrixAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTexGenMatrixAttr)

}
#pragma pop
