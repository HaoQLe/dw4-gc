// igBlendListRecordList: Alchemy class registration (0x801C38BC..0x801C3A1C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBlendListRecordList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igBlendListRecordList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B7184[];
}

struct Instance_801C38F8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendListRecordList)

void *igBlendListRecordList_vtableRead()
{
    Instance_801C38F8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7184;
    object.__vtable = igBlendListRecordList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendListRecordList)

void igBlendListRecordList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igBlendListRecordList_meta, igObjectList_register,
                       fn_80024180, igBlendListRecordList_getMetaCall,
                       igBlendListRecordList_className, 0x14,
                       igBlendListRecordList_vtableRead, 0, 0, igBlendListRecordList_dependencies);
}

META_GET_META_CALL(igBlendListRecordList)

}
#pragma pop
