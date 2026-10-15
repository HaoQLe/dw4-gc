// igZFilterWeightListList: Alchemy class registration (0x80148E0C..0x80148FA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igZFilterWeightListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igZFilterWeightListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A92E8[];
}

struct Instance_80148E80_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igZFilterWeightListList)

META_GET_META(igZFilterWeightListList)

void *igZFilterWeightListList_vtableRead()
{
    Instance_80148E80_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A92E8;
    object.__vtable = igZFilterWeightListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igZFilterWeightListList)

void igZFilterWeightListList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igZFilterWeightListList_meta, igObjectList_register,
                       fn_80024180, igZFilterWeightListList_getMetaCall,
                       igZFilterWeightListList_className, 0x14,
                       igZFilterWeightListList_vtableRead, 0, 0, igZFilterWeightListList_dependencies);
}

META_GET_META_CALL(igZFilterWeightListList)

}
#pragma pop
