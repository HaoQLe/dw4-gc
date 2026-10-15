// beGenerater: Alchemy class registration (0x802D8680..0x802D89DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beGenerater)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beLua)
META_DECLARE(igNamedObject)

extern "C" {
extern char beGenerater_dependencies[8];
extern char beGenerater_fieldNames[];
extern char beGenerater_fieldOffsets[];
extern char beGenerater_fieldStorage[];
extern char beGenerater_fieldTypes[];
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

struct beGeneraterInstance : Instance_804DD724 {
    char unknown1C[20];
    inline ~beGeneraterInstance() { __vtable = beGenerater_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beGenerater)

META_METAOBJECT(beGenerater)

META_GET_META(beGenerater)

void *beGenerater_vtableRead()
{
    beGeneraterInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beGenerater_vtable;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beGenerater)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beGenerater_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGenerater_meta, beBaseInfoManager_register,
                       fn_802B381C, beGenerater_getMetaCall,
                       beGenerater_className, 0x28,
                       beGenerater_vtableRead, beGenerater_fieldInit, 0, beGenerater_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beGenerater)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beGenerater_fieldInit()
{
    Meta::igMetaObject *meta = beGenerater_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beGenerater_fieldTypes, 2);
    Meta::igObjectRefMetaField *luaManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    luaManagerField->_metaObject = beLua_metaObject();
    luaManagerField->_refCounted = false;
    meta_setupFields(meta, beGenerater_fieldNames, beGenerater_fieldStorage, beGenerater_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
