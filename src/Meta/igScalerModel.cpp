// igScalerModel: Alchemy class registration (0x8010DB34..0x8010DD30). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igScalerModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)
META_DECLARE(igSimpleChildHolderModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010DD30();
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
    inline ~igSimpleChildHolderModelInstance() { __vtable = igSimpleChildHolderModel_vtable; }
};

struct igScalerModelInstance : igSimpleChildHolderModelInstance {
    char unknown28[24];
    inline ~igScalerModelInstance() { __vtable = igScalerModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScalerModel)

void *igScalerModel_vtableRead()
{
    igScalerModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igSimpleChildHolderModel_vtable;
    object._child._value = 0;
    object.__vtable = igScalerModel_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igScalerModel)

void igScalerModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igScalerModel_meta, igSimpleChildHolderModel_register,
                       fn_8010DD30, igScalerModel_getMetaCall,
                       igScalerModel_className, 0x40,
                       igScalerModel_vtableRead, igScalerModel_fieldInit, 0, 0);
}

META_GET_META_CALL(igScalerModel)

}
#pragma pop
