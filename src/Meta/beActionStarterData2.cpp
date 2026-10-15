// beActionStarterData2: Alchemy class registration (0x802E4B54..0x802E4D54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beActionStarterData2)
META_DECLARE(beActionStarterData)
META_DECLARE(igNamedObject)

extern "C" {
void *beActionStarterData2_parentMeta();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beActionStarterDataInstance : igNamedObjectInstance {
    igStringMember _message;
    inline ~beActionStarterDataInstance() { __vtable = beActionStarterData_vtable; }
};

struct beActionStarterData2Instance : beActionStarterDataInstance {
    char unknown10[32];
    inline ~beActionStarterData2Instance() { __vtable = beActionStarterData2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beActionStarterData2)
#pragma pop

void *beActionStarterData2_vtableRead()
{
    beActionStarterData2Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beActionStarterData_vtable;
    object._message._value = 0;
    object.__vtable = beActionStarterData2_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beActionStarterData2)

void beActionStarterData2_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beActionStarterData2_meta, beActionStarterData_register,
                       beActionStarterData2_parentMeta, beActionStarterData2_getMetaCall,
                       beActionStarterData2_className, 0x30,
                       beActionStarterData2_vtableRead, beActionStarterData2_fieldInit, 0, 0);
}

META_GET_META_CALL(beActionStarterData2)

}
#pragma pop
