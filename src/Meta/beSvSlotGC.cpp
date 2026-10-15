// beSvSlotGC: Alchemy class registration (0x802BFAF8..0x802BFC4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvSlotGC)
META_DECLARE(beSvSlotData)

extern "C" {
void fn_802B1AC8();
void *fn_802BFAE8();
extern char lbl_804DAE94[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSvSlotGC)

void *beSvSlotGC_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804DAE94;
    object.__vtable = beSvSlotGC_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSvSlotGC)

void beSvSlotGC_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvSlotGC_meta, beSvSlotData_register,
                       fn_802BFAE8, beSvSlotGC_getMetaCall,
                       beSvSlotGC_className, 0x18,
                       beSvSlotGC_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beSvSlotGC)

}
#pragma pop
