// igBlendMatricesAttrPool: Alchemy class registration (0x801B1DB4..0x801B1F20). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBlendMatricesAttrPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igBlendMatricesAttrPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B9034[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendMatricesAttrPool)

void *igBlendMatricesAttrPool_vtableRead()
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
    object.__vtable = lbl_804B9034;
    object.__vtable = igBlendMatricesAttrPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendMatricesAttrPool)

void igBlendMatricesAttrPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igBlendMatricesAttrPool_meta, igObjectPool_register,
                       fn_801AF130, igBlendMatricesAttrPool_getMetaCall,
                       igBlendMatricesAttrPool_className, 0x20,
                       igBlendMatricesAttrPool_vtableRead, 0, 0, igBlendMatricesAttrPool_dependencies);
}

META_GET_META_CALL(igBlendMatricesAttrPool)

}
#pragma pop
