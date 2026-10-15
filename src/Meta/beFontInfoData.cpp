// beFontInfoData: Alchemy class registration (0x802D8D24..0x802D9014). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beFontInfoData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beFontInfoData_dependencies[8];
extern char beFontInfoData_fieldNames[];
extern char beFontInfoData_fieldOffsets[];
extern char beFontInfoData_fieldStorage[];
extern char beFontInfoData_fieldTypes[];
void *fn_801C89F0();
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_804DBC50[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beFontInfoDataInstance : Instance_804DBC50 {
    char unknown0C[4];
    igObjectRefMember _attrSet;
    char unknown14[20];
    igStringMember _kind;
    char unknown2C[12];
    inline ~beFontInfoDataInstance() { __vtable = beFontInfoData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beFontInfoData)

void *beFontInfoData_vtableRead()
{
    beFontInfoDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beFontInfoData_vtable;
    object._attrSet._value = 0;
    object._kind._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beFontInfoData)

void beFontInfoData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFontInfoData_meta, beBaseInfoData_register,
                       fn_802B8770, beFontInfoData_getMetaCall,
                       beFontInfoData_className, 0x2C,
                       beFontInfoData_vtableRead, beFontInfoData_fieldInit, 0, beFontInfoData_dependencies);
}

META_GET_META_CALL(beFontInfoData)

void beFontInfoData_fieldInit()
{
    Meta::igMetaObject *meta = beFontInfoData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beFontInfoData_fieldTypes, 7);
    Meta::igObjectRefMetaField *attrSetField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801C89F0();
    attrSetField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beFontInfoData_fieldNames, beFontInfoData_fieldStorage, beFontInfoData_fieldOffsets, base);
}

}
#pragma pop
