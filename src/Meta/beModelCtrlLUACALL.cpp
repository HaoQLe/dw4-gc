// beModelCtrlLUACALL: Alchemy class registration (0x802CC68C..0x802CC8F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlLUACALL)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlLUACALL_fieldNames[];
extern char beModelCtrlLUACALL_fieldOffsets[];
extern char beModelCtrlLUACALL_fieldStorage[];
extern char beModelCtrlLUACALL_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlLUACALLInstance : igNamedObjectInstance {
    igStringMember _modeName;
    inline ~beModelCtrlLUACALLInstance() { __vtable = beModelCtrlLUACALL_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlLUACALL)

void *beModelCtrlLUACALL_vtableRead()
{
    beModelCtrlLUACALLInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlLUACALL_vtable;
    object._modeName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlLUACALL)

void beModelCtrlLUACALL_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlLUACALL_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlLUACALL_getMetaCall,
                       beModelCtrlLUACALL_className, 0x10,
                       beModelCtrlLUACALL_vtableRead, beModelCtrlLUACALL_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlLUACALL)

void beModelCtrlLUACALL_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlLUACALL_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlLUACALL_fieldTypes, 0x1);
    meta_setupFields(meta, beModelCtrlLUACALL_fieldNames, beModelCtrlLUACALL_fieldStorage, beModelCtrlLUACALL_fieldOffsets, base);
}

}
#pragma pop
