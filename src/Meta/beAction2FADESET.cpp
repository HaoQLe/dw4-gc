// beAction2FADESET: Alchemy class registration (0x802E65EC..0x802E6810). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2FADESET)
META_DECLARE(igNamedObject)

extern "C" {
extern char beAction2FADESET_fieldNames[];
extern char beAction2FADESET_fieldOffsets[];
extern char beAction2FADESET_fieldStorage[];
extern char beAction2FADESET_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beAction2FADESETInstance : igNamedObjectInstance {
    char unknown0C[20];
    inline ~beAction2FADESETInstance() { __vtable = beAction2FADESET_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beAction2FADESET)

void *beAction2FADESET_vtableRead()
{
    beAction2FADESETInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beAction2FADESET_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beAction2FADESET)

void beAction2FADESET_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2FADESET_meta, igNamedObject_register,
                       fn_80023CF4, beAction2FADESET_getMetaCall,
                       beAction2FADESET_className, 0x14,
                       beAction2FADESET_vtableRead, beAction2FADESET_fieldInit, 0, 0);
}

META_GET_META_CALL(beAction2FADESET)

void beAction2FADESET_fieldInit()
{
    Meta::igMetaObject *meta = beAction2FADESET_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAction2FADESET_fieldTypes, 0x2);
    meta_setupFields(meta, beAction2FADESET_fieldNames, beAction2FADESET_fieldStorage, beAction2FADESET_fieldOffsets, base);
}

}
#pragma pop
