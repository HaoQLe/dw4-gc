// igVertexArray2Helper: Alchemy class registration (0x800CEC2C..0x800CEEBC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igVertexArray2Helper)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_800CE2F8();
void *fn_800CEEF4();
extern char igVertexArray2Helper_dependencies[8];
extern char igVertexArray2Helper_fieldNames[4];
extern char igVertexArray2Helper_fieldOffsets[4];
extern char igVertexArray2Helper_fieldStorage[4];
extern char igVertexArray2Helper_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igVertexArray2HelperInstance : igNamedObjectInstance {
    igObjectRefMember _vertexArray;
    inline ~igVertexArray2HelperInstance() { __vtable = igVertexArray2Helper_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexArray2Helper)

META_GET_META(igVertexArray2Helper)

void *igVertexArray2Helper_vtableRead()
{
    igVertexArray2HelperInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igVertexArray2Helper_vtable;
    object._vertexArray._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexArray2Helper)

void igVertexArray2Helper_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVertexArray2Helper_meta, igNamedObject_register,
                       fn_80023CF4, igVertexArray2Helper_getMetaCall,
                       igVertexArray2Helper_className, 0x10,
                       igVertexArray2Helper_vtableRead, igVertexArray2Helper_fieldInit, 0, igVertexArray2Helper_dependencies);
}

META_GET_META_CALL(igVertexArray2Helper)

void igVertexArray2Helper_fieldInit()
{
    Meta::igMetaObject *meta = igVertexArray2Helper_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexArray2Helper_fieldTypes, 1);
    Meta::igObjectRefMetaField *vertexArrayField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800CEEF4();
    vertexArrayField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igVertexArray2Helper_fieldNames, igVertexArray2Helper_fieldStorage, igVertexArray2Helper_fieldOffsets, base);
}

}
#pragma pop
