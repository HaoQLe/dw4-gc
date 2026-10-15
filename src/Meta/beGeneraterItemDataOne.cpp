// beGeneraterItemDataOne: Alchemy class registration (0x802D83FC..0x802D8620). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGeneraterItemDataOne)
META_DECLARE(igNamedObject)

extern "C" {
extern char beGeneraterItemDataOne_fieldNames[];
extern char beGeneraterItemDataOne_fieldOffsets[];
extern char beGeneraterItemDataOne_fieldStorage[];
extern char beGeneraterItemDataOne_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beGeneraterItemDataOneInstance : igNamedObjectInstance {
    char unknown0C[20];
    inline ~beGeneraterItemDataOneInstance() { __vtable = beGeneraterItemDataOne_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beGeneraterItemDataOne)

void *beGeneraterItemDataOne_vtableRead()
{
    beGeneraterItemDataOneInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beGeneraterItemDataOne_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beGeneraterItemDataOne)

void beGeneraterItemDataOne_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterItemDataOne_meta, igNamedObject_register,
                       fn_80023CF4, beGeneraterItemDataOne_getMetaCall,
                       beGeneraterItemDataOne_className, 0x18,
                       beGeneraterItemDataOne_vtableRead, beGeneraterItemDataOne_fieldInit, 0, 0);
}

META_GET_META_CALL(beGeneraterItemDataOne)

void beGeneraterItemDataOne_fieldInit()
{
    Meta::igMetaObject *meta = beGeneraterItemDataOne_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beGeneraterItemDataOne_fieldTypes, 0x3);
    meta_setupFields(meta, beGeneraterItemDataOne_fieldNames, beGeneraterItemDataOne_fieldStorage, beGeneraterItemDataOne_fieldOffsets, base);
}

}
#pragma pop
