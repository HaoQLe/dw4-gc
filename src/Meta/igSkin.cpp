// igSkin: Alchemy class registration (0x801AF670..0x801AF918). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igSkin)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void *fn_80122790();
void fn_801AA6DC();
void *fn_801B74F0();
extern char igSkin_dependencies[12];
extern char igSkin_fieldNames[8];
extern char igSkin_fieldOffsets[8];
extern char igSkin_fieldStorage[8];
extern char igSkin_fieldTypes[8];
extern char lbl_8056021C[7];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igSkinInstance : igNamedObjectInstance {
    igObjectRefMember _skinnedGraph;
    igObjectRefMember _bound;
    char unknown14[4];
    inline ~igSkinInstance() { __vtable = igSkin_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSkin)

void *igSkin_vtableRead()
{
    igSkinInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igSkin_vtable;
    object._skinnedGraph._value = 0;
    object._bound._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSkin)

void igSkin_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSkin_meta, igNamedObject_register,
                       fn_80023CF4, igSkin_getMetaCall,
                       lbl_8056021C, 0x14,
                       igSkin_vtableRead, igSkin_fieldInit, 0, igSkin_dependencies);
}

META_GET_META_CALL(igSkin)

void igSkin_fieldInit()
{
    Meta::igMetaObject *meta = igSkin_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSkin_fieldTypes, 2);
    Meta::igObjectRefMetaField *skinnedGraphField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B74F0();
    skinnedGraphField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *boundField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80122790();
    boundField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    meta_setupFields(meta, igSkin_fieldNames, igSkin_fieldStorage, igSkin_fieldOffsets, base);
}

}
#pragma pop
