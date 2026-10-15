// igOnOffModel: Alchemy class registration (0x8010EEF0..0x8010F0F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOnOffModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010D6A0();
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldTypes[4];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igOnOffModelInstance : igGuiComponentModelInstance {
    char unknown0C[36];
    inline ~igOnOffModelInstance() { __vtable = igOnOffModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOnOffModel)

void *igOnOffModel_vtableRead()
{
    igOnOffModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igOnOffModel_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOnOffModel)

void igOnOffModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igOnOffModel_meta, igGuiComponentModel_register,
                       fn_8010D6A0, igOnOffModel_getMetaCall,
                       igOnOffModel_className, 0x28,
                       igOnOffModel_vtableRead, igOnOffModel_fieldInit, 0, 0);
}

META_GET_META_CALL(igOnOffModel)

void igOnOffModel_fieldInit()
{
    Meta::igMetaObject *meta = igOnOffModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igOnOffModel_fieldTypes, 1);
    meta_setupFields(meta, igOnOffModel_fieldNames, igOnOffModel_fieldStorage, igOnOffModel_fieldOffsets, base);
}

}
#pragma pop
