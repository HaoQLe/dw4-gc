// igStringRefList: Alchemy class registration (0x80024BD0..0x80024D1C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringRefList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80024D24();
extern char lbl_80476B54[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStringRefList)

void *igStringRefList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476B54;
    object.__vtable = igStringRefList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStringRefList)

void igStringRefList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igStringRefList_meta, igDataList_register,
                       fn_80024D1C, igStringRefList_getMetaCall,
                       igStringRefList_className, 0x14,
                       igStringRefList_vtableRead, fn_80024D24, 0, 0);
}

META_GET_META_CALL(igStringRefList)

}
#pragma pop
