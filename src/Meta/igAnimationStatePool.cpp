// igAnimationStatePool: Alchemy class registration (0x801C94C0..0x801C9664). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationStatePool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igAnimationStatePool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B67C0[];
}

struct Instance_801C9534_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAnimationStatePool)

META_GET_META(igAnimationStatePool)

void *igAnimationStatePool_vtableRead()
{
    Instance_801C9534_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = igObjectPool_vtable;
    object.__vtable = lbl_804B67C0;
    object.__vtable = igAnimationStatePool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationStatePool)

void igAnimationStatePool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationStatePool_meta, igObjectPool_register,
                       fn_801AF130, igAnimationStatePool_getMetaCall,
                       igAnimationStatePool_className, 0x20,
                       igAnimationStatePool_vtableRead, 0, 0, igAnimationStatePool_dependencies);
}

META_GET_META_CALL(igAnimationStatePool)

}
#pragma pop
