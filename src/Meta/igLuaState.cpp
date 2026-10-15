// igLuaState: Alchemy class registration (0x802693B4..0x8026960C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igLuaState)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void *fn_8002BED0();
void fn_80269380();
extern char igLuaState_dependencies[8];
extern char igLuaState_fieldNames[8];
extern char igLuaState_fieldOffsets[8];
extern char igLuaState_fieldStorage[8];
extern char igLuaState_fieldTypes[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igLuaStateInstance : igNamedObjectInstance {
    char unknown0C[4];
    igObjectRefMember _memPool;
    char unknown14[12];
    inline ~igLuaStateInstance() { __vtable = igLuaState_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLuaState)

void *igLuaState_vtableRead()
{
    igLuaStateInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igLuaState_vtable;
    object._memPool._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLuaState)

void igLuaState_register()
{
    fn_80269380();
    meta_registerClass(0, &igLuaState_meta, igNamedObject_register,
                       fn_80023CF4, igLuaState_getMetaCall,
                       igLuaState_className, 0x14,
                       igLuaState_vtableRead, igLuaState_fieldInit, 0, igLuaState_dependencies);
}

META_GET_META_CALL(igLuaState)

void igLuaState_fieldInit()
{
    Meta::igMetaObject *meta = igLuaState_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLuaState_fieldTypes, 2);
    Meta::igObjectRefMetaField *memPoolField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_8002BED0();
    memPoolField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igLuaState_fieldNames, igLuaState_fieldStorage, igLuaState_fieldOffsets, base);
}

}
#pragma pop
