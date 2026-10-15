// beWaterMove: Alchemy class registration (0x802B4548..0x802B47E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beWaterMove)
META_DECLARE(beWaterMoveDataList)
META_DECLARE(igObject)

extern "C" {
extern char beWaterMove_dependencies[8];
extern char beWaterMove_fieldNames[];
extern char beWaterMove_fieldOffsets[];
extern char beWaterMove_fieldStorage[];
extern char beWaterMove_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beWaterMoveInstance : igObjectInstance {
    char unknown04[32];
    igObjectRefMember _dataList;
    char unknown28[8];
    inline ~beWaterMoveInstance() { __vtable = beWaterMove_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beWaterMove)

META_GET_META(beWaterMove)

#pragma push
#pragma optimize_for_size on
void *beWaterMove_vtableRead()
{
    beWaterMoveInstance object;
    object.__vtable = beWaterMove_vtable;
    object._dataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beWaterMove)

void beWaterMove_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWaterMove_meta, igObject_register,
                       fn_800237D0, beWaterMove_getMetaCall,
                       beWaterMove_className, 0x28,
                       beWaterMove_vtableRead, beWaterMove_fieldInit, 0, beWaterMove_dependencies);
}

META_GET_META_CALL(beWaterMove)

void beWaterMove_fieldInit()
{
    Meta::igMetaObject *meta = beWaterMove_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beWaterMove_fieldTypes, 5);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    dataListField->_metaObject = beWaterMoveDataList_metaObject();
    dataListField->_construct = true;
    meta_setupFields(meta, beWaterMove_fieldNames, beWaterMove_fieldStorage, beWaterMove_fieldOffsets, base);
}

}
#pragma pop
