// beSeCtl: Alchemy class registration (0x802BB5F0..0x802BB94C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSeCtl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beSound)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSeCtl_dependencies[8];
extern char beSeCtl_fieldNames[];
extern char beSeCtl_fieldOffsets[];
extern char beSeCtl_fieldStorage[];
extern char beSeCtl_fieldTypes[];
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

struct beSeCtlInstance : Instance_804DD724 {
    char unknown1C[20];
    inline ~beSeCtlInstance() { __vtable = beSeCtl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSeCtl)

META_METAOBJECT(beSeCtl)

META_GET_META(beSeCtl)

void *beSeCtl_vtableRead()
{
    beSeCtlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beSeCtl_vtable;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beSeCtl)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beSeCtl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSeCtl_meta, beBaseInfoManager_register,
                       fn_802B381C, beSeCtl_getMetaCall,
                       beSeCtl_className, 0x24,
                       beSeCtl_vtableRead, beSeCtl_fieldInit, 0, beSeCtl_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beSeCtl)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beSeCtl_fieldInit()
{
    Meta::igMetaObject *meta = beSeCtl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSeCtl_fieldTypes, 1);
    Meta::igObjectRefMetaField *sndMngField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    sndMngField->_metaObject = beSound_metaObject();
    sndMngField->_refCounted = false;
    meta_setupFields(meta, beSeCtl_fieldNames, beSeCtl_fieldStorage, beSeCtl_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
