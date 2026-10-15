// igGuiComponentController: Alchemy class registration (0x801117EC..0x80111924). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGuiComponentController)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
extern char lbl_80495AD8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiComponentController)

void *igGuiComponentController_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igGuiComponentController_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGuiComponentController)

void igGuiComponentController_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igGuiComponentController_meta, igView_register,
                       fn_8010E6DC, igGuiComponentController_getMetaCall,
                       igGuiComponentController_className, 0xC,
                       igGuiComponentController_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGuiComponentController)

}
#pragma pop
