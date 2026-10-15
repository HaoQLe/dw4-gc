// beUnicodeObjList: Alchemy class registration (0x802D9014..0x802D91E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beUnicodeObjList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beUnicodeObjList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D62F4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beUnicodeObjList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beUnicodeObjList)
#pragma pop

void *beUnicodeObjList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D62F4;
    object.__vtable = beUnicodeObjList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beUnicodeObjList)

void beUnicodeObjList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beUnicodeObjList_meta, igObjectList_register,
                       fn_80024180, beUnicodeObjList_getMetaCall,
                       beUnicodeObjList_className, 0x14,
                       beUnicodeObjList_vtableRead, 0, 0, beUnicodeObjList_dependencies);
}

META_GET_META_CALL(beUnicodeObjList)

}
#pragma pop
