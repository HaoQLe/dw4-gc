// beLayerGroup: Alchemy class registration (0x802D3740..0x802D38DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLayerGroup)
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

struct beLayerGroupInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beLayerGroupInstance() { __vtable = beLayerGroup_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beLayerGroup)

void *beLayerGroup_vtableRead()
{
    beLayerGroupInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beLayerGroup_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLayerGroup)

void beLayerGroup_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLayerGroup_meta, igNamedObject_register,
                       fn_80023CF4, beLayerGroup_getMetaCall,
                       beLayerGroup_className, 0xC,
                       beLayerGroup_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beLayerGroup)

}
#pragma pop
