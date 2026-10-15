// igShaderInfo: Alchemy class registration (0x801B0A6C..0x801B0D2C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igShaderInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_800284EC();
void fn_80065D94(void *);
void fn_801AA6DC();
void fn_801B0D2C();
void *fn_801B0D4C();
void *fn_801B0E54();
extern char igShaderInfo_dependencies[8];
extern char igShaderInfo_fieldNames[4];
extern char igShaderInfo_fieldOffsets[4];
extern char igShaderInfo_fieldStorage[4];
extern char igShaderInfo_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igShaderInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _factoryList;
    char unknown18[8];
    inline ~igShaderInfoInstance() { __vtable = igShaderInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igShaderInfo)

META_GET_META(igShaderInfo)

void *igShaderInfo_vtableRead()
{
    igShaderInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igShaderInfo_vtable;
    object._factoryList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igShaderInfo)

void igShaderInfo_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igShaderInfo_meta, igInfo_register,
                       fn_800284EC, igShaderInfo_getMetaCall,
                       igShaderInfo_className, 0x18,
                       igShaderInfo_vtableRead, igShaderInfo_fieldInit, fn_801B0D2C, igShaderInfo_dependencies);
}

META_GET_META_CALL(igShaderInfo)

void igShaderInfo_fieldInit()
{
    Meta::igMetaObject *meta = igShaderInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igShaderInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *factoryListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B0E54();
    factoryListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    factoryListField->_construct = true;
    meta_setupFields(meta, igShaderInfo_fieldNames, igShaderInfo_fieldStorage, igShaderInfo_fieldOffsets, base);
    fn_80065D94((void *)fn_801B0D4C);
}

}
#pragma pop
