// beFileListInfo: Alchemy class registration (0x802DA9A8..0x802DACAC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beFileListInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beFileListInfo_dependencies[8];
extern char beFileListInfo_fieldNames[];
extern char beFileListInfo_fieldOffsets[];
extern char beFileListInfo_fieldStorage[];
extern char beFileListInfo_fieldTypes[];
void *fn_800284EC();
void *fn_80029A5C();
void fn_80071694(void *,int);
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct beFileListInfoInstance : igInfoInstance {
    char unknown0C[8];
    igStringMember _section;
    igObjectRefMember _fnames;
    char unknown1C[12];
    inline ~beFileListInfoInstance() { __vtable = beFileListInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beFileListInfo)

void *beFileListInfo_vtableRead()
{
    beFileListInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = beFileListInfo_vtable;
    object._section._value = 0;
    object._fnames._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beFileListInfo)

void beFileListInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFileListInfo_meta, igInfo_register,
                       fn_800284EC, beFileListInfo_getMetaCall,
                       beFileListInfo_className, 0x1C,
                       beFileListInfo_vtableRead, beFileListInfo_fieldInit, 0, beFileListInfo_dependencies);
}

META_GET_META_CALL(beFileListInfo)

void beFileListInfo_fieldInit()
{
    Meta::igMetaObject *meta = beFileListInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beFileListInfo_fieldTypes, 2);
    Meta::igStringMetaField *sectionField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(sectionField, 0);
    Meta::igObjectRefMetaField *fnamesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_80029A5C();
    fnamesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    meta_setupFields(meta, beFileListInfo_fieldNames, beFileListInfo_fieldStorage, beFileListInfo_fieldOffsets, base);
}

}
#pragma pop
