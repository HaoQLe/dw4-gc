// beSoundInfo: Alchemy class registration (0x802B8820..0x802B8B88). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSoundInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSoundInfo_dependencies[8];
extern char beSoundInfo_fieldNames[];
extern char beSoundInfo_fieldOffsets[];
extern char beSoundInfo_fieldStorage[];
extern char beSoundInfo_fieldTypes[];
void *fn_80029A5C();
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_804DCD14[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct Instance_804DCD14 : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _dataList;
    igObjectRefMember _ramList;
    inline ~Instance_804DCD14() { __vtable = lbl_804DCD14; }
};

struct beSoundInfoInstance : Instance_804DCD14 {
    igObjectRefMember _fnameList;
    igStringMember _dataType;
    char unknown24[12];
    inline ~beSoundInfoInstance() { __vtable = beSoundInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSoundInfo)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beSoundInfo_vtableRead()
{
    beSoundInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beSoundInfo_vtable;
    object._fnameList._value = 0;
    object._dataType._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSoundInfo)

void beSoundInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSoundInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beSoundInfo_getMetaCall,
                       beSoundInfo_className, 0x28,
                       beSoundInfo_vtableRead, beSoundInfo_fieldInit, 0, beSoundInfo_dependencies);
}

META_GET_META_CALL(beSoundInfo)

void beSoundInfo_fieldInit()
{
    Meta::igMetaObject *meta = beSoundInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSoundInfo_fieldTypes, 4);
    Meta::igObjectRefMetaField *fnameListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    fnameListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beSoundInfo_fieldNames, beSoundInfo_fieldStorage, beSoundInfo_fieldOffsets, base);
}

}
#pragma pop
