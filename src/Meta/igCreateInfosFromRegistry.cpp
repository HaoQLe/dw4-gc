// igCreateInfosFromRegistry: Alchemy class registration (0x8014D260..0x8014D4EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCreateInfosFromRegistry)
META_DECLARE(igOptBase)

extern "C" {
void fn_8012FC48();
void *fn_801308D0();
extern char igCreateInfosFromRegistry_fieldNames[8];
extern char igCreateInfosFromRegistry_fieldOffsets[8];
extern char igCreateInfosFromRegistry_fieldStorage[8];
extern char igCreateInfosFromRegistry_fieldTypes[8];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct igCreateInfosFromRegistryInstance : Instance_804A4A04 {
    igStringMember _registryName;
    char unknown2C[12];
    inline ~igCreateInfosFromRegistryInstance() { __vtable = igCreateInfosFromRegistry_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCreateInfosFromRegistry)

void *igCreateInfosFromRegistry_vtableRead()
{
    igCreateInfosFromRegistryInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igCreateInfosFromRegistry_vtable;
    object._registryName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCreateInfosFromRegistry)

void igCreateInfosFromRegistry_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCreateInfosFromRegistry_meta, igOptBase_register,
                       fn_801308D0, igCreateInfosFromRegistry_getMetaCall,
                       igCreateInfosFromRegistry_className, 0x30,
                       igCreateInfosFromRegistry_vtableRead, igCreateInfosFromRegistry_fieldInit, 0, 0);
}

META_GET_META_CALL(igCreateInfosFromRegistry)

void igCreateInfosFromRegistry_fieldInit()
{
    Meta::igMetaObject *meta = igCreateInfosFromRegistry_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCreateInfosFromRegistry_fieldTypes, 2);
    meta_setupFields(meta, igCreateInfosFromRegistry_fieldNames, igCreateInfosFromRegistry_fieldStorage, igCreateInfosFromRegistry_fieldOffsets, base);
}

}
#pragma pop
