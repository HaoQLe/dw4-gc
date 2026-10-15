// beDemoKeepMesList: Alchemy class registration (0x802DB904..0x802DBAD4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDemoKeepMesList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beDemoKeepMesList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D5B34[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beDemoKeepMesList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beDemoKeepMesList)
#pragma pop

void *beDemoKeepMesList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D5B34;
    object.__vtable = beDemoKeepMesList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDemoKeepMesList)

void beDemoKeepMesList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDemoKeepMesList_meta, igObjectList_register,
                       fn_80024180, beDemoKeepMesList_getMetaCall,
                       beDemoKeepMesList_className, 0x14,
                       beDemoKeepMesList_vtableRead, 0, 0, beDemoKeepMesList_dependencies);
}

META_GET_META_CALL(beDemoKeepMesList)

}
#pragma pop
