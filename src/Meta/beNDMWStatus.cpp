// beNDMWStatus: Alchemy class registration (0x80334084..0x80334420). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatus)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beNDMWWindow)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWStatus_dependencies[8];
extern char beNDMWStatus_fieldNames[];
extern char beNDMWStatus_fieldOffsets[];
extern char beNDMWStatus_fieldStorage[];
extern char beNDMWStatus_fieldTypes[];
void *fn_802B381C();
void fn_803250AC();
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

struct beNDMWStatusInstance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _windowPro;
    char unknown24[20];
    inline ~beNDMWStatusInstance() { __vtable = beNDMWStatus_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWStatus)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWStatus)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWStatus)
#pragma pop

void *beNDMWStatus_vtableRead()
{
    beNDMWStatusInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWStatus_vtable;
    object._windowPro._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWStatus)

void beNDMWStatus_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatus_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWStatus_getMetaCall,
                       beNDMWStatus_className, 0x2C,
                       beNDMWStatus_vtableRead, beNDMWStatus_fieldInit, 0, beNDMWStatus_dependencies);
}

META_GET_META_CALL(beNDMWStatus)

void beNDMWStatus_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatus_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatus_fieldTypes, 3);
    Meta::igObjectRefMetaField *windowProField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    windowProField->_metaObject = beNDMWWindow_metaObject();
    meta_setupFields(meta, beNDMWStatus_fieldNames, beNDMWStatus_fieldStorage, beNDMWStatus_fieldOffsets, base);
}

}
#pragma pop
