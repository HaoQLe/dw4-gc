// beModelCtrlPDMOVE: Alchemy class registration (0x802CB2FC..0x802CB520). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlPDMOVE)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlPDMOVE_fieldNames[];
extern char beModelCtrlPDMOVE_fieldOffsets[];
extern char beModelCtrlPDMOVE_fieldStorage[];
extern char beModelCtrlPDMOVE_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlPDMOVEInstance : igNamedObjectInstance {
    char unknown0C[20];
    inline ~beModelCtrlPDMOVEInstance() { __vtable = beModelCtrlPDMOVE_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlPDMOVE)

void *beModelCtrlPDMOVE_vtableRead()
{
    beModelCtrlPDMOVEInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlPDMOVE_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlPDMOVE)

void beModelCtrlPDMOVE_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlPDMOVE_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlPDMOVE_getMetaCall,
                       beModelCtrlPDMOVE_className, 0x14,
                       beModelCtrlPDMOVE_vtableRead, beModelCtrlPDMOVE_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlPDMOVE)

void beModelCtrlPDMOVE_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlPDMOVE_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlPDMOVE_fieldTypes, 0x2);
    meta_setupFields(meta, beModelCtrlPDMOVE_fieldNames, beModelCtrlPDMOVE_fieldStorage, beModelCtrlPDMOVE_fieldOffsets, base);
}

}
#pragma pop
