// beActionStarterData: Alchemy class registration (0x802E4FB4..0x802E5220). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beActionStarterData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beActionStarterData_fieldNames[];
extern char beActionStarterData_fieldOffsets[];
extern char beActionStarterData_fieldStorage[];
extern char beActionStarterData_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beActionStarterDataInstance : igNamedObjectInstance {
    igStringMember _message;
    char unknown10[32];
    inline ~beActionStarterDataInstance() { __vtable = beActionStarterData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beActionStarterData)

void *beActionStarterData_vtableRead()
{
    beActionStarterDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beActionStarterData_vtable;
    object._message._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beActionStarterData)

void beActionStarterData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beActionStarterData_meta, igNamedObject_register,
                       fn_80023CF4, beActionStarterData_getMetaCall,
                       beActionStarterData_className, 0x24,
                       beActionStarterData_vtableRead, beActionStarterData_fieldInit, 0, 0);
}

META_GET_META_CALL(beActionStarterData)

void beActionStarterData_fieldInit()
{
    Meta::igMetaObject *meta = beActionStarterData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beActionStarterData_fieldTypes, 0x5);
    meta_setupFields(meta, beActionStarterData_fieldNames, beActionStarterData_fieldStorage, beActionStarterData_fieldOffsets, base);
}

}
#pragma pop
