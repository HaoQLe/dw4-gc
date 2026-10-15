// beSaveUtil: Alchemy class registration (0x802BBE98..0x802BC28C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSaveUtil)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beSaveApi)
META_DECLARE(beSvConnectCheck)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSaveUtil_dependencies[12];
extern char beSaveUtil_fieldNames[];
extern char beSaveUtil_fieldOffsets[];
extern char beSaveUtil_fieldStorage[];
extern char beSaveUtil_fieldTypes[];
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

struct beSaveUtilInstance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _api;
    igObjectRefMember _connectCheck;
    inline ~beSaveUtilInstance() { __vtable = beSaveUtil_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beSaveUtil)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beSaveUtil)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beSaveUtil)
#pragma pop

void *beSaveUtil_vtableRead()
{
    beSaveUtilInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beSaveUtil_vtable;
    object._api._value = 0;
    object._connectCheck._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSaveUtil)

void beSaveUtil_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSaveUtil_meta, beBaseInfoManager_register,
                       fn_802B381C, beSaveUtil_getMetaCall,
                       beSaveUtil_className, 0x28,
                       beSaveUtil_vtableRead, beSaveUtil_fieldInit, 0, beSaveUtil_dependencies);
}

META_GET_META_CALL(beSaveUtil)

void beSaveUtil_fieldInit()
{
    Meta::igMetaObject *meta = beSaveUtil_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSaveUtil_fieldTypes, 2);
    Meta::igObjectRefMetaField *apiField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    apiField->_metaObject = beSaveApi_metaObject();
    Meta::igObjectRefMetaField *connectCheckField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    connectCheckField->_metaObject = beSvConnectCheck_metaObject();
    meta_setupFields(meta, beSaveUtil_fieldNames, beSaveUtil_fieldStorage, beSaveUtil_fieldOffsets, base);
}

}
#pragma pop
