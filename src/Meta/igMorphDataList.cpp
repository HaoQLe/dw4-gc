// igMorphDataList: Alchemy class registration (0x800B3D44..0x800B3EA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMorphDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igMorphDataList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DED4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMorphDataList)

void *igMorphDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DED4;
    object.__vtable = igMorphDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMorphDataList)

void igMorphDataList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMorphDataList_meta, igObjectList_register,
                       fn_80024180, igMorphDataList_getMetaCall,
                       igMorphDataList_className, 0x14,
                       igMorphDataList_vtableRead, 0, 0, igMorphDataList_dependencies);
}

META_GET_META_CALL(igMorphDataList)

}
#pragma pop
