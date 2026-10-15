// igListenerListList: Alchemy class registration (0x80143548..0x801436A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igListenerListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igListenerListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A9DCC[];
}

struct Instance_80143584_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igListenerListList)

void *igListenerListList_vtableRead()
{
    Instance_80143584_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A9DCC;
    object.__vtable = igListenerListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igListenerListList)

void igListenerListList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igListenerListList_meta, igObjectList_register,
                       fn_80024180, igListenerListList_getMetaCall,
                       igListenerListList_className, 0x14,
                       igListenerListList_vtableRead, 0, 0, igListenerListList_dependencies);
}

META_GET_META_CALL(igListenerListList)

}
#pragma pop
