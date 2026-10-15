// beNDMWShinkaObject: Alchemy class registration (0x80343F60..0x803441B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShinkaObject)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWShinkaObject_fieldNames[];
extern char beNDMWShinkaObject_fieldOffsets[];
extern char beNDMWShinkaObject_fieldStorage[];
extern char beNDMWShinkaObject_fieldTypes[];
void *fn_800237D0();
void fn_803250AC();
}

struct beNDMWShinkaObjectInstance : igObjectInstance {
    char unknown04[8];
    igStringMember _name;
    char unknown10[80];
    inline ~beNDMWShinkaObjectInstance() { __vtable = beNDMWShinkaObject_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShinkaObject)

META_GET_META(beNDMWShinkaObject)

void *beNDMWShinkaObject_vtableRead()
{
    beNDMWShinkaObjectInstance object;
    object.__vtable = beNDMWShinkaObject_vtable;
    object._name._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWShinkaObject)

void beNDMWShinkaObject_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShinkaObject_meta, igObject_register,
                       fn_800237D0, beNDMWShinkaObject_getMetaCall,
                       beNDMWShinkaObject_className, 0x54,
                       beNDMWShinkaObject_vtableRead, beNDMWShinkaObject_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWShinkaObject)

void beNDMWShinkaObject_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShinkaObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShinkaObject_fieldTypes, 0x13);
    meta_setupFields(meta, beNDMWShinkaObject_fieldNames, beNDMWShinkaObject_fieldStorage, beNDMWShinkaObject_fieldOffsets, base);
}

}
#pragma pop
