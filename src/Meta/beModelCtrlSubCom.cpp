// beModelCtrlSubCom: Alchemy class registration (0x802C5294..0x802C552C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beModelCtrlSubCom)
META_DECLARE(igObject)

extern "C" {
extern char beModelCtrlSubCom_dependencies[8];
extern char beModelCtrlSubCom_fieldNames[];
extern char beModelCtrlSubCom_fieldOffsets[];
extern char beModelCtrlSubCom_fieldStorage[];
extern char beModelCtrlSubCom_fieldTypes[];
void *fn_800237D0();
void *fn_80028F84();
void fn_802B1AC8();
}

struct beModelCtrlSubComInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _comList;
    char unknown0C[4];
    inline ~beModelCtrlSubComInstance() { __vtable = beModelCtrlSubCom_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beModelCtrlSubCom)

META_GET_META(beModelCtrlSubCom)

#pragma push
#pragma optimize_for_size on
void *beModelCtrlSubCom_vtableRead()
{
    beModelCtrlSubComInstance object;
    object.__vtable = beModelCtrlSubCom_vtable;
    object._comList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beModelCtrlSubCom)

void beModelCtrlSubCom_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlSubCom_meta, igObject_register,
                       fn_800237D0, beModelCtrlSubCom_getMetaCall,
                       beModelCtrlSubCom_className, 0xC,
                       beModelCtrlSubCom_vtableRead, beModelCtrlSubCom_fieldInit, 0, beModelCtrlSubCom_dependencies);
}

META_GET_META_CALL(beModelCtrlSubCom)

void beModelCtrlSubCom_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlSubCom_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlSubCom_fieldTypes, 1);
    Meta::igObjectRefMetaField *comListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80028F84();
    comListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    comListField->_construct = true;
    meta_setupFields(meta, beModelCtrlSubCom_fieldNames, beModelCtrlSubCom_fieldStorage, beModelCtrlSubCom_fieldOffsets, base);
}

}
#pragma pop
