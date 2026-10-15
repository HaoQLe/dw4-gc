// igAnimationModifierList: Alchemy class registration (0x801CA670..0x801CA7D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationModifierList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationModifierList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B650C[];
}

struct Instance_801CA6AC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationModifierList)

void *igAnimationModifierList_vtableRead()
{
    Instance_801CA6AC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B650C;
    object.__vtable = igAnimationModifierList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationModifierList)

void igAnimationModifierList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationModifierList_meta, igObjectList_register,
                       fn_80024180, igAnimationModifierList_getMetaCall,
                       igAnimationModifierList_className, 0x14,
                       igAnimationModifierList_vtableRead, 0, 0, igAnimationModifierList_dependencies);
}

META_GET_META_CALL(igAnimationModifierList)

}
#pragma pop
