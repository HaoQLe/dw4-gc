// beNDMWAfsSetupData: Alchemy class registration (0x803452CC..0x803454F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWAfsSetupData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWAfsSetupData_fieldNames[];
extern char beNDMWAfsSetupData_fieldOffsets[];
extern char beNDMWAfsSetupData_fieldStorage[];
extern char beNDMWAfsSetupData_fieldTypes[];
void *fn_80023CF4();
void fn_803250AC();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beNDMWAfsSetupDataInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beNDMWAfsSetupDataInstance() { __vtable = beNDMWAfsSetupData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWAfsSetupData)

void *beNDMWAfsSetupData_vtableRead()
{
    beNDMWAfsSetupDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beNDMWAfsSetupData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWAfsSetupData)

void beNDMWAfsSetupData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWAfsSetupData_meta, igNamedObject_register,
                       fn_80023CF4, beNDMWAfsSetupData_getMetaCall,
                       beNDMWAfsSetupData_className, 0x10,
                       beNDMWAfsSetupData_vtableRead, beNDMWAfsSetupData_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWAfsSetupData)

void beNDMWAfsSetupData_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWAfsSetupData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWAfsSetupData_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWAfsSetupData_fieldNames, beNDMWAfsSetupData_fieldStorage, beNDMWAfsSetupData_fieldOffsets, base);
}

}
#pragma pop
