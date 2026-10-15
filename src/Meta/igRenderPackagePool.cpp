// igRenderPackagePool: Alchemy class registration (0x801AEFC4..0x801AF130). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRenderPackagePool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igRenderPackagePool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B9650[];
}

struct Instance_801AF000_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRenderPackagePool)

void *igRenderPackagePool_vtableRead()
{
    Instance_801AF000_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = igObjectPool_vtable;
    object.__vtable = lbl_804B9650;
    object.__vtable = igRenderPackagePool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRenderPackagePool)

void igRenderPackagePool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igRenderPackagePool_meta, igObjectPool_register,
                       fn_801AF130, igRenderPackagePool_getMetaCall,
                       igRenderPackagePool_className, 0x20,
                       igRenderPackagePool_vtableRead, 0, 0, igRenderPackagePool_dependencies);
}

META_GET_META_CALL(igRenderPackagePool)

}
#pragma pop
