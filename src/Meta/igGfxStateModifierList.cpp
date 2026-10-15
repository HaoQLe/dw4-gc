// igGfxStateModifierList: Alchemy class registration (0x800D3D34..0x800D3E80). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGfxStateModifierList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_800CE2F8();
void fn_800D3E80();
extern char lbl_804936BC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGfxStateModifierList)

void *igGfxStateModifierList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_804936BC;
    object.__vtable = igGfxStateModifierList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGfxStateModifierList)

void igGfxStateModifierList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGfxStateModifierList_meta, igDataList_register,
                       fn_80024D1C, igGfxStateModifierList_getMetaCall,
                       igGfxStateModifierList_className, 0x14,
                       igGfxStateModifierList_vtableRead, fn_800D3E80, 0, 0);
}

META_GET_META_CALL(igGfxStateModifierList)

}
#pragma pop
