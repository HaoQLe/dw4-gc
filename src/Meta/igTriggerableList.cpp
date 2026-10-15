// igTriggerableList: Alchemy class registration (0x802842C8..0x80284444). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTriggerableList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char igTriggerableList_dependencies[104];
extern char lbl_80476E0C[];
extern char lbl_804CBC50[];
}

struct Instance_80284314_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTriggerableList)

void *igTriggerableList_vtableRead()
{
    Instance_80284314_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CBC50;
    object.__vtable = igTriggerableList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTriggerableList)

void igTriggerableList_register()
{
    fn_80284294();
    meta_registerClass(0, &igTriggerableList_meta, igObjectList_register,
                       fn_80024180, igTriggerableList_getMetaCall,
                       igTriggerableList_className, 0x14,
                       igTriggerableList_vtableRead, 0, 0, igTriggerableList_dependencies);
}

META_GET_META_CALL(igTriggerableList)

}
#pragma pop
