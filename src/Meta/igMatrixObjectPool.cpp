// igMatrixObjectPool: Alchemy class registration (0x801B2104..0x801B2270). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMatrixObjectPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igMatrixObjectPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8EA4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixObjectPool)

void *igMatrixObjectPool_vtableRead()
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
    object.__vtable = lbl_804B8EA4;
    object.__vtable = igMatrixObjectPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixObjectPool)

void igMatrixObjectPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igMatrixObjectPool_meta, igObjectPool_register,
                       fn_801AF130, igMatrixObjectPool_getMetaCall,
                       igMatrixObjectPool_className, 0x20,
                       igMatrixObjectPool_vtableRead, 0, 0, igMatrixObjectPool_dependencies);
}

META_GET_META_CALL(igMatrixObjectPool)

}
#pragma pop
