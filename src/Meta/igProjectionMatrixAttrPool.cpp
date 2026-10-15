// igProjectionMatrixAttrPool: Alchemy class registration (0x801B25FC..0x801B2768). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igProjectionMatrixAttrPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igProjectionMatrixAttrPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8C4C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igProjectionMatrixAttrPool)

void *igProjectionMatrixAttrPool_vtableRead()
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
    object.__vtable = lbl_804B8C4C;
    object.__vtable = igProjectionMatrixAttrPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igProjectionMatrixAttrPool)

void igProjectionMatrixAttrPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igProjectionMatrixAttrPool_meta, igObjectPool_register,
                       fn_801AF130, igProjectionMatrixAttrPool_getMetaCall,
                       igProjectionMatrixAttrPool_className, 0x20,
                       igProjectionMatrixAttrPool_vtableRead, 0, 0, igProjectionMatrixAttrPool_dependencies);
}

META_GET_META_CALL(igProjectionMatrixAttrPool)

}
#pragma pop
