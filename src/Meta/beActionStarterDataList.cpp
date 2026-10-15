// beActionStarterDataList: Alchemy class registration (0x802E4DE4..0x802E4FB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beActionStarterDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beActionStarterDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D3D68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beActionStarterDataList)

META_GET_META(beActionStarterDataList)

void *beActionStarterDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D3D68;
    object.__vtable = beActionStarterDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beActionStarterDataList)

void beActionStarterDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beActionStarterDataList_meta, igObjectList_register,
                       fn_80024180, beActionStarterDataList_getMetaCall,
                       beActionStarterDataList_className, 0x14,
                       beActionStarterDataList_vtableRead, 0, 0, beActionStarterDataList_dependencies);
}

META_GET_META_CALL(beActionStarterDataList)

}
#pragma pop
