// beAction2DataList: Alchemy class registration (0x802E6D28..0x802E6EF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2DataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beAction2DataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D3710[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beAction2DataList)

META_GET_META(beAction2DataList)

void *beAction2DataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D3710;
    object.__vtable = beAction2DataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beAction2DataList)

void beAction2DataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2DataList_meta, igObjectList_register,
                       fn_80024180, beAction2DataList_getMetaCall,
                       beAction2DataList_className, 0x14,
                       beAction2DataList_vtableRead, 0, 0, beAction2DataList_dependencies);
}

META_GET_META_CALL(beAction2DataList)

}
#pragma pop
