// beModelCtrlMOVE: Alchemy class registration (0x802CB9F0..0x802CBC14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlMOVE)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlMOVE_fieldNames[];
extern char beModelCtrlMOVE_fieldOffsets[];
extern char beModelCtrlMOVE_fieldStorage[];
extern char beModelCtrlMOVE_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlMOVEInstance : igNamedObjectInstance {
    char unknown0C[20];
    inline ~beModelCtrlMOVEInstance() { __vtable = beModelCtrlMOVE_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlMOVE)

void *beModelCtrlMOVE_vtableRead()
{
    beModelCtrlMOVEInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlMOVE_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlMOVE)

void beModelCtrlMOVE_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlMOVE_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlMOVE_getMetaCall,
                       beModelCtrlMOVE_className, 0x14,
                       beModelCtrlMOVE_vtableRead, beModelCtrlMOVE_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlMOVE)

void beModelCtrlMOVE_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlMOVE_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlMOVE_fieldTypes, 0x2);
    meta_setupFields(meta, beModelCtrlMOVE_fieldNames, beModelCtrlMOVE_fieldStorage, beModelCtrlMOVE_fieldOffsets, base);
}

}
#pragma pop
