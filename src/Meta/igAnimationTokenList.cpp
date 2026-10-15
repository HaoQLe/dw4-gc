// igAnimationTokenList: Alchemy class registration (0x801CA08C..0x801CA1EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationTokenList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationTokenList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B6630[];
}

struct Instance_801CA0C8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationTokenList)

void *igAnimationTokenList_vtableRead()
{
    Instance_801CA0C8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B6630;
    object.__vtable = igAnimationTokenList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationTokenList)

void igAnimationTokenList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationTokenList_meta, igObjectList_register,
                       fn_80024180, igAnimationTokenList_getMetaCall,
                       igAnimationTokenList_className, 0x14,
                       igAnimationTokenList_vtableRead, 0, 0, igAnimationTokenList_dependencies);
}

META_GET_META_CALL(igAnimationTokenList)

}
#pragma pop
