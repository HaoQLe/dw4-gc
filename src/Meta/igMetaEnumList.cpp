// igMetaEnumList: Alchemy class registration (0x8014CDC8..0x8014CF28). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMetaEnumList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igMetaEnumList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A8A6C[];
}

struct Instance_8014CE04_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMetaEnumList)

void *igMetaEnumList_vtableRead()
{
    Instance_8014CE04_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A8A6C;
    object.__vtable = igMetaEnumList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMetaEnumList)

void igMetaEnumList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMetaEnumList_meta, igObjectList_register,
                       fn_80024180, igMetaEnumList_getMetaCall,
                       igMetaEnumList_className, 0x14,
                       igMetaEnumList_vtableRead, 0, 0, igMetaEnumList_dependencies);
}

META_GET_META_CALL(igMetaEnumList)

}
#pragma pop
