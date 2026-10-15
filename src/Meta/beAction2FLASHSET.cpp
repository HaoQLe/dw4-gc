// beAction2FLASHSET: Alchemy class registration (0x802E622C..0x802E63C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2FLASHSET)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beAction2FLASHSETInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beAction2FLASHSETInstance() { __vtable = beAction2FLASHSET_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beAction2FLASHSET)
#pragma pop

void *beAction2FLASHSET_vtableRead()
{
    beAction2FLASHSETInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beAction2FLASHSET_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beAction2FLASHSET)

void beAction2FLASHSET_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2FLASHSET_meta, igNamedObject_register,
                       fn_80023CF4, beAction2FLASHSET_getMetaCall,
                       beAction2FLASHSET_className, 0xC,
                       beAction2FLASHSET_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beAction2FLASHSET)

}
#pragma pop
