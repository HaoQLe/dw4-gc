// bePoint01: Alchemy class registration (0x802C1088..0x802C13B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(bePoint01)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char bePoint01_fieldNames[];
extern char bePoint01_fieldOffsets[];
extern char bePoint01_fieldStorage[];
extern char bePoint01_fieldTypes[];
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct Instance_804DD724 : Instance_804CBA60 {
    char unknown0C[12];
    igObjectRefMember _infoList;
    inline ~Instance_804DD724() { __vtable = lbl_804DD724; }
};

struct bePoint01Instance : Instance_804DD724 {
    char unknown1C[20];
    inline ~bePoint01Instance() { __vtable = bePoint01_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(bePoint01)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(bePoint01)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(bePoint01)
#pragma pop

void *bePoint01_vtableRead()
{
    bePoint01Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = bePoint01_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(bePoint01)

void bePoint01_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &bePoint01_meta, beBaseInfoManager_register,
                       fn_802B381C, bePoint01_getMetaCall,
                       bePoint01_className, 0x24,
                       bePoint01_vtableRead, bePoint01_fieldInit, 0, 0);
}

META_GET_META_CALL(bePoint01)

void bePoint01_fieldInit()
{
    Meta::igMetaObject *meta = bePoint01_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, bePoint01_fieldTypes, 0x1);
    meta_setupFields(meta, bePoint01_fieldNames, bePoint01_fieldStorage, bePoint01_fieldOffsets, base);
}

}
#pragma pop
