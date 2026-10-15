// igMessageListList: Alchemy class registration (0x801418BC..0x80141A1C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igMessageListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804AA090[];
}

struct Instance_801418F8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessageListList)

void *igMessageListList_vtableRead()
{
    Instance_801418F8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804AA090;
    object.__vtable = igMessageListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageListList)

void igMessageListList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMessageListList_meta, igObjectList_register,
                       fn_80024180, igMessageListList_getMetaCall,
                       igMessageListList_className, 0x14,
                       igMessageListList_vtableRead, 0, 0, igMessageListList_dependencies);
}

META_GET_META_CALL(igMessageListList)

}
#pragma pop
