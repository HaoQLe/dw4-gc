// beTextureCtrlData: Alchemy class registration (0x802B6654..0x802B68E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beTextureCtrlData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beTextureCtrlData_dependencies[8];
extern char beTextureCtrlData_fieldNames[];
extern char beTextureCtrlData_fieldOffsets[];
extern char beTextureCtrlData_fieldStorage[];
extern char beTextureCtrlData_fieldTypes[];
void *fn_80023CF4();
void *fn_800AF4A4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beTextureCtrlDataInstance : igNamedObjectInstance {
    igObjectRefMember _tex;
    inline ~beTextureCtrlDataInstance() { __vtable = beTextureCtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beTextureCtrlData)

#pragma push
#pragma optimize_for_size on
void *beTextureCtrlData_vtableRead()
{
    beTextureCtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beTextureCtrlData_vtable;
    object._tex._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beTextureCtrlData)

void beTextureCtrlData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTextureCtrlData_meta, igNamedObject_register,
                       fn_80023CF4, beTextureCtrlData_getMetaCall,
                       beTextureCtrlData_className, 0x10,
                       beTextureCtrlData_vtableRead, beTextureCtrlData_fieldInit, 0, beTextureCtrlData_dependencies);
}

META_GET_META_CALL(beTextureCtrlData)

void beTextureCtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beTextureCtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTextureCtrlData_fieldTypes, 1);
    Meta::igObjectRefMetaField *texField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800AF4A4();
    texField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beTextureCtrlData_fieldNames, beTextureCtrlData_fieldStorage, beTextureCtrlData_fieldOffsets, base);
}

}
#pragma pop
