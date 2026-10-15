// beModelCtrlMUTEKI: Alchemy class registration (0x802CADA0..0x802CAFC4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlMUTEKI)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlMUTEKI_fieldNames[];
extern char beModelCtrlMUTEKI_fieldOffsets[];
extern char beModelCtrlMUTEKI_fieldStorage[];
extern char beModelCtrlMUTEKI_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlMUTEKIInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beModelCtrlMUTEKIInstance() { __vtable = beModelCtrlMUTEKI_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlMUTEKI)

void *beModelCtrlMUTEKI_vtableRead()
{
    beModelCtrlMUTEKIInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlMUTEKI_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlMUTEKI)

void beModelCtrlMUTEKI_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlMUTEKI_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlMUTEKI_getMetaCall,
                       beModelCtrlMUTEKI_className, 0x10,
                       beModelCtrlMUTEKI_vtableRead, beModelCtrlMUTEKI_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlMUTEKI)

void beModelCtrlMUTEKI_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlMUTEKI_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlMUTEKI_fieldTypes, 0x1);
    meta_setupFields(meta, beModelCtrlMUTEKI_fieldNames, beModelCtrlMUTEKI_fieldStorage, beModelCtrlMUTEKI_fieldOffsets, base);
}

}
#pragma pop
