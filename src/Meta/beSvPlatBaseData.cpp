// beSvPlatBaseData: Alchemy class registration (0x802BF52C..0x802BF7C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSvPlatBaseData)
META_DECLARE(beSvSlotDataList)
META_DECLARE(igObject)

extern "C" {
extern char beSvPlatBaseData_dependencies[8];
extern char beSvPlatBaseData_fieldNames[];
extern char beSvPlatBaseData_fieldOffsets[];
extern char beSvPlatBaseData_fieldStorage[];
extern char beSvPlatBaseData_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beSvPlatBaseDataInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _slotList;
    char unknown10[16];
    inline ~beSvPlatBaseDataInstance() { __vtable = beSvPlatBaseData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beSvPlatBaseData)

META_GET_META(beSvPlatBaseData)

#pragma push
#pragma optimize_for_size on
void *beSvPlatBaseData_vtableRead()
{
    beSvPlatBaseDataInstance object;
    object.__vtable = beSvPlatBaseData_vtable;
    object._slotList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvPlatBaseData)

void beSvPlatBaseData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvPlatBaseData_meta, igObject_register,
                       fn_800237D0, beSvPlatBaseData_getMetaCall,
                       beSvPlatBaseData_className, 0x18,
                       beSvPlatBaseData_vtableRead, beSvPlatBaseData_fieldInit, 0, beSvPlatBaseData_dependencies);
}

META_GET_META_CALL(beSvPlatBaseData)

void beSvPlatBaseData_fieldInit()
{
    Meta::igMetaObject *meta = beSvPlatBaseData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvPlatBaseData_fieldTypes, 4);
    Meta::igObjectRefMetaField *slotListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    slotListField->_metaObject = beSvSlotDataList_metaObject();
    slotListField->_construct = true;
    meta_setupFields(meta, beSvPlatBaseData_fieldNames, beSvPlatBaseData_fieldStorage, beSvPlatBaseData_fieldOffsets, base);
}

}
#pragma pop
