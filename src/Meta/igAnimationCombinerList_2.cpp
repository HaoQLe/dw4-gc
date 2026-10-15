// igAnimationCombinerList: Alchemy class registration (0x801CB87C..0x801CB9DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationCombinerList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationCombinerList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B606C[];
}

struct Instance_801CB8B8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationCombinerList)

void *igAnimationCombinerList_vtableRead()
{
    Instance_801CB8B8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B606C;
    object.__vtable = igAnimationCombinerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationCombinerList)

void igAnimationCombinerList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationCombinerList_meta, igObjectList_register,
                       fn_80024180, igAnimationCombinerList_getMetaCall,
                       igAnimationCombinerList_className, 0x14,
                       igAnimationCombinerList_vtableRead, 0, 0, igAnimationCombinerList_dependencies);
}

META_GET_META_CALL(igAnimationCombinerList)

}
#pragma pop
