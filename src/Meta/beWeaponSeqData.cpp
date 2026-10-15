// beWeaponSeqData: Alchemy class registration (0x802B3104..0x802B3370). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWeaponSeqData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beWeaponSeqData_fieldNames[];
extern char beWeaponSeqData_fieldOffsets[];
extern char beWeaponSeqData_fieldStorage[];
extern char beWeaponSeqData_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beWeaponSeqDataInstance : igNamedObjectInstance {
    igStringMember _label;
    inline ~beWeaponSeqDataInstance() { __vtable = beWeaponSeqData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beWeaponSeqData)

void *beWeaponSeqData_vtableRead()
{
    beWeaponSeqDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beWeaponSeqData_vtable;
    object._label._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beWeaponSeqData)

void beWeaponSeqData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWeaponSeqData_meta, igNamedObject_register,
                       fn_80023CF4, beWeaponSeqData_getMetaCall,
                       beWeaponSeqData_className, 0x10,
                       beWeaponSeqData_vtableRead, beWeaponSeqData_fieldInit, 0, 0);
}

META_GET_META_CALL(beWeaponSeqData)

void beWeaponSeqData_fieldInit()
{
    Meta::igMetaObject *meta = beWeaponSeqData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beWeaponSeqData_fieldTypes, 0x1);
    meta_setupFields(meta, beWeaponSeqData_fieldNames, beWeaponSeqData_fieldStorage, beWeaponSeqData_fieldOffsets, base);
}

}
#pragma pop
