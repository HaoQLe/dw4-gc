// igVertexBlendMatrixListAttr: Alchemy class registration (0x800ACEBC..0x800AD0A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexBlendMatrixListAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_801285A0(void *);
extern char igVertexBlendMatrixListAttr_dependencies[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigVertexBlendMatrixListAttr_0 : igObjectInstance {
    inline Instance_LigVertexBlendMatrixListAttr_0()
    {
        __vtable = lbl_8047D578;
    }
};

struct Instance_LigVertexBlendMatrixListAttr_1 : Instance_LigVertexBlendMatrixListAttr_0 {
    inline Instance_LigVertexBlendMatrixListAttr_1()
    {
        __vtable = lbl_8047E50C;
    }
};

struct igVertexBlendMatrixListAttrInstance : Instance_LigVertexBlendMatrixListAttr_1 {
    char unknown04[20];
    igObjectRefMember _matrixList;
    char unknown1C[64];
    char unknown5C[64];
    inline igVertexBlendMatrixListAttrInstance()
    {
        __vtable = igVertexBlendMatrixListAttr_vtable;
        _matrixList._value = 0;
        fn_801285A0(&unknown1C);
        fn_801285A0(&unknown5C);
    }
    inline ~igVertexBlendMatrixListAttrInstance() { __vtable = igVertexBlendMatrixListAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexBlendMatrixListAttr)

META_GET_META(igVertexBlendMatrixListAttr)

void *igVertexBlendMatrixListAttr_vtableRead()
{
    igVertexBlendMatrixListAttrInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendMatrixListAttr)

void igVertexBlendMatrixListAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexBlendMatrixListAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexBlendMatrixListAttr_getMetaCall,
                       igVertexBlendMatrixListAttr_className, 0x9C,
                       igVertexBlendMatrixListAttr_vtableRead, igVertexBlendMatrixListAttr_fieldInit, 0, igVertexBlendMatrixListAttr_dependencies);
}

META_GET_META_CALL(igVertexBlendMatrixListAttr)

}
#pragma pop
