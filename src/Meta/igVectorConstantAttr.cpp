// igVectorConstantAttr: Alchemy class registration (0x800AD5B0..0x800AD708). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVectorConstantAttr)
META_DECLARE(igCustomStateCollectionAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AD708();
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVectorConstantAttr)

void *igVectorConstantAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = lbl_8047CD74;
    object.__vtable = igVectorConstantAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVectorConstantAttr)

void igVectorConstantAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVectorConstantAttr_meta, igCustomStateCollectionAttr_register,
                       fn_800AD708, igVectorConstantAttr_getMetaCall,
                       igVectorConstantAttr_className, 0x20,
                       igVectorConstantAttr_vtableRead, igVectorConstantAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igVectorConstantAttr)

}
#pragma pop
