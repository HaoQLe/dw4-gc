// igFileName: Alchemy class registration (0x802AAF58..0x802AB1EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igFileName)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void *fn_80029A5C();
void fn_802AA788();
extern char igFileName_dependencies[8];
extern char igFileName_fieldNames[];
extern char igFileName_fieldOffsets[];
extern char igFileName_fieldStorage[];
extern char igFileName_fieldTypes[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igFileNameInstance : igNamedObjectInstance {
    igObjectRefMember _pathList;
    inline ~igFileNameInstance() { __vtable = igFileName_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(igFileName)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *igFileName_vtableRead()
{
    igFileNameInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igFileName_vtable;
    object._pathList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(igFileName)

void igFileName_register()
{
    fn_802AA788();
    meta_registerClass(0, &igFileName_meta, igNamedObject_register,
                       fn_80023CF4, igFileName_getMetaCall,
                       igFileName_className, 0x10,
                       igFileName_vtableRead, igFileName_fieldInit, 0, igFileName_dependencies);
}

META_GET_META_CALL(igFileName)

void igFileName_fieldInit()
{
    Meta::igMetaObject *meta = igFileName_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFileName_fieldTypes, 1);
    Meta::igObjectRefMetaField *pathListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    pathListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igFileName_fieldNames, igFileName_fieldStorage, igFileName_fieldOffsets, base);
}

}
#pragma pop
