// igNodeList: Alchemy class registration (0x801B7390..0x801B74F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNodeList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igNodeList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8304[];
}

struct Instance_801B73CC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNodeList)

void *igNodeList_vtableRead()
{
    Instance_801B73CC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B8304;
    object.__vtable = igNodeList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNodeList)

void igNodeList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igNodeList_meta, igObjectList_register,
                       fn_80024180, igNodeList_getMetaCall,
                       igNodeList_className, 0x14,
                       igNodeList_vtableRead, 0, 0, igNodeList_dependencies);
}

META_GET_META_CALL(igNodeList)

}
#pragma pop
