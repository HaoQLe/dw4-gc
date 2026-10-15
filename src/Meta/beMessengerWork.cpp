// beMessengerWork: Alchemy class registration (0x802CE5A4..0x802CE92C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMessengerWork)
META_DECLARE(beBaseInfoRamList)
META_DECLARE(igObject)

extern "C" {
extern char beMessengerWork_dependencies[12];
extern char beMessengerWork_fieldNames[];
extern char beMessengerWork_fieldOffsets[];
extern char beMessengerWork_fieldStorage[];
extern char beMessengerWork_fieldTypes[];
void *fn_800237D0();
void *fn_800365B4();
void fn_802B1AC8();
}

struct beMessengerWorkInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _groupName;
    igStringMember _infoName;
    char unknown10[4];
    igStringMember _message;
    igObjectRefMember _findRamNoList;
    igObjectRefMember _findRamList;
    inline ~beMessengerWorkInstance() { __vtable = beMessengerWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beMessengerWork)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beMessengerWork)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beMessengerWork_vtableRead()
{
    beMessengerWorkInstance object;
    object.__vtable = beMessengerWork_vtable;
    object._groupName._value = 0;
    object._infoName._value = 0;
    object._message._value = 0;
    object._findRamNoList._value = 0;
    object._findRamList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beMessengerWork)

void beMessengerWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessengerWork_meta, igObject_register,
                       fn_800237D0, beMessengerWork_getMetaCall,
                       beMessengerWork_className, 0x20,
                       beMessengerWork_vtableRead, beMessengerWork_fieldInit, 0, beMessengerWork_dependencies);
}

META_GET_META_CALL(beMessengerWork)

void beMessengerWork_fieldInit()
{
    Meta::igMetaObject *meta = beMessengerWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMessengerWork_fieldTypes, 6);
    Meta::igObjectRefMetaField *findRamNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value3 = fn_800365B4();
    findRamNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    findRamNoListField->_construct = true;
    Meta::igObjectRefMetaField *findRamListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    findRamListField->_metaObject = beBaseInfoRamList_metaObject();
    findRamListField->_construct = true;
    meta_setupFields(meta, beMessengerWork_fieldNames, beMessengerWork_fieldStorage, beMessengerWork_fieldOffsets, base);
}

}
#pragma pop
