// igItemBaseList: Alchemy class registration (0x80145A48..0x80145BA8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igItemBaseList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igItemBaseList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A9734[];
}

struct Instance_80145A84_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igItemBaseList)

void *igItemBaseList_vtableRead()
{
    Instance_80145A84_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A9734;
    object.__vtable = igItemBaseList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igItemBaseList)

void igItemBaseList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igItemBaseList_meta, igObjectList_register,
                       fn_80024180, igItemBaseList_getMetaCall,
                       igItemBaseList_className, 0x14,
                       igItemBaseList_vtableRead, 0, 0, igItemBaseList_dependencies);
}

META_GET_META_CALL(igItemBaseList)

}
#pragma pop
