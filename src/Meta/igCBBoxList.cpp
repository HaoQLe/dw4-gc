// igCBBoxList: Alchemy class registration (0x80137FA4..0x80138104). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCBBoxList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igCBBoxList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804AA4F0[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCBBoxList)

void *igCBBoxList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804AA4F0;
    object.__vtable = igCBBoxList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCBBoxList)

void igCBBoxList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCBBoxList_meta, igObjectList_register,
                       fn_80024180, igCBBoxList_getMetaCall,
                       igCBBoxList_className, 0x14,
                       igCBBoxList_vtableRead, 0, 0, igCBBoxList_dependencies);
}

META_GET_META_CALL(igCBBoxList)

}
#pragma pop
