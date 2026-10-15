// igVertexBlendMatrixAttrList: Alchemy class registration (0x800AD19C..0x800AD2FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexBlendMatrixAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igVertexBlendMatrixAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E3E4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexBlendMatrixAttrList)

void *igVertexBlendMatrixAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047E3E4;
    object.__vtable = igVertexBlendMatrixAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendMatrixAttrList)

void igVertexBlendMatrixAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexBlendMatrixAttrList_meta, igObjectList_register,
                       fn_80024180, igVertexBlendMatrixAttrList_getMetaCall,
                       igVertexBlendMatrixAttrList_className, 0x14,
                       igVertexBlendMatrixAttrList_vtableRead, 0, 0, igVertexBlendMatrixAttrList_dependencies);
}

META_GET_META_CALL(igVertexBlendMatrixAttrList)

}
#pragma pop
