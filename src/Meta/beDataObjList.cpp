// beDataObjList: Alchemy class registration (0x802DBFFC..0x802DC20C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDataObjList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beDataObjList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476298[];
extern char lbl_80476E0C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beDataObjList)

META_METAOBJECT(beDataObjList)

META_GET_META(beDataObjList)

void *beDataObjList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80476298;
    object.__vtable = beDataObjList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDataObjList)

void beDataObjList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjList_meta, igObjectList_register,
                       fn_80024180, beDataObjList_getMetaCall,
                       beDataObjList_className, 0x14,
                       beDataObjList_vtableRead, 0, 0, beDataObjList_dependencies);
}

META_GET_META_CALL(beDataObjList)

}
#pragma pop
