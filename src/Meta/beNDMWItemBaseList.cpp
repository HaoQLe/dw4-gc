// beNDMWItemBaseList: Alchemy class registration (0x8034361C..0x8034382C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemBaseList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWItemBaseList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E48D8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWItemBaseList)

META_METAOBJECT(beNDMWItemBaseList)

META_GET_META(beNDMWItemBaseList)

void *beNDMWItemBaseList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E48D8;
    object.__vtable = beNDMWItemBaseList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWItemBaseList)

void beNDMWItemBaseList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWItemBaseList_meta, igObjectList_register,
                       fn_80024180, beNDMWItemBaseList_getMetaCall,
                       beNDMWItemBaseList_className, 0x14,
                       beNDMWItemBaseList_vtableRead, 0, 0, beNDMWItemBaseList_dependencies);
}

META_GET_META_CALL(beNDMWItemBaseList)

}
#pragma pop
