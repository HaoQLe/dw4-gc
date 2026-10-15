// beFontInfo: Alchemy class registration (0x802D89DC..0x802D8D24). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beFontInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(beUnicodeObjList)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beFontInfo_dependencies[8];
extern char beFontInfo_fieldNames[];
extern char beFontInfo_fieldOffsets[];
extern char beFontInfo_fieldStorage[];
extern char beFontInfo_fieldTypes[];
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

struct beFontInfoInstance : Instance_804DCD14 {
    igObjectRefMember _unicodeList;
    char unknown20[8];
    inline ~beFontInfoInstance() { __vtable = beFontInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beFontInfo)

void *beFontInfo_vtableRead()
{
    beFontInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beFontInfo_vtable;
    object._unicodeList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beFontInfo)

void beFontInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFontInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beFontInfo_getMetaCall,
                       beFontInfo_className, 0x20,
                       beFontInfo_vtableRead, beFontInfo_fieldInit, 0, beFontInfo_dependencies);
}

META_GET_META_CALL(beFontInfo)

void beFontInfo_fieldInit()
{
    Meta::igMetaObject *meta = beFontInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beFontInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *unicodeListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    unicodeListField->_metaObject = beUnicodeObjList_metaObject();
    meta_setupFields(meta, beFontInfo_fieldNames, beFontInfo_fieldStorage, beFontInfo_fieldOffsets, base);
}

}
#pragma pop
