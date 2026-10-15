// igFieldChangeViewList: Alchemy class registration (0x80112700..0x80112860). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFieldChangeViewList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igFieldChangeViewList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804973C0[];
}

struct Instance_8011273C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFieldChangeViewList)

void *igFieldChangeViewList_vtableRead()
{
    Instance_8011273C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804973C0;
    object.__vtable = igFieldChangeViewList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFieldChangeViewList)

void igFieldChangeViewList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igFieldChangeViewList_meta, igObjectList_register,
                       fn_80024180, igFieldChangeViewList_getMetaCall,
                       igFieldChangeViewList_className, 0x14,
                       igFieldChangeViewList_vtableRead, 0, 0, igFieldChangeViewList_dependencies);
}

META_GET_META_CALL(igFieldChangeViewList)

}
#pragma pop
