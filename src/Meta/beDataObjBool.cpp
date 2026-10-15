// beDataObjBool: Alchemy class registration (0x802DD03C..0x802DD2A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDataObjBool)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDataObjBool_fieldNames[];
extern char beDataObjBool_fieldOffsets[];
extern char beDataObjBool_fieldStorage[];
extern char beDataObjBool_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beDataObjBoolInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beDataObjBoolInstance() { __vtable = beDataObjBool_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beDataObjBool)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beDataObjBool)
#pragma pop

void *beDataObjBool_vtableRead()
{
    beDataObjBoolInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beDataObjBool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDataObjBool)

void beDataObjBool_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjBool_meta, igNamedObject_register,
                       fn_80023CF4, beDataObjBool_getMetaCall,
                       beDataObjBool_className, 0x10,
                       beDataObjBool_vtableRead, beDataObjBool_fieldInit, 0, 0);
}

META_GET_META_CALL(beDataObjBool)

void beDataObjBool_fieldInit()
{
    Meta::igMetaObject *meta = beDataObjBool_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataObjBool_fieldTypes, 0x1);
    meta_setupFields(meta, beDataObjBool_fieldNames, beDataObjBool_fieldStorage, beDataObjBool_fieldOffsets, base);
}

}
#pragma pop
