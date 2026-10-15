// beSvSlotDataList: Alchemy class registration (0x802BF7C4..0x802BF994). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvSlotDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beSvSlotDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DAFB4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beSvSlotDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beSvSlotDataList)
#pragma pop

void *beSvSlotDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DAFB4;
    object.__vtable = beSvSlotDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSvSlotDataList)

void beSvSlotDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvSlotDataList_meta, igObjectList_register,
                       fn_80024180, beSvSlotDataList_getMetaCall,
                       beSvSlotDataList_className, 0x14,
                       beSvSlotDataList_vtableRead, 0, 0, beSvSlotDataList_dependencies);
}

META_GET_META_CALL(beSvSlotDataList)

}
#pragma pop
