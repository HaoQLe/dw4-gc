// igCustomStateFieldList: Alchemy class registration (0x800D2F44..0x800D30A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCustomStateFieldList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igCustomStateFieldList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80493A90[];
}

struct Instance_800D2F80_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCustomStateFieldList)

void *igCustomStateFieldList_vtableRead()
{
    Instance_800D2F80_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80493A90;
    object.__vtable = igCustomStateFieldList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCustomStateFieldList)

void igCustomStateFieldList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igCustomStateFieldList_meta, igObjectList_register,
                       fn_80024180, igCustomStateFieldList_getMetaCall,
                       igCustomStateFieldList_className, 0x14,
                       igCustomStateFieldList_vtableRead, 0, 0, igCustomStateFieldList_dependencies);
}

META_GET_META_CALL(igCustomStateFieldList)

}
#pragma pop
