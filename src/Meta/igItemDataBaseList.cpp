// igItemDataBaseList: Alchemy class registration (0x8014515C..0x801452A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igItemDataBaseList)
META_DECLARE(igCompoundList)

extern "C" {
void fn_8012FC48();
void *fn_801452A8();
void fn_801452B0();
extern char lbl_804A99B0[];
}

struct Instance_80145198_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igItemDataBaseList)

void *igItemDataBaseList_vtableRead()
{
    Instance_80145198_0 object;
    igObject_construct(&object);
    object.__vtable = igCompoundList_vtable;
    object.__vtable = lbl_804A99B0;
    object.__vtable = igItemDataBaseList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igItemDataBaseList)

void igItemDataBaseList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igItemDataBaseList_meta, igCompoundList_register,
                       fn_801452A8, igItemDataBaseList_getMetaCall,
                       igItemDataBaseList_className, 0x14,
                       igItemDataBaseList_vtableRead, fn_801452B0, 0, 0);
}

META_GET_META_CALL(igItemDataBaseList)

}
#pragma pop
