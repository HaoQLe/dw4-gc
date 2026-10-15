// igAnimationTrackList: Alchemy class registration (0x801CD320..0x801CD480). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationTrackList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationTrackList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B5A98[];
}

struct Instance_801CD35C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationTrackList)

void *igAnimationTrackList_vtableRead()
{
    Instance_801CD35C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B5A98;
    object.__vtable = igAnimationTrackList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationTrackList)

void igAnimationTrackList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationTrackList_meta, igObjectList_register,
                       fn_80024180, igAnimationTrackList_getMetaCall,
                       igAnimationTrackList_className, 0x14,
                       igAnimationTrackList_vtableRead, 0, 0, igAnimationTrackList_dependencies);
}

META_GET_META_CALL(igAnimationTrackList)

}
#pragma pop
