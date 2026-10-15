// igListenerList: Alchemy class registration (0x801436A8..0x80143808). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igListenerList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igListenerList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A9D04[];
}

struct Instance_801436E4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igListenerList)

void *igListenerList_vtableRead()
{
    Instance_801436E4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A9D04;
    object.__vtable = igListenerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igListenerList)

void igListenerList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igListenerList_meta, igObjectList_register,
                       fn_80024180, igListenerList_getMetaCall,
                       igListenerList_className, 0x14,
                       igListenerList_vtableRead, 0, 0, igListenerList_dependencies);
}

META_GET_META_CALL(igListenerList)

}
#pragma pop
