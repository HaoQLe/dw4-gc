// igProjectionMatrixAttr: Alchemy class registration (0x800B1E5C..0x800B1FB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igProjectionMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigProjectionMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigProjectionMatrixAttr_1 : Instance_LigProjectionMatrixAttr_0 {
};

struct Instance_LigProjectionMatrixAttr_2 : Instance_LigProjectionMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[64];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igProjectionMatrixAttr)

void *igProjectionMatrixAttr_vtableRead()
{
    Instance_LigProjectionMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igProjectionMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igProjectionMatrixAttr)

void igProjectionMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igProjectionMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igProjectionMatrixAttr_getMetaCall,
                       igProjectionMatrixAttr_className, 0x4C,
                       igProjectionMatrixAttr_vtableRead, igProjectionMatrixAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igProjectionMatrixAttr)

}
#pragma pop
