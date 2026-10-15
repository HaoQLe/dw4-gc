// igDataPumpManager: Alchemy class registration (0x80218B04..0x80218D14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igDataPumpManager)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
void *fn_80218D14();
extern char igDataPumpManager_dependencies[8];
extern char igDataPumpManager_fieldNames[4];
extern char igDataPumpManager_fieldOffsets[4];
extern char igDataPumpManager_fieldStorage[4];
extern char igDataPumpManager_fieldTypes[4];
}

struct igDataPumpManagerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _dataPumpList;
    char unknown0C[4];
    inline ~igDataPumpManagerInstance() { __vtable = igDataPumpManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpManager)

void *igDataPumpManager_vtableRead()
{
    igDataPumpManagerInstance object;
    object.__vtable = igDataPumpManager_vtable;
    object._dataPumpList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDataPumpManager)

void igDataPumpManager_register()
{
    fn_80216620();
    meta_registerClass(0, &igDataPumpManager_meta, igObject_register,
                       fn_800237D0, igDataPumpManager_getMetaCall,
                       igDataPumpManager_className, 0xC,
                       igDataPumpManager_vtableRead, igDataPumpManager_fieldInit, 0, igDataPumpManager_dependencies);
}

META_GET_META_CALL(igDataPumpManager)

void igDataPumpManager_fieldInit()
{
    Meta::igMetaObject *meta = igDataPumpManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDataPumpManager_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataPumpListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80218D14();
    dataPumpListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataPumpListField->_construct = true;
    dataPumpListField->_persistent = false;
    meta_setupFields(meta, igDataPumpManager_fieldNames, igDataPumpManager_fieldStorage, igDataPumpManager_fieldOffsets, base);
}

}
#pragma pop
