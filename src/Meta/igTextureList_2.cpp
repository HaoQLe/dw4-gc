// igTextureList: Alchemy class registration (0x800BAB00..0x800BAC60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igTextureList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DAEC[];
}

struct Instance_800BAB3C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureList)

void *igTextureList_vtableRead()
{
    Instance_800BAB3C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DAEC;
    object.__vtable = igTextureList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureList)

void igTextureList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureList_meta, igObjectList_register,
                       fn_80024180, igTextureList_getMetaCall,
                       igTextureList_className, 0x14,
                       igTextureList_vtableRead, 0, 0, igTextureList_dependencies);
}

META_GET_META_CALL(igTextureList)

}
#pragma pop
