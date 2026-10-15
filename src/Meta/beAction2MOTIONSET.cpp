// beAction2MOTIONSET: Alchemy class registration (0x802E6A7C..0x802E6D28). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2MOTIONSET)
META_DECLARE(igNamedObject)

extern "C" {
extern char beAction2MOTIONSET_fieldNames[];
extern char beAction2MOTIONSET_fieldOffsets[];
extern char beAction2MOTIONSET_fieldStorage[];
extern char beAction2MOTIONSET_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beAction2MOTIONSETInstance : igNamedObjectInstance {
    igStringMember _hokanMode;
    char unknown10[4];
    igStringMember _loopMode;
    inline ~beAction2MOTIONSETInstance() { __vtable = beAction2MOTIONSET_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beAction2MOTIONSET)

#pragma push
#pragma optimize_for_size off
void *beAction2MOTIONSET_vtableRead()
{
    beAction2MOTIONSETInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beAction2MOTIONSET_vtable;
    object._hokanMode._value = 0;
    object._loopMode._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beAction2MOTIONSET)

void beAction2MOTIONSET_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2MOTIONSET_meta, igNamedObject_register,
                       fn_80023CF4, beAction2MOTIONSET_getMetaCall,
                       beAction2MOTIONSET_className, 0x18,
                       beAction2MOTIONSET_vtableRead, beAction2MOTIONSET_fieldInit, 0, 0);
}

META_GET_META_CALL(beAction2MOTIONSET)

void beAction2MOTIONSET_fieldInit()
{
    Meta::igMetaObject *meta = beAction2MOTIONSET_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAction2MOTIONSET_fieldTypes, 0x3);
    meta_setupFields(meta, beAction2MOTIONSET_fieldNames, beAction2MOTIONSET_fieldStorage, beAction2MOTIONSET_fieldOffsets, base);
}

}
#pragma pop
