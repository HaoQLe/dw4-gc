// igDataPumpInfo: Alchemy class registration (0x80219048..0x802192C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igDataPumpInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_800284EC();
void fn_80216620();
void *fn_80218D14();
extern char igDataPumpInfo_dependencies[8];
extern char igDataPumpInfo_fieldNames[4];
extern char igDataPumpInfo_fieldOffsets[4];
extern char igDataPumpInfo_fieldStorage[4];
extern char igDataPumpInfo_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igDataPumpInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _dataPumpList;
    char unknown18[8];
    inline ~igDataPumpInfoInstance() { __vtable = igDataPumpInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpInfo)

void *igDataPumpInfo_vtableRead()
{
    igDataPumpInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igDataPumpInfo_vtable;
    object._dataPumpList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDataPumpInfo)

void igDataPumpInfo_register()
{
    fn_80216620();
    meta_registerClass(0, &igDataPumpInfo_meta, igInfo_register,
                       fn_800284EC, igDataPumpInfo_getMetaCall,
                       igDataPumpInfo_className, 0x18,
                       igDataPumpInfo_vtableRead, igDataPumpInfo_fieldInit, 0, igDataPumpInfo_dependencies);
}

META_GET_META_CALL(igDataPumpInfo)

void igDataPumpInfo_fieldInit()
{
    Meta::igMetaObject *meta = igDataPumpInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDataPumpInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataPumpListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80218D14();
    dataPumpListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataPumpListField->_construct = true;
    meta_setupFields(meta, igDataPumpInfo_fieldNames, igDataPumpInfo_fieldStorage, igDataPumpInfo_fieldOffsets, base);
}

}
#pragma pop
