// beSound: Alchemy class registration (0x802B8E70..0x802B928C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSound)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beCri)
META_DECLARE(bePlaySEList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSound_dependencies[12];
extern char beSound_fieldNames[];
extern char beSound_fieldOffsets[];
extern char beSound_fieldStorage[];
extern char beSound_fieldTypes[];
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

struct beSoundInstance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _cri;
    igStringMember _currentBGM;
    igObjectRefMember _playSEs;
    char unknown2C[4];
    inline ~beSoundInstance() { __vtable = beSound_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSound)

META_METAOBJECT(beSound)

META_GET_META(beSound)

#pragma push
#pragma use_lmw_stmw on
void *beSound_vtableRead()
{
    beSoundInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beSound_vtable;
    object._cri._value = 0;
    object._currentBGM._value = 0;
    object._playSEs._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beSound)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beSound_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSound_meta, beBaseInfoManager_register,
                       fn_802B381C, beSound_getMetaCall,
                       beSound_className, 0x2C,
                       beSound_vtableRead, beSound_fieldInit, 0, beSound_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beSound)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beSound_fieldInit()
{
    Meta::igMetaObject *meta = beSound_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSound_fieldTypes, 3);
    Meta::igObjectRefMetaField *criField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    criField->_metaObject = beCri_metaObject();
    Meta::igObjectRefMetaField *playSEsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    playSEsField->_metaObject = bePlaySEList_metaObject();
    playSEsField->_construct = true;
    meta_setupFields(meta, beSound_fieldNames, beSound_fieldStorage, beSound_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
