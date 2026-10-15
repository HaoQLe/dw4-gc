// beModelCtrlMOVEEX: Alchemy class registration (0x802CB7CC..0x802CB9F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlMOVEEX)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlMOVEEX_fieldNames[];
extern char beModelCtrlMOVEEX_fieldOffsets[];
extern char beModelCtrlMOVEEX_fieldStorage[];
extern char beModelCtrlMOVEEX_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlMOVEEXInstance : igNamedObjectInstance {
    char unknown0C[36];
    inline ~beModelCtrlMOVEEXInstance() { __vtable = beModelCtrlMOVEEX_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlMOVEEX)

void *beModelCtrlMOVEEX_vtableRead()
{
    beModelCtrlMOVEEXInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlMOVEEX_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlMOVEEX)

void beModelCtrlMOVEEX_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlMOVEEX_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlMOVEEX_getMetaCall,
                       beModelCtrlMOVEEX_className, 0x24,
                       beModelCtrlMOVEEX_vtableRead, beModelCtrlMOVEEX_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlMOVEEX)

void beModelCtrlMOVEEX_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlMOVEEX_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlMOVEEX_fieldTypes, 0x6);
    meta_setupFields(meta, beModelCtrlMOVEEX_fieldNames, beModelCtrlMOVEEX_fieldStorage, beModelCtrlMOVEEX_fieldOffsets, base);
}

}
#pragma pop
