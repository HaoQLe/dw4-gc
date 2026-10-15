// igCustomVectorStateList: Alchemy class registration (0x800D4DBC..0x800D4F54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCustomVectorStateList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igCustomVectorStateList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80493354[];
}

struct Instance_800D4E30_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCustomVectorStateList)

META_GET_META(igCustomVectorStateList)

void *igCustomVectorStateList_vtableRead()
{
    Instance_800D4E30_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80493354;
    object.__vtable = igCustomVectorStateList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCustomVectorStateList)

void igCustomVectorStateList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igCustomVectorStateList_meta, igObjectList_register,
                       fn_80024180, igCustomVectorStateList_getMetaCall,
                       igCustomVectorStateList_className, 0x14,
                       igCustomVectorStateList_vtableRead, 0, 0, igCustomVectorStateList_dependencies);
}

META_GET_META_CALL(igCustomVectorStateList)

}
#pragma pop
