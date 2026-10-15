// igMovieManager: Alchemy class registration (0x802AD248..0x802AD6F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igMovieManager)
META_DECLARE(igInfoManager)
META_DECLARE(igMovieCodecList)
META_DECLARE(igMovieInfoList)
META_DECLARE(igMovieRenderer)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_800C6F94();
void *fn_8010DFFC();
void *fn_80284550();
void fn_802AA788();
extern char igMovieManager_dependencies[24];
extern char igMovieManager_fieldNames[];
extern char igMovieManager_fieldOffsets[];
extern char igMovieManager_fieldStorage[];
extern char igMovieManager_fieldTypes[];
extern char lbl_804CBA60[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct igMovieManagerInstance : Instance_804CBA60 {
    char unknown0C[4];
    igObjectRefMember _movieList;
    char unknown14[4];
    igObjectRefMember _audio;
    igObjectRefMember _codecList;
    igObjectRefMember _movieRenderer;
    igObjectRefMember _rendererList;
    char unknown28[8];
    inline ~igMovieManagerInstance() { __vtable = igMovieManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMovieManager)

META_METAOBJECT(igMovieManager)

META_GET_META(igMovieManager)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *igMovieManager_vtableRead()
{
    igMovieManagerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = igMovieManager_vtable;
    object._movieList._value = 0;
    object._audio._value = 0;
    object._codecList._value = 0;
    object._movieRenderer._value = 0;
    object._rendererList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(igMovieManager)

void igMovieManager_register()
{
    fn_802AA788();
    meta_registerClass(0, &igMovieManager_meta, igInfoManager_register,
                       fn_80284550, igMovieManager_getMetaCall,
                       igMovieManager_className, 0x28,
                       igMovieManager_vtableRead, igMovieManager_fieldInit, 0, igMovieManager_dependencies);
}

META_GET_META_CALL(igMovieManager)

void igMovieManager_fieldInit()
{
    Meta::igMetaObject *meta = igMovieManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMovieManager_fieldTypes, 6);
    Meta::igObjectRefMetaField *movieListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    movieListField->_metaObject = igMovieInfoList_metaObject();
    Meta::igBoolMetaField *audioDisabledField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    audioDisabledField->_persistent = false;
    Meta::igObjectRefMetaField *audioField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value6 = fn_800C6F94();
    audioField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value6);
    audioField->_persistent = false;
    Meta::igObjectRefMetaField *codecListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    codecListField->_metaObject = igMovieCodecList_metaObject();
    codecListField->_persistent = false;
    Meta::igObjectRefMetaField *movieRendererField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    movieRendererField->_metaObject = igMovieRenderer_metaObject();
    movieRendererField->_construct = true;
    movieRendererField->_persistent = false;
    Meta::igObjectRefMetaField *rendererListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_value12 = fn_8010DFFC();
    rendererListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value12);
    meta_setupFields(meta, igMovieManager_fieldNames, igMovieManager_fieldStorage, igMovieManager_fieldOffsets, base);
}

}
#pragma pop
