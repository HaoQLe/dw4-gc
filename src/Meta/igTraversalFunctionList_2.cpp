// igTraversalFunctionList: Alchemy class registration (0x801B2E18..0x801B2F5C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTraversalFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_801AA6DC();
extern char lbl_804B8870[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTraversalFunctionList)

void *igTraversalFunctionList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_804B8870;
    object.__vtable = igTraversalFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTraversalFunctionList)

void igTraversalFunctionList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTraversalFunctionList_meta, igDataList_register,
                       fn_80024D1C, igTraversalFunctionList_getMetaCall,
                       igTraversalFunctionList_className, 0x14,
                       igTraversalFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igTraversalFunctionList)

}
#pragma pop
