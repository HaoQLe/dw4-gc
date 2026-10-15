// beWaterPlainInfoRam: Alchemy class registration (0x802B4164..0x802B4548). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beWaterPlainInfoRam)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beWaterMove)

extern "C" {
extern char beWaterPlainInfoRam_dependencies[24];
extern char beWaterPlainInfoRam_fieldNames[];
extern char beWaterPlainInfoRam_fieldOffsets[];
extern char beWaterPlainInfoRam_fieldStorage[];
extern char beWaterPlainInfoRam_fieldTypes[];
void *fn_80034BB0();
void *fn_80034D84();
void *fn_800365B4();
void *fn_800D0068();
void fn_802B1AC8();
void *fn_802B2B2C();
}

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beWaterPlainInfoRamInstance : beBaseInfoRamInstance {
    char unknown2C[40];
    igObjectRefMember _vertexArray;
    igObjectRefMember _dampeningGrid;
    igObjectRefMember _dplist2VertexNO;
    char unknown60[56];
    igObjectRefMember _gridLists;
    char unknown9C[20];
    igObjectRefMember _waterMove;
    char unknownB4[12];
    inline ~beWaterPlainInfoRamInstance() { __vtable = beWaterPlainInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beWaterPlainInfoRam)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beWaterPlainInfoRam_vtableRead()
{
    beWaterPlainInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beWaterPlainInfoRam_vtable;
    object._vertexArray._value = 0;
    object._dampeningGrid._value = 0;
    object._dplist2VertexNO._value = 0;
    object._gridLists._value = 0;
    object._waterMove._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beWaterPlainInfoRam)

void beWaterPlainInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWaterPlainInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beWaterPlainInfoRam_getMetaCall,
                       beWaterPlainInfoRam_className, 0xB8,
                       beWaterPlainInfoRam_vtableRead, beWaterPlainInfoRam_fieldInit, 0, beWaterPlainInfoRam_dependencies);
}

META_GET_META_CALL(beWaterPlainInfoRam)

void beWaterPlainInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beWaterPlainInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beWaterPlainInfoRam_fieldTypes, 27);
    Meta::igObjectRefMetaField *vertexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    void *value_value3 = fn_800D0068();
    vertexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *dampeningGridField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    void *value_value5 = fn_80034D84();
    dampeningGridField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    dampeningGridField->_construct = true;
    Meta::igObjectRefMetaField *dplist2VertexNOField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    void *value_value7 = fn_800365B4();
    dplist2VertexNOField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    dplist2VertexNOField->_construct = true;
    Meta::igObjectRefMetaField *gridListsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 21));
    void *value_value9 = fn_80034BB0();
    gridListsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    gridListsField->_construct = true;
    Meta::igObjectRefMetaField *waterMoveField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 26));
    waterMoveField->_metaObject = beWaterMove_metaObject();
    meta_setupFields(meta, beWaterPlainInfoRam_fieldNames, beWaterPlainInfoRam_fieldStorage, beWaterPlainInfoRam_fieldOffsets, base);
}

}
#pragma pop
