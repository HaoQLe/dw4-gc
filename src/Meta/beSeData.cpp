// beSeData: Alchemy class registration (0x802BB384..0x802BB5F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSeData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSeData_fieldNames[];
extern char beSeData_fieldOffsets[];
extern char beSeData_fieldStorage[];
extern char beSeData_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beSeDataInstance : igNamedObjectInstance {
    igStringMember _sound;
    char unknown10[16];
    inline ~beSeDataInstance() { __vtable = beSeData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSeData)

void *beSeData_vtableRead()
{
    beSeDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beSeData_vtable;
    object._sound._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSeData)

void beSeData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSeData_meta, igNamedObject_register,
                       fn_80023CF4, beSeData_getMetaCall,
                       beSeData_className, 0x14,
                       beSeData_vtableRead, beSeData_fieldInit, 0, 0);
}

META_GET_META_CALL(beSeData)

void beSeData_fieldInit()
{
    Meta::igMetaObject *meta = beSeData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSeData_fieldTypes, 0x2);
    meta_setupFields(meta, beSeData_fieldNames, beSeData_fieldStorage, beSeData_fieldOffsets, base);
}

}
#pragma pop
