// igInterfaceDeclarationList: Alchemy class registration (0x80145C90..0x80145E14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInterfaceDeclarationList)
META_DECLARE(igCompoundList)

extern "C" {
void fn_8012FC48();
void *fn_801452A8();
void fn_80145E14();
extern char lbl_804A9674[];
}

struct Instance_80145D04_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igInterfaceDeclarationList)

META_GET_META(igInterfaceDeclarationList)

void *igInterfaceDeclarationList_vtableRead()
{
    Instance_80145D04_0 object;
    igObject_construct(&object);
    object.__vtable = igCompoundList_vtable;
    object.__vtable = lbl_804A9674;
    object.__vtable = igInterfaceDeclarationList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInterfaceDeclarationList)

void igInterfaceDeclarationList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igInterfaceDeclarationList_meta, igCompoundList_register,
                       fn_801452A8, igInterfaceDeclarationList_getMetaCall,
                       igInterfaceDeclarationList_className, 0x14,
                       igInterfaceDeclarationList_vtableRead, fn_80145E14, 0, 0);
}

META_GET_META_CALL(igInterfaceDeclarationList)

}
#pragma pop
