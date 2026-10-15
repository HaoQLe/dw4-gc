// igMessageList: Alchemy class registration (0x80141A58..0x80141BB8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igMessageList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A9FC8[];
}

struct Instance_80141A94_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessageList)

void *igMessageList_vtableRead()
{
    Instance_80141A94_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A9FC8;
    object.__vtable = igMessageList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageList)

void igMessageList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMessageList_meta, igObjectList_register,
                       fn_80024180, igMessageList_getMetaCall,
                       igMessageList_className, 0x14,
                       igMessageList_vtableRead, 0, 0, igMessageList_dependencies);
}

META_GET_META_CALL(igMessageList)

}
#pragma pop
