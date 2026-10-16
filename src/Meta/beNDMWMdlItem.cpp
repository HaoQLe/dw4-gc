// beNDMWMdlItem: Alchemy class registration (0x8033A4C8..0x8033A8A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWMdlItem)
META_DECLARE(beModelCtrl)
META_DECLARE(igNamedObject)
META_DECLARE(igViewerSceneInfoManager)

extern "C" {
extern char beNDMWMdlItem_dependencies[12];
extern char beNDMWMdlItem_fieldNames[];
extern char beNDMWMdlItem_fieldOffsets[];
extern char beNDMWMdlItem_fieldStorage[];
extern char beNDMWMdlItem_fieldTypes[];
void *fn_80028F84();
void fn_803250AC();
void *fn_803386E8();
extern char lbl_804CBA60[304];
extern char lbl_804DD724[148];
extern char lbl_804DEE44[204];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMemberLookup _name;
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

struct Instance_804DEE44 : Instance_804DD724 {
    inline ~Instance_804DEE44() { __vtable = lbl_804DEE44; }
};

struct beNDMWMdlItemInstance : Instance_804DEE44 {
    char unknown1C[20];
    igObjectRefMember _lockRamList;
    inline ~beNDMWMdlItemInstance() { __vtable = beNDMWMdlItem_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWMdlItem)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWMdlItem)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWMdlItem)
#pragma pop

void *beNDMWMdlItem_vtableRead()
{
    beNDMWMdlItemInstance object;
    object.__vtable = igNamedObject_vtable;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object.__vtable = lbl_804DEE44;
    object._name._value = 0;
    object._infoList._value = 0;
    object.__vtable = beNDMWMdlItem_vtable;
    object._lockRamList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMdlItem)

void beNDMWMdlItem_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlItem_meta, beModelCtrl_register,
                       fn_803386E8, beNDMWMdlItem_getMetaCall,
                       beNDMWMdlItem_className, 0x34,
                       beNDMWMdlItem_vtableRead, beNDMWMdlItem_fieldInit, 0, beNDMWMdlItem_dependencies);
}

META_GET_META_CALL(beNDMWMdlItem)

void beNDMWMdlItem_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMdlItem_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMdlItem_fieldTypes, 2);
    Meta::igObjectRefMetaField *viewerSIManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    viewerSIManagerField->_metaObject = igViewerSceneInfoManager_metaObject();
    viewerSIManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *lockRamListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80028F84();
    lockRamListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    lockRamListField->_construct = true;
    meta_setupFields(meta, beNDMWMdlItem_fieldNames, beNDMWMdlItem_fieldStorage, beNDMWMdlItem_fieldOffsets, base);
}

}
#pragma pop
