// igModelViewMatrixAttrPool: Alchemy class registration (0x801B294C..0x801B2AB8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igModelViewMatrixAttrPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igModelViewMatrixAttrPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8ABC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModelViewMatrixAttrPool)

void *igModelViewMatrixAttrPool_vtableRead()
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
    object.__vtable = lbl_804B8ABC;
    object.__vtable = igModelViewMatrixAttrPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModelViewMatrixAttrPool)

void igModelViewMatrixAttrPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igModelViewMatrixAttrPool_meta, igObjectPool_register,
                       fn_801AF130, igModelViewMatrixAttrPool_getMetaCall,
                       igModelViewMatrixAttrPool_className, 0x20,
                       igModelViewMatrixAttrPool_vtableRead, 0, 0, igModelViewMatrixAttrPool_dependencies);
}

META_GET_META_CALL(igModelViewMatrixAttrPool)

}
#pragma pop
