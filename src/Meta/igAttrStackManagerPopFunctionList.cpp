// igAttrStackManagerPopFunctionList: Alchemy class registration (0x801B2C60..0x801B2DA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrStackManagerPopFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_801AA6DC();
extern char lbl_804B8930[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrStackManagerPopFunctionList)

void *igAttrStackManagerPopFunctionList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_804B8930;
    object.__vtable = igAttrStackManagerPopFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrStackManagerPopFunctionList)

void igAttrStackManagerPopFunctionList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAttrStackManagerPopFunctionList_meta, igDataList_register,
                       fn_80024D1C, igAttrStackManagerPopFunctionList_getMetaCall,
                       igAttrStackManagerPopFunctionList_className, 0x14,
                       igAttrStackManagerPopFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igAttrStackManagerPopFunctionList)

}
#pragma pop
