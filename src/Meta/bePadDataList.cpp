// bePadDataList: Alchemy class registration (0x802C2538..0x802C2708). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(bePadDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char bePadDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DA90C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(bePadDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(bePadDataList)
#pragma pop

void *bePadDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DA90C;
    object.__vtable = bePadDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(bePadDataList)

void bePadDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &bePadDataList_meta, igObjectList_register,
                       fn_80024180, bePadDataList_getMetaCall,
                       bePadDataList_className, 0x14,
                       bePadDataList_vtableRead, 0, 0, bePadDataList_dependencies);
}

META_GET_META_CALL(bePadDataList)

}
#pragma pop
