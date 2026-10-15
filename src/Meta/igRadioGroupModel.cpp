// igRadioGroupModel: Alchemy class registration (0x8010ECE0..0x8010EE6C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRadioGroupModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010EE6C();
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igRadioGroupModelInstance : igModelInstance {
    char unknown0C[4];
    inline ~igRadioGroupModelInstance() { __vtable = igRadioGroupModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRadioGroupModel)

void *igRadioGroupModel_vtableRead()
{
    igRadioGroupModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igRadioGroupModel_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRadioGroupModel)

void igRadioGroupModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igRadioGroupModel_meta, igModel_register,
                       fn_8010EE6C, igRadioGroupModel_getMetaCall,
                       igRadioGroupModel_className, 0x10,
                       igRadioGroupModel_vtableRead, igRadioGroupModel_fieldInit, 0, 0);
}

META_GET_META_CALL(igRadioGroupModel)

}
#pragma pop
