// beAction2WAITCHECK: Alchemy class registration (0x802E63C8..0x802E65EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2WAITCHECK)
META_DECLARE(igNamedObject)

extern "C" {
extern char beAction2WAITCHECK_fieldNames[];
extern char beAction2WAITCHECK_fieldOffsets[];
extern char beAction2WAITCHECK_fieldStorage[];
extern char beAction2WAITCHECK_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beAction2WAITCHECKInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beAction2WAITCHECKInstance() { __vtable = beAction2WAITCHECK_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beAction2WAITCHECK)

void *beAction2WAITCHECK_vtableRead()
{
    beAction2WAITCHECKInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beAction2WAITCHECK_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beAction2WAITCHECK)

void beAction2WAITCHECK_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2WAITCHECK_meta, igNamedObject_register,
                       fn_80023CF4, beAction2WAITCHECK_getMetaCall,
                       beAction2WAITCHECK_className, 0x10,
                       beAction2WAITCHECK_vtableRead, beAction2WAITCHECK_fieldInit, 0, 0);
}

META_GET_META_CALL(beAction2WAITCHECK)

void beAction2WAITCHECK_fieldInit()
{
    Meta::igMetaObject *meta = beAction2WAITCHECK_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAction2WAITCHECK_fieldTypes, 0x1);
    meta_setupFields(meta, beAction2WAITCHECK_fieldNames, beAction2WAITCHECK_fieldStorage, beAction2WAITCHECK_fieldOffsets, base);
}

}
#pragma pop
