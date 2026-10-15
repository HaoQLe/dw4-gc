// igMatrixStack: Alchemy class registration (0x80217B70..0x80217CBC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMatrixStack)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_80216620();
void fn_80217CBC();
extern char lbl_804BC4D4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixStack)

void *igMatrixStack_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_804BC4D4;
    object.__vtable = igMatrixStack_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixStack)

void igMatrixStack_register()
{
    fn_80216620();
    meta_registerClass(0, &igMatrixStack_meta, igDataList_register,
                       fn_80024D1C, igMatrixStack_getMetaCall,
                       igMatrixStack_className, 0x14,
                       igMatrixStack_vtableRead, fn_80217CBC, 0, 0);
}

META_GET_META_CALL(igMatrixStack)

}
#pragma pop
