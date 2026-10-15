// igTextureMatrixAttrPool: Alchemy class registration (0x801B1F5C..0x801B20C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureMatrixAttrPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igTextureMatrixAttrPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8F6C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureMatrixAttrPool)

void *igTextureMatrixAttrPool_vtableRead()
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
    object.__vtable = lbl_804B8F6C;
    object.__vtable = igTextureMatrixAttrPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureMatrixAttrPool)

void igTextureMatrixAttrPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTextureMatrixAttrPool_meta, igObjectPool_register,
                       fn_801AF130, igTextureMatrixAttrPool_getMetaCall,
                       igTextureMatrixAttrPool_className, 0x20,
                       igTextureMatrixAttrPool_vtableRead, 0, 0, igTextureMatrixAttrPool_dependencies);
}

META_GET_META_CALL(igTextureMatrixAttrPool)

}
#pragma pop
