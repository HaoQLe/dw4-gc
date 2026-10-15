// igLockBaseList: Alchemy class registration (0x80142CE4..0x80142E44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLockBaseList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igLockBaseList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A9F00[];
}

struct Instance_80142D20_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLockBaseList)

void *igLockBaseList_vtableRead()
{
    Instance_80142D20_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A9F00;
    object.__vtable = igLockBaseList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLockBaseList)

void igLockBaseList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igLockBaseList_meta, igObjectList_register,
                       fn_80024180, igLockBaseList_getMetaCall,
                       igLockBaseList_className, 0x14,
                       igLockBaseList_vtableRead, 0, 0, igLockBaseList_dependencies);
}

META_GET_META_CALL(igLockBaseList)

}
#pragma pop
