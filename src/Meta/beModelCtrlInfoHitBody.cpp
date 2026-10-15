// beModelCtrlInfoHitBody: Alchemy class registration (0x802C803C..0x802C840C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beModelCtrlInfoHitBody)
META_DECLARE(igObject)

extern "C" {
extern char beModelCtrlInfoHitBody_dependencies[12];
extern char beModelCtrlInfoHitBody_fieldNames[];
extern char beModelCtrlInfoHitBody_fieldOffsets[];
extern char beModelCtrlInfoHitBody_fieldStorage[];
extern char beModelCtrlInfoHitBody_fieldTypes[];
void *fn_800237D0();
void fn_8003EC68(void *,int);
void *fn_80122100();
void *fn_801225BC();
void fn_802B1AC8();
}

struct beModelCtrlInfoHitBodyInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _AABoxMinList;
    igObjectRefMember _AABoxMaxList;
    igObjectRefMember _AABoxList;
    char unknown2C[12];
    inline ~beModelCtrlInfoHitBodyInstance() { __vtable = beModelCtrlInfoHitBody_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beModelCtrlInfoHitBody)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beModelCtrlInfoHitBody)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beModelCtrlInfoHitBody)
#pragma pop

void *beModelCtrlInfoHitBody_vtableRead()
{
    beModelCtrlInfoHitBodyInstance object;
    object.__vtable = beModelCtrlInfoHitBody_vtable;
    object._AABoxMinList._value = 0;
    object._AABoxMaxList._value = 0;
    object._AABoxList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlInfoHitBody)

void beModelCtrlInfoHitBody_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoHitBody_meta, igObject_register,
                       fn_800237D0, beModelCtrlInfoHitBody_getMetaCall,
                       beModelCtrlInfoHitBody_className, 0x30,
                       beModelCtrlInfoHitBody_vtableRead, beModelCtrlInfoHitBody_fieldInit, 0, beModelCtrlInfoHitBody_dependencies);
}

META_GET_META_CALL(beModelCtrlInfoHitBody)

void beModelCtrlInfoHitBody_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoHitBody_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoHitBody_fieldTypes, 7);
    Meta::igBoolMetaField *isFirstField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(isFirstField, 1);
    Meta::igObjectRefMetaField *orgAABoxListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value4 = fn_801225BC();
    orgAABoxListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    orgAABoxListField->_refCounted = false;
    Meta::igObjectRefMetaField *aABoxMinListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value6 = fn_80122100();
    aABoxMinListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value6);
    aABoxMinListField->_construct = true;
    Meta::igObjectRefMetaField *aABoxMaxListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_value8 = fn_80122100();
    aABoxMaxListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value8);
    aABoxMaxListField->_construct = true;
    Meta::igObjectRefMetaField *aABoxListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_value10 = fn_801225BC();
    aABoxListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value10);
    aABoxListField->_construct = true;
    meta_setupFields(meta, beModelCtrlInfoHitBody_fieldNames, beModelCtrlInfoHitBody_fieldStorage, beModelCtrlInfoHitBody_fieldOffsets, base);
}

}
#pragma pop
