// igSimpleChildHolderModel: Alchemy class registration (0x8010D4B0..0x8010D6A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSimpleChildHolderModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010D6A0();
extern char igSimpleChildHolderModel_dependencies[8];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igSimpleChildHolderModelInstance : igGuiComponentModelInstance {
    char unknown0C[24];
    igObjectRefMember _child;
    char unknown28[24];
    inline ~igSimpleChildHolderModelInstance() { __vtable = igSimpleChildHolderModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSimpleChildHolderModel)

void *igSimpleChildHolderModel_vtableRead()
{
    igSimpleChildHolderModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igSimpleChildHolderModel_vtable;
    object._child._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSimpleChildHolderModel)

void igSimpleChildHolderModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igSimpleChildHolderModel_meta, igGuiComponentModel_register,
                       fn_8010D6A0, igSimpleChildHolderModel_getMetaCall,
                       igSimpleChildHolderModel_className, 0x34,
                       igSimpleChildHolderModel_vtableRead, igSimpleChildHolderModel_fieldInit, 0, igSimpleChildHolderModel_dependencies);
}

META_GET_META_CALL(igSimpleChildHolderModel)

}
#pragma pop
