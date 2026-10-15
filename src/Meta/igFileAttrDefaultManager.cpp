// igFileAttrDefaultManager: Alchemy class registration (0x800B75CC..0x800B7704). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFileAttrDefaultManager)
META_DECLARE(igAttrDefaultManager)

extern "C" {
void fn_800ABC8C();
void *fn_800ABEF8();
extern char lbl_8047D514[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFileAttrDefaultManager)

void *igFileAttrDefaultManager_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D514;
    object.__vtable = igFileAttrDefaultManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFileAttrDefaultManager)

void igFileAttrDefaultManager_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igFileAttrDefaultManager_meta, igAttrDefaultManager_register,
                       fn_800ABEF8, igFileAttrDefaultManager_getMetaCall,
                       igFileAttrDefaultManager_className, 0x8,
                       igFileAttrDefaultManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igFileAttrDefaultManager)

}
#pragma pop
