// beDataBaseList: Alchemy class registration (0x802DD834..0x802DD9B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDataBaseList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beDataBaseList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D53F0[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beDataBaseList)

void *beDataBaseList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D53F0;
    object.__vtable = beDataBaseList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDataBaseList)

void beDataBaseList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataBaseList_meta, igObjectList_register,
                       fn_80024180, beDataBaseList_getMetaCall,
                       beDataBaseList_className, 0x14,
                       beDataBaseList_vtableRead, 0, 0, beDataBaseList_dependencies);
}

META_GET_META_CALL(beDataBaseList)

}
#pragma pop
