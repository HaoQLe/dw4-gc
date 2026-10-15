// beCriHandleList: Alchemy class registration (0x802DEB34..0x802DED04). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCriHandleList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beCriHandleList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D5074[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beCriHandleList)

META_GET_META(beCriHandleList)

void *beCriHandleList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D5074;
    object.__vtable = beCriHandleList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCriHandleList)

void beCriHandleList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriHandleList_meta, igObjectList_register,
                       fn_80024180, beCriHandleList_getMetaCall,
                       beCriHandleList_className, 0x14,
                       beCriHandleList_vtableRead, 0, 0, beCriHandleList_dependencies);
}

META_GET_META_CALL(beCriHandleList)

}
#pragma pop
