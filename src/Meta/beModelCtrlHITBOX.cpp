// beModelCtrlHITBOX: Alchemy class registration (0x802CAB3C..0x802CADA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlHITBOX)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlHITBOX_fieldNames[];
extern char beModelCtrlHITBOX_fieldOffsets[];
extern char beModelCtrlHITBOX_fieldStorage[];
extern char beModelCtrlHITBOX_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlHITBOXInstance : igNamedObjectInstance {
    char unknown0C[36];
    inline ~beModelCtrlHITBOXInstance() { __vtable = beModelCtrlHITBOX_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beModelCtrlHITBOX)

META_GET_META(beModelCtrlHITBOX)

void *beModelCtrlHITBOX_vtableRead()
{
    beModelCtrlHITBOXInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlHITBOX_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlHITBOX)

void beModelCtrlHITBOX_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlHITBOX_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlHITBOX_getMetaCall,
                       beModelCtrlHITBOX_className, 0x30,
                       beModelCtrlHITBOX_vtableRead, beModelCtrlHITBOX_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlHITBOX)

void beModelCtrlHITBOX_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlHITBOX_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlHITBOX_fieldTypes, 0x5);
    meta_setupFields(meta, beModelCtrlHITBOX_fieldNames, beModelCtrlHITBOX_fieldStorage, beModelCtrlHITBOX_fieldOffsets, base);
}

}
#pragma pop
