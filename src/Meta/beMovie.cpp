// beMovie: Alchemy class registration (0x802C4EA4..0x802C5294). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beMovie)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igMovieManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMovie_dependencies[8];
extern char beMovie_fieldNames[];
extern char beMovie_fieldOffsets[];
extern char beMovie_fieldStorage[];
extern char beMovie_fieldTypes[];
void fn_80071694(void *,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct Instance_804DD724 : Instance_804CBA60 {
    char unknown0C[12];
    igObjectRefMember _infoList;
    inline ~Instance_804DD724() { __vtable = lbl_804DD724; }
};

struct beMovieInstance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _movie;
    igStringMember _playingName;
    inline ~beMovieInstance() { __vtable = beMovie_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beMovie)

META_METAOBJECT(beMovie)

META_GET_META(beMovie)

void *beMovie_vtableRead()
{
    beMovieInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beMovie_vtable;
    object._movie._value = 0;
    object._playingName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMovie)

void beMovie_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMovie_meta, beBaseInfoManager_register,
                       fn_802B381C, beMovie_getMetaCall,
                       beMovie_className, 0x28,
                       beMovie_vtableRead, beMovie_fieldInit, 0, beMovie_dependencies);
}

META_GET_META_CALL(beMovie)

void beMovie_fieldInit()
{
    Meta::igMetaObject *meta = beMovie_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMovie_fieldTypes, 2);
    Meta::igObjectRefMetaField *movieField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    movieField->_metaObject = igMovieManager_metaObject();
    Meta::igStringMetaField *playingNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 1));
    fn_80071694(playingNameField, 0);
    meta_setupFields(meta, beMovie_fieldNames, beMovie_fieldStorage, beMovie_fieldOffsets, base);
}

}
#pragma pop
