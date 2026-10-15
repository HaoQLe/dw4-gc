// beDataObjInt: Alchemy class registration (0x802DD57C..0x802DD834). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDataObjInt)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDataObjInt_fieldNames[];
extern char beDataObjInt_fieldOffsets[];
extern char beDataObjInt_fieldStorage[];
extern char beDataObjInt_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beDataObjIntInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beDataObjIntInstance() { __vtable = beDataObjInt_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beDataObjInt)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beDataObjInt)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beDataObjInt)
#pragma pop

void *beDataObjInt_vtableRead()
{
    beDataObjIntInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beDataObjInt_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDataObjInt)

void beDataObjInt_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjInt_meta, igNamedObject_register,
                       fn_80023CF4, beDataObjInt_getMetaCall,
                       beDataObjInt_className, 0x10,
                       beDataObjInt_vtableRead, beDataObjInt_fieldInit, 0, 0);
}

META_GET_META_CALL(beDataObjInt)

void beDataObjInt_fieldInit()
{
    Meta::igMetaObject *meta = beDataObjInt_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataObjInt_fieldTypes, 0x1);
    meta_setupFields(meta, beDataObjInt_fieldNames, beDataObjInt_fieldStorage, beDataObjInt_fieldOffsets, base);
}

}
#pragma pop
