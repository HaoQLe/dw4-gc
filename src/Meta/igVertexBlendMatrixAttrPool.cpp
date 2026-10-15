// igVertexBlendMatrixAttrPool: Alchemy class registration (0x801B2454..0x801B25C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexBlendMatrixAttrPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igVertexBlendMatrixAttrPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8D14[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexBlendMatrixAttrPool)

void *igVertexBlendMatrixAttrPool_vtableRead()
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
    object.__vtable = lbl_804B8D14;
    object.__vtable = igVertexBlendMatrixAttrPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendMatrixAttrPool)

void igVertexBlendMatrixAttrPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igVertexBlendMatrixAttrPool_meta, igObjectPool_register,
                       fn_801AF130, igVertexBlendMatrixAttrPool_getMetaCall,
                       igVertexBlendMatrixAttrPool_className, 0x20,
                       igVertexBlendMatrixAttrPool_vtableRead, 0, 0, igVertexBlendMatrixAttrPool_dependencies);
}

META_GET_META_CALL(igVertexBlendMatrixAttrPool)

}
#pragma pop
