// beMatCtrlInfoWork: Alchemy class registration (0x802CFE10..0x802D014C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMatCtrlInfoWork)
META_DECLARE(igObject)

extern "C" {
extern char beMatCtrlInfoWork_dependencies[12];
extern char beMatCtrlInfoWork_fieldNames[];
extern char beMatCtrlInfoWork_fieldOffsets[];
extern char beMatCtrlInfoWork_fieldStorage[];
extern char beMatCtrlInfoWork_fieldTypes[];
void *fn_800237D0();
void *fn_80033E74();
void *fn_80036C40();
void fn_802B1AC8();
}

struct beMatCtrlInfoWorkInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _runFlagList;
    igObjectRefMember _matOnPlLists;
    inline ~beMatCtrlInfoWorkInstance() { __vtable = beMatCtrlInfoWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beMatCtrlInfoWork)

META_METAOBJECT(beMatCtrlInfoWork)

META_GET_META(beMatCtrlInfoWork)

#pragma push
#pragma optimize_for_size on
void *beMatCtrlInfoWork_vtableRead()
{
    beMatCtrlInfoWorkInstance object;
    object.__vtable = beMatCtrlInfoWork_vtable;
    object._runFlagList._value = 0;
    object._matOnPlLists._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beMatCtrlInfoWork)

void beMatCtrlInfoWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMatCtrlInfoWork_meta, igObject_register,
                       fn_800237D0, beMatCtrlInfoWork_getMetaCall,
                       beMatCtrlInfoWork_className, 0x10,
                       beMatCtrlInfoWork_vtableRead, beMatCtrlInfoWork_fieldInit, 0, beMatCtrlInfoWork_dependencies);
}

META_GET_META_CALL(beMatCtrlInfoWork)

void beMatCtrlInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beMatCtrlInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMatCtrlInfoWork_fieldTypes, 2);
    Meta::igObjectRefMetaField *runFlagListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80036C40();
    runFlagListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    runFlagListField->_construct = true;
    Meta::igObjectRefMetaField *matOnPlListsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80033E74();
    matOnPlListsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    matOnPlListsField->_construct = true;
    meta_setupFields(meta, beMatCtrlInfoWork_fieldNames, beMatCtrlInfoWork_fieldStorage, beMatCtrlInfoWork_fieldOffsets, base);
}

}
#pragma pop
