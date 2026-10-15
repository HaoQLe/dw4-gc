// beMovieInfoData: Alchemy class registration (0x802C4B14..0x802C4E44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMovieInfoData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMovieInfoData_dependencies[8];
extern char beMovieInfoData_fieldNames[];
extern char beMovieInfoData_fieldOffsets[];
extern char beMovieInfoData_fieldStorage[];
extern char beMovieInfoData_fieldTypes[];
void *fn_801B3FA8();
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_804DBC50[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beMovieInfoDataInstance : Instance_804DBC50 {
    char unknown0C[4];
    igStringMember _parentLayer;
    igStringMember _callLuaName;
    igObjectRefMember _sceneInfo;
    char unknown1C[12];
    inline ~beMovieInfoDataInstance() { __vtable = beMovieInfoData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beMovieInfoData)
#pragma pop

void *beMovieInfoData_vtableRead()
{
    beMovieInfoDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beMovieInfoData_vtable;
    object._parentLayer._value = 0;
    object._callLuaName._value = 0;
    object._sceneInfo._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMovieInfoData)

void beMovieInfoData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMovieInfoData_meta, beBaseInfoData_register,
                       fn_802B8770, beMovieInfoData_getMetaCall,
                       beMovieInfoData_className, 0x1C,
                       beMovieInfoData_vtableRead, beMovieInfoData_fieldInit, 0, beMovieInfoData_dependencies);
}

META_GET_META_CALL(beMovieInfoData)

void beMovieInfoData_fieldInit()
{
    Meta::igMetaObject *meta = beMovieInfoData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMovieInfoData_fieldTypes, 3);
    Meta::igObjectRefMetaField *sceneInfoField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value3 = fn_801B3FA8();
    sceneInfoField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beMovieInfoData_fieldNames, beMovieInfoData_fieldStorage, beMovieInfoData_fieldOffsets, base);
}

}
#pragma pop
