// igGfxShaderDefine: Alchemy class registration (0x800D4160..0x800D43C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igGfxShaderDefine)
META_DECLARE(igNamedObject)
META_DECLARE(igObject)

extern "C" {
void *fn_80023CF4();
void fn_8003EC68(void *,int);
void fn_800CE2F8();
extern char igGfxShaderDefine_dependencies[8];
extern char igGfxShaderDefine_fieldNames[8];
extern char igGfxShaderDefine_fieldOffsets[8];
extern char igGfxShaderDefine_fieldStorage[8];
extern char igGfxShaderDefine_fieldTypes[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igGfxShaderDefineInstance : igNamedObjectInstance {
    igObjectRefMember _value;
    char unknown10[16];
    inline ~igGfxShaderDefineInstance() { __vtable = igGfxShaderDefine_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGfxShaderDefine)

void *igGfxShaderDefine_vtableRead()
{
    igGfxShaderDefineInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igGfxShaderDefine_vtable;
    object._value._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGfxShaderDefine)

void igGfxShaderDefine_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGfxShaderDefine_meta, igNamedObject_register,
                       fn_80023CF4, igGfxShaderDefine_getMetaCall,
                       igGfxShaderDefine_className, 0x14,
                       igGfxShaderDefine_vtableRead, igGfxShaderDefine_fieldInit, 0, igGfxShaderDefine_dependencies);
}

META_GET_META_CALL(igGfxShaderDefine)

void igGfxShaderDefine_fieldInit()
{
    Meta::igMetaObject *meta = igGfxShaderDefine_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGfxShaderDefine_fieldTypes, 2);
    Meta::igObjectRefMetaField *valueField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    valueField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    Meta::igBoolMetaField *enabledStateField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(enabledStateField, 1);
    meta_setupFields(meta, igGfxShaderDefine_fieldNames, igGfxShaderDefine_fieldStorage, igGfxShaderDefine_fieldOffsets, base);
}

}
#pragma pop
