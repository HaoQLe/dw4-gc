// beStaticInfoCtl: Alchemy class registration (0x802B8078..0x802B841C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beStaticInfoCtl)
META_DECLARE(beBaseInfoList)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beStaticInfoCtl_dependencies[8];
extern char beStaticInfoCtl_fieldNames[];
extern char beStaticInfoCtl_fieldOffsets[];
extern char beStaticInfoCtl_fieldStorage[];
extern char beStaticInfoCtl_fieldTypes[];
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

struct beStaticInfoCtlInstance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _staticInfoList;
    char unknown24[4];
    inline ~beStaticInfoCtlInstance() { __vtable = beStaticInfoCtl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beStaticInfoCtl)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beStaticInfoCtl)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beStaticInfoCtl)
#pragma pop

void *beStaticInfoCtl_vtableRead()
{
    beStaticInfoCtlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beStaticInfoCtl_vtable;
    object._staticInfoList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beStaticInfoCtl)

void beStaticInfoCtl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beStaticInfoCtl_meta, beBaseInfoManager_register,
                       fn_802B381C, beStaticInfoCtl_getMetaCall,
                       beStaticInfoCtl_className, 0x24,
                       beStaticInfoCtl_vtableRead, beStaticInfoCtl_fieldInit, 0, beStaticInfoCtl_dependencies);
}

META_GET_META_CALL(beStaticInfoCtl)

void beStaticInfoCtl_fieldInit()
{
    Meta::igMetaObject *meta = beStaticInfoCtl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beStaticInfoCtl_fieldTypes, 1);
    Meta::igObjectRefMetaField *staticInfoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    staticInfoListField->_metaObject = beBaseInfoList_metaObject();
    staticInfoListField->_construct = true;
    meta_setupFields(meta, beStaticInfoCtl_fieldNames, beStaticInfoCtl_fieldStorage, beStaticInfoCtl_fieldOffsets, base);
}

}
#pragma pop
