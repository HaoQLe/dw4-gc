// igItemBaseListList: Alchemy class registration (0x801458E8..0x80145A48). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igItemBaseListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igItemBaseListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A97FC[];
}

struct Instance_80145924_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igItemBaseListList)

void *igItemBaseListList_vtableRead()
{
    Instance_80145924_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A97FC;
    object.__vtable = igItemBaseListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igItemBaseListList)

void igItemBaseListList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igItemBaseListList_meta, igObjectList_register,
                       fn_80024180, igItemBaseListList_getMetaCall,
                       igItemBaseListList_className, 0x14,
                       igItemBaseListList_vtableRead, 0, 0, igItemBaseListList_dependencies);
}

META_GET_META_CALL(igItemBaseListList)

}
#pragma pop
