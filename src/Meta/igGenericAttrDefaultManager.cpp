// igGenericAttrDefaultManager: Alchemy class registration (0x800B6EB0..0x800B7020). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGenericAttrDefaultManager)
META_DECLARE(igAttrDefaultManager)

extern "C" {
void fn_800ABC8C();
void *fn_800ABEF8();
extern char lbl_8047D514[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGenericAttrDefaultManager)

META_GET_META(igGenericAttrDefaultManager)

void *igGenericAttrDefaultManager_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D514;
    object.__vtable = igGenericAttrDefaultManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGenericAttrDefaultManager)

void igGenericAttrDefaultManager_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igGenericAttrDefaultManager_meta, igAttrDefaultManager_register,
                       fn_800ABEF8, igGenericAttrDefaultManager_getMetaCall,
                       igGenericAttrDefaultManager_className, 0x8,
                       igGenericAttrDefaultManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGenericAttrDefaultManager)

}
#pragma pop
