// igVertexBlendMatrixListAttrPool: Alchemy class registration (0x801B22AC..0x801B2418). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexBlendMatrixListAttrPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igVertexBlendMatrixListAttrPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8DDC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexBlendMatrixListAttrPool)

void *igVertexBlendMatrixListAttrPool_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = igObjectPool_vtable;
    object.__vtable = lbl_804B8DDC;
    object.__vtable = igVertexBlendMatrixListAttrPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendMatrixListAttrPool)

void igVertexBlendMatrixListAttrPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igVertexBlendMatrixListAttrPool_meta, igObjectPool_register,
                       fn_801AF130, igVertexBlendMatrixListAttrPool_getMetaCall,
                       igVertexBlendMatrixListAttrPool_className, 0x20,
                       igVertexBlendMatrixListAttrPool_vtableRead, 0, 0, igVertexBlendMatrixListAttrPool_dependencies);
}

META_GET_META_CALL(igVertexBlendMatrixListAttrPool)

}
#pragma pop
