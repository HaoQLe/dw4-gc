// beSelectCtrlInfoWork: Alchemy class registration (0x802BA5BC..0x802BA8E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSelectCtrlInfoWork)
META_DECLARE(igObject)

extern "C" {
extern char beSelectCtrlInfoWork_dependencies[8];
extern char beSelectCtrlInfoWork_fieldNames[];
extern char beSelectCtrlInfoWork_fieldOffsets[];
extern char beSelectCtrlInfoWork_fieldStorage[];
extern char beSelectCtrlInfoWork_fieldTypes[];
void *fn_800237D0();
void *fn_80036C40();
void fn_8003EC68(void *,int);
void fn_802B1AC8();
}

struct beSelectCtrlInfoWorkInstance : igObjectInstance {
    char unknown04[24];
    igStringMember _svSeqName;
    igObjectRefMember _decideList;
    char unknown24[12];
    inline ~beSelectCtrlInfoWorkInstance() { __vtable = beSelectCtrlInfoWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSelectCtrlInfoWork)

META_METAOBJECT(beSelectCtrlInfoWork)

META_GET_META(beSelectCtrlInfoWork)

void *beSelectCtrlInfoWork_vtableRead()
{
    beSelectCtrlInfoWorkInstance object;
    object.__vtable = beSelectCtrlInfoWork_vtable;
    object._svSeqName._value = 0;
    object._decideList._value = 0;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beSelectCtrlInfoWork)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beSelectCtrlInfoWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSelectCtrlInfoWork_meta, igObject_register,
                       fn_800237D0, beSelectCtrlInfoWork_getMetaCall,
                       beSelectCtrlInfoWork_className, 0x24,
                       beSelectCtrlInfoWork_vtableRead, beSelectCtrlInfoWork_fieldInit, 0, beSelectCtrlInfoWork_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beSelectCtrlInfoWork)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beSelectCtrlInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beSelectCtrlInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSelectCtrlInfoWork_fieldTypes, 5);
    Meta::igBoolMetaField *isCancelField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 2));
    fn_8003EC68(isCancelField, 1);
    Meta::igObjectRefMetaField *decideListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value4 = fn_80036C40();
    decideListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    meta_setupFields(meta, beSelectCtrlInfoWork_fieldNames, beSelectCtrlInfoWork_fieldStorage, beSelectCtrlInfoWork_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
