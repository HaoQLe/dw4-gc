// igTextureMatrixAttr: Alchemy class registration (0x800AE214..0x800AE368). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigTextureMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigTextureMatrixAttr_1 : Instance_LigTextureMatrixAttr_0 {
};

struct Instance_LigTextureMatrixAttr_2 : Instance_LigTextureMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[72];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureMatrixAttr)

void *igTextureMatrixAttr_vtableRead()
{
    Instance_LigTextureMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureMatrixAttr)

void igTextureMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureMatrixAttr_getMetaCall,
                       igTextureMatrixAttr_className, 0x54,
                       igTextureMatrixAttr_vtableRead, igTextureMatrixAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureMatrixAttr)

}
#pragma pop
