// beSvSlotPS2: Alchemy class registration (0x802BF994..0x802BFAE8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvSlotPS2)
META_DECLARE(beSvSlotData)

extern "C" {
void fn_802B1AC8();
void *fn_802BFAE8();
extern char lbl_804DAE94[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSvSlotPS2)

void *beSvSlotPS2_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804DAE94;
    object.__vtable = beSvSlotPS2_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSvSlotPS2)

void beSvSlotPS2_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvSlotPS2_meta, beSvSlotData_register,
                       fn_802BFAE8, beSvSlotPS2_getMetaCall,
                       beSvSlotPS2_className, 0x18,
                       beSvSlotPS2_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beSvSlotPS2)

}
#pragma pop
