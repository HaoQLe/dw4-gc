// beModelCtrlLABELCTRL: Alchemy class registration (0x802CC284..0x802CC4F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlLABELCTRL)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlLABELCTRL_fieldNames[];
extern char beModelCtrlLABELCTRL_fieldOffsets[];
extern char beModelCtrlLABELCTRL_fieldStorage[];
extern char beModelCtrlLABELCTRL_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlLABELCTRLInstance : igNamedObjectInstance {
    igStringMember _seqName;
    inline ~beModelCtrlLABELCTRLInstance() { __vtable = beModelCtrlLABELCTRL_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlLABELCTRL)

void *beModelCtrlLABELCTRL_vtableRead()
{
    beModelCtrlLABELCTRLInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlLABELCTRL_vtable;
    object._seqName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlLABELCTRL)

void beModelCtrlLABELCTRL_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlLABELCTRL_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlLABELCTRL_getMetaCall,
                       beModelCtrlLABELCTRL_className, 0x10,
                       beModelCtrlLABELCTRL_vtableRead, beModelCtrlLABELCTRL_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlLABELCTRL)

void beModelCtrlLABELCTRL_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlLABELCTRL_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlLABELCTRL_fieldTypes, 0x1);
    meta_setupFields(meta, beModelCtrlLABELCTRL_fieldNames, beModelCtrlLABELCTRL_fieldStorage, beModelCtrlLABELCTRL_fieldOffsets, base);
}

}
#pragma pop
