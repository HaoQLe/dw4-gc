// igAttrStackList: Alchemy class registration (0x801C8410..0x801C8570). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrStackList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAttrStackList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B6B34[];
}

struct Instance_801C844C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrStackList)

void *igAttrStackList_vtableRead()
{
    Instance_801C844C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B6B34;
    object.__vtable = igAttrStackList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrStackList)

void igAttrStackList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAttrStackList_meta, igObjectList_register,
                       fn_80024180, igAttrStackList_getMetaCall,
                       igAttrStackList_className, 0x14,
                       igAttrStackList_vtableRead, 0, 0, igAttrStackList_dependencies);
}

META_GET_META_CALL(igAttrStackList)

}
#pragma pop
