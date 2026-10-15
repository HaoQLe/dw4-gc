// beDataObjListList: Alchemy class registration (0x802DBDEC..0x802DBFFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDataObjListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beDataObjListList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D599C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beDataObjListList)

META_METAOBJECT(beDataObjListList)

META_GET_META(beDataObjListList)

void *beDataObjListList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D599C;
    object.__vtable = beDataObjListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDataObjListList)

void beDataObjListList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjListList_meta, igObjectList_register,
                       fn_80024180, beDataObjListList_getMetaCall,
                       beDataObjListList_className, 0x14,
                       beDataObjListList_vtableRead, 0, 0, beDataObjListList_dependencies);
}

META_GET_META_CALL(beDataObjListList)

}
#pragma pop
