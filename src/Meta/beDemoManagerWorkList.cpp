// beDemoManagerWorkList: Alchemy class registration (0x802DB45C..0x802DB62C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDemoManagerWorkList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beDemoManagerWorkList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D5CCC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beDemoManagerWorkList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beDemoManagerWorkList)
#pragma pop

void *beDemoManagerWorkList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D5CCC;
    object.__vtable = beDemoManagerWorkList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDemoManagerWorkList)

void beDemoManagerWorkList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDemoManagerWorkList_meta, igObjectList_register,
                       fn_80024180, beDemoManagerWorkList_getMetaCall,
                       beDemoManagerWorkList_className, 0x14,
                       beDemoManagerWorkList_vtableRead, 0, 0, beDemoManagerWorkList_dependencies);
}

META_GET_META_CALL(beDemoManagerWorkList)

}
#pragma pop
