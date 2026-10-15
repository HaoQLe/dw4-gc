// beAction2JOINTSET: Alchemy class registration (0x802E6810..0x802E6A7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2JOINTSET)
META_DECLARE(igNamedObject)

extern "C" {
extern char beAction2JOINTSET_fieldNames[];
extern char beAction2JOINTSET_fieldOffsets[];
extern char beAction2JOINTSET_fieldStorage[];
extern char beAction2JOINTSET_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beAction2JOINTSETInstance : igNamedObjectInstance {
    char unknown0C[8];
    igStringMember _loopMode;
    char unknown18[8];
    inline ~beAction2JOINTSETInstance() { __vtable = beAction2JOINTSET_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beAction2JOINTSET)

void *beAction2JOINTSET_vtableRead()
{
    beAction2JOINTSETInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beAction2JOINTSET_vtable;
    object._loopMode._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beAction2JOINTSET)

void beAction2JOINTSET_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2JOINTSET_meta, igNamedObject_register,
                       fn_80023CF4, beAction2JOINTSET_getMetaCall,
                       beAction2JOINTSET_className, 0x18,
                       beAction2JOINTSET_vtableRead, beAction2JOINTSET_fieldInit, 0, 0);
}

META_GET_META_CALL(beAction2JOINTSET)

void beAction2JOINTSET_fieldInit()
{
    Meta::igMetaObject *meta = beAction2JOINTSET_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAction2JOINTSET_fieldTypes, 0x3);
    meta_setupFields(meta, beAction2JOINTSET_fieldNames, beAction2JOINTSET_fieldStorage, beAction2JOINTSET_fieldOffsets, base);
}

}
#pragma pop
