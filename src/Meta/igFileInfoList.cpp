// igFileInfoList: Alchemy class registration (0x8014A994..0x8014AAF4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFileInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igFileInfoList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A8C58[];
}

struct Instance_8014A9D0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFileInfoList)

void *igFileInfoList_vtableRead()
{
    Instance_8014A9D0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A8C58;
    object.__vtable = igFileInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFileInfoList)

void igFileInfoList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igFileInfoList_meta, igObjectList_register,
                       fn_80024180, igFileInfoList_getMetaCall,
                       igFileInfoList_className, 0x14,
                       igFileInfoList_vtableRead, 0, 0, igFileInfoList_dependencies);
}

META_GET_META_CALL(igFileInfoList)

}
#pragma pop
