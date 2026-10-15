// igMemoryPoolContextInfo: Alchemy class registration (0x8002BC20..0x8002BED0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igMemoryPoolContextInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *fn_8002B558();
extern char igMemoryPoolContextInfo_dependencies[8];
extern char igMemoryPoolContextInfo_fieldNames[4];
extern char igMemoryPoolContextInfo_fieldOffsets[4];
extern char igMemoryPoolContextInfo_fieldStorage[4];
extern char igMemoryPoolContextInfo_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igMemoryPoolContextInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _memoryPoolInfos;
    char unknown18[8];
    inline ~igMemoryPoolContextInfoInstance() { __vtable = igMemoryPoolContextInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMemoryPoolContextInfo)

META_GET_META(igMemoryPoolContextInfo)

void *igMemoryPoolContextInfo_vtableRead()
{
    igMemoryPoolContextInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igMemoryPoolContextInfo_vtable;
    object._memoryPoolInfos._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMemoryPoolContextInfo)

void igMemoryPoolContextInfo_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMemoryPoolContextInfo_meta, igInfo_register,
                       fn_800284EC, igMemoryPoolContextInfo_getMetaCall,
                       igMemoryPoolContextInfo_className, 0x18,
                       igMemoryPoolContextInfo_vtableRead, igMemoryPoolContextInfo_fieldInit, 0, igMemoryPoolContextInfo_dependencies);
}

META_GET_META_CALL(igMemoryPoolContextInfo)

void igMemoryPoolContextInfo_fieldInit()
{
    Meta::igMetaObject *meta = igMemoryPoolContextInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMemoryPoolContextInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *memoryPoolInfosField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8002B558();
    memoryPoolInfosField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    memoryPoolInfosField->_construct = true;
    meta_setupFields(meta, igMemoryPoolContextInfo_fieldNames, igMemoryPoolContextInfo_fieldStorage, igMemoryPoolContextInfo_fieldOffsets, base);
}

}
#pragma pop
