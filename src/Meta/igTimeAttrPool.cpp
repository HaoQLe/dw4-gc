// igTimeAttrPool: Alchemy class registration (0x801B27A4..0x801B2910). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTimeAttrPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igTimeAttrPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8B84[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTimeAttrPool)

void *igTimeAttrPool_vtableRead()
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
    object.__vtable = lbl_804B8B84;
    object.__vtable = igTimeAttrPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTimeAttrPool)

void igTimeAttrPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTimeAttrPool_meta, igObjectPool_register,
                       fn_801AF130, igTimeAttrPool_getMetaCall,
                       igTimeAttrPool_className, 0x20,
                       igTimeAttrPool_vtableRead, 0, 0, igTimeAttrPool_dependencies);
}

META_GET_META_CALL(igTimeAttrPool)

}
#pragma pop
