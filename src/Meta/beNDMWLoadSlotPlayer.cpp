// beNDMWLoadSlotPlayer: Alchemy class registration (0x803404A4..0x803407E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWLoadSlotPlayer)
META_DECLARE(beNDMWDegiDataList)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWLoadSlotPlayer_dependencies[12];
extern char beNDMWLoadSlotPlayer_fieldNames[];
extern char beNDMWLoadSlotPlayer_fieldOffsets[];
extern char beNDMWLoadSlotPlayer_fieldStorage[];
extern char beNDMWLoadSlotPlayer_fieldTypes[];
void *fn_800237D0();
void *fn_800365B4();
void fn_803250AC();
}

struct beNDMWLoadSlotPlayerInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _saveDataList;
    igObjectRefMember _accessPlList;
    char unknown14[12];
    inline ~beNDMWLoadSlotPlayerInstance() { __vtable = beNDMWLoadSlotPlayer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadSlotPlayer)

META_METAOBJECT(beNDMWLoadSlotPlayer)

META_GET_META(beNDMWLoadSlotPlayer)

void *beNDMWLoadSlotPlayer_vtableRead()
{
    beNDMWLoadSlotPlayerInstance object;
    object.__vtable = beNDMWLoadSlotPlayer_vtable;
    object._saveDataList._value = 0;
    object._accessPlList._value = 0;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beNDMWLoadSlotPlayer)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beNDMWLoadSlotPlayer_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadSlotPlayer_meta, igObject_register,
                       fn_800237D0, beNDMWLoadSlotPlayer_getMetaCall,
                       beNDMWLoadSlotPlayer_className, 0x14,
                       beNDMWLoadSlotPlayer_vtableRead, beNDMWLoadSlotPlayer_fieldInit, 0, beNDMWLoadSlotPlayer_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beNDMWLoadSlotPlayer)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beNDMWLoadSlotPlayer_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadSlotPlayer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadSlotPlayer_fieldTypes, 3);
    Meta::igObjectRefMetaField *saveDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    saveDataListField->_metaObject = beNDMWDegiDataList_metaObject();
    saveDataListField->_construct = true;
    Meta::igObjectRefMetaField *accessPlListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value5 = fn_800365B4();
    accessPlListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    accessPlListField->_construct = true;
    meta_setupFields(meta, beNDMWLoadSlotPlayer_fieldNames, beNDMWLoadSlotPlayer_fieldStorage, beNDMWLoadSlotPlayer_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
