// igAnimationList: Alchemy class registration (0x801CC400..0x801CC560). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B5E04[];
}

struct Instance_801CC43C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationList)

void *igAnimationList_vtableRead()
{
    Instance_801CC43C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B5E04;
    object.__vtable = igAnimationList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationList)

void igAnimationList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationList_meta, igObjectList_register,
                       fn_80024180, igAnimationList_getMetaCall,
                       igAnimationList_className, 0x14,
                       igAnimationList_vtableRead, 0, 0, igAnimationList_dependencies);
}

META_GET_META_CALL(igAnimationList)

}
#pragma pop
