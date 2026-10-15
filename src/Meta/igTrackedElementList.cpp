// igTrackedElementList: Alchemy class registration (0x800D2720..0x800D286C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTrackedElementList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_800CE2F8();
void fn_800D286C();
extern char lbl_80493C48[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTrackedElementList)

void *igTrackedElementList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80493C48;
    object.__vtable = igTrackedElementList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTrackedElementList)

void igTrackedElementList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igTrackedElementList_meta, igDataList_register,
                       fn_80024D1C, igTrackedElementList_getMetaCall,
                       igTrackedElementList_className, 0x14,
                       igTrackedElementList_vtableRead, fn_800D286C, 0, 0);
}

META_GET_META_CALL(igTrackedElementList)

}
#pragma pop
