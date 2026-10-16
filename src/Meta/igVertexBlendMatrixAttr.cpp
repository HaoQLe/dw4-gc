// igVertexBlendMatrixAttr: Alchemy class registration (0x800AD2FC..0x800AD488). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexBlendMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char lbl_8047D578[128];
extern char lbl_8047E50C[132];
}

struct Instance_LigVertexBlendMatrixAttr_0 : igObjectInstance {
};

struct Instance_LigVertexBlendMatrixAttr_1 : Instance_LigVertexBlendMatrixAttr_0 {
};

struct Instance_LigVertexBlendMatrixAttr_2 : Instance_LigVertexBlendMatrixAttr_1 {
    char unknown04[8];
    char unknown0C[68];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexBlendMatrixAttr)

META_GET_META(igVertexBlendMatrixAttr)

void *igVertexBlendMatrixAttr_vtableRead()
{
    Instance_LigVertexBlendMatrixAttr_2 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexBlendMatrixAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendMatrixAttr)

void igVertexBlendMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexBlendMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexBlendMatrixAttr_getMetaCall,
                       igVertexBlendMatrixAttr_className, 0x50,
                       igVertexBlendMatrixAttr_vtableRead, igVertexBlendMatrixAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igVertexBlendMatrixAttr)

}
#pragma pop
