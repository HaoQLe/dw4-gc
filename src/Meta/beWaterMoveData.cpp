// beWaterMoveData: Alchemy class registration (0x802B49B0..0x802B4BF4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beWaterMoveData)
META_DECLARE(igObject)

extern "C" {
extern char beWaterMoveData_dependencies[8];
extern char beWaterMoveData_fieldNames[];
extern char beWaterMoveData_fieldOffsets[];
extern char beWaterMoveData_fieldStorage[];
extern char beWaterMoveData_fieldTypes[];
void *fn_800237D0();
void *fn_80122100();
void fn_802B1AC8();
}

struct beWaterMoveDataInstance : igObjectInstance {
    char unknown04[16];
    igObjectRefMember _posList;
    char unknown18[8];
    inline ~beWaterMoveDataInstance() { __vtable = beWaterMoveData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beWaterMoveData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beWaterMoveData_vtableRead()
{
    beWaterMoveDataInstance object;
    object.__vtable = beWaterMoveData_vtable;
    object._posList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beWaterMoveData)

void beWaterMoveData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWaterMoveData_meta, igObject_register,
                       fn_800237D0, beWaterMoveData_getMetaCall,
                       beWaterMoveData_className, 0x18,
                       beWaterMoveData_vtableRead, beWaterMoveData_fieldInit, 0, beWaterMoveData_dependencies);
}

META_GET_META_CALL(beWaterMoveData)

void beWaterMoveData_fieldInit()
{
    Meta::igMetaObject *meta = beWaterMoveData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beWaterMoveData_fieldTypes, 3);
    Meta::igObjectRefMetaField *posListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value3 = fn_80122100();
    posListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    posListField->_construct = true;
    meta_setupFields(meta, beWaterMoveData_fieldNames, beWaterMoveData_fieldStorage, beWaterMoveData_fieldOffsets, base);
}

}
#pragma pop
