// beModelCtrlMOVERL: Alchemy class registration (0x802CB520..0x802CB7CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlMOVERL)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlMOVERL_fieldNames[];
extern char beModelCtrlMOVERL_fieldOffsets[];
extern char beModelCtrlMOVERL_fieldStorage[];
extern char beModelCtrlMOVERL_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlMOVERLInstance : igNamedObjectInstance {
    igStringMember _modelName;
    igStringMember _boneName;
    char unknown14[4];
    inline ~beModelCtrlMOVERLInstance() { __vtable = beModelCtrlMOVERL_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlMOVERL)

#pragma push
#pragma optimize_for_size off
void *beModelCtrlMOVERL_vtableRead()
{
    beModelCtrlMOVERLInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlMOVERL_vtable;
    object._modelName._value = 0;
    object._boneName._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beModelCtrlMOVERL)

void beModelCtrlMOVERL_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlMOVERL_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlMOVERL_getMetaCall,
                       beModelCtrlMOVERL_className, 0x14,
                       beModelCtrlMOVERL_vtableRead, beModelCtrlMOVERL_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlMOVERL)

void beModelCtrlMOVERL_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlMOVERL_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlMOVERL_fieldTypes, 0x2);
    meta_setupFields(meta, beModelCtrlMOVERL_fieldNames, beModelCtrlMOVERL_fieldStorage, beModelCtrlMOVERL_fieldOffsets, base);
}

}
#pragma pop
