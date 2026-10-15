// beShadow01: Alchemy class registration (0x802B9C0C..0x802B9FB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beShadow01)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beShadow01InfoList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beShadow01_dependencies[8];
extern char beShadow01_fieldNames[];
extern char beShadow01_fieldOffsets[];
extern char beShadow01_fieldStorage[];
extern char beShadow01_fieldTypes[];
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

struct beShadow01Instance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _svInfoList;
    char unknown24[20];
    inline ~beShadow01Instance() { __vtable = beShadow01_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beShadow01)

META_METAOBJECT(beShadow01)

META_GET_META(beShadow01)

void *beShadow01_vtableRead()
{
    beShadow01Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beShadow01_vtable;
    object._svInfoList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beShadow01)

void beShadow01_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beShadow01_meta, beBaseInfoManager_register,
                       fn_802B381C, beShadow01_getMetaCall,
                       beShadow01_className, 0x30,
                       beShadow01_vtableRead, beShadow01_fieldInit, 0, beShadow01_dependencies);
}

META_GET_META_CALL(beShadow01)

void beShadow01_fieldInit()
{
    Meta::igMetaObject *meta = beShadow01_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beShadow01_fieldTypes, 2);
    Meta::igObjectRefMetaField *svInfoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    svInfoListField->_metaObject = beShadow01InfoList_metaObject();
    svInfoListField->_construct = true;
    meta_setupFields(meta, beShadow01_fieldNames, beShadow01_fieldStorage, beShadow01_fieldOffsets, base);
}

}
#pragma pop
