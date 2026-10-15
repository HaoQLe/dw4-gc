// beTextureCtrlAttr: Alchemy class registration (0x802B63C0..0x802B6654). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beTextureCtrlAttr)
META_DECLARE(igNamedObject)

extern "C" {
extern char beTextureCtrlAttr_dependencies[8];
extern char beTextureCtrlAttr_fieldNames[];
extern char beTextureCtrlAttr_fieldOffsets[];
extern char beTextureCtrlAttr_fieldStorage[];
extern char beTextureCtrlAttr_fieldTypes[];
void *fn_80023CF4();
void *fn_801C89F0();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beTextureCtrlAttrInstance : igNamedObjectInstance {
    igObjectRefMember _attrSet;
    inline ~beTextureCtrlAttrInstance() { __vtable = beTextureCtrlAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beTextureCtrlAttr)

#pragma push
#pragma optimize_for_size on
void *beTextureCtrlAttr_vtableRead()
{
    beTextureCtrlAttrInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beTextureCtrlAttr_vtable;
    object._attrSet._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beTextureCtrlAttr)

void beTextureCtrlAttr_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTextureCtrlAttr_meta, igNamedObject_register,
                       fn_80023CF4, beTextureCtrlAttr_getMetaCall,
                       beTextureCtrlAttr_className, 0x10,
                       beTextureCtrlAttr_vtableRead, beTextureCtrlAttr_fieldInit, 0, beTextureCtrlAttr_dependencies);
}

META_GET_META_CALL(beTextureCtrlAttr)

void beTextureCtrlAttr_fieldInit()
{
    Meta::igMetaObject *meta = beTextureCtrlAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTextureCtrlAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *attrSetField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801C89F0();
    attrSetField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beTextureCtrlAttr_fieldNames, beTextureCtrlAttr_fieldStorage, beTextureCtrlAttr_fieldOffsets, base);
}

}
#pragma pop
