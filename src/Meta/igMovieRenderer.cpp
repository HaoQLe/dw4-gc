// igMovieRenderer: Alchemy class registration (0x802ACF58..0x802AD248). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igMovieRenderer)
META_DECLARE(igMovieManager)
META_DECLARE(igRenderer)

extern "C" {
void *fn_8010DF8C();
void fn_802AA788();
extern char igMovieRenderer_dependencies[8];
extern char igMovieRenderer_fieldNames[];
extern char igMovieRenderer_fieldOffsets[];
extern char igMovieRenderer_fieldStorage[];
extern char igMovieRenderer_fieldTypes[];
extern char lbl_80497C9C[];
}

struct Instance_80497C9C : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _visualContext;
    inline ~Instance_80497C9C() { __vtable = lbl_80497C9C; }
};

struct igMovieRendererInstance : Instance_80497C9C {
    igObjectRefMember _movieManager;
    inline ~igMovieRendererInstance() { __vtable = igMovieRenderer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igMovieRenderer)

META_GET_META(igMovieRenderer)

#pragma push
#pragma optimize_for_size on
void *igMovieRenderer_vtableRead()
{
    igMovieRendererInstance object;
    object.__vtable = lbl_80497C9C;
    object._visualContext._value = 0;
    object.__vtable = igMovieRenderer_vtable;
    object._movieManager._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(igMovieRenderer)

void igMovieRenderer_register()
{
    fn_802AA788();
    meta_registerClass(0, &igMovieRenderer_meta, igRenderer_register,
                       fn_8010DF8C, igMovieRenderer_getMetaCall,
                       igMovieRenderer_className, 0x10,
                       igMovieRenderer_vtableRead, igMovieRenderer_fieldInit, 0, igMovieRenderer_dependencies);
}

META_GET_META_CALL(igMovieRenderer)

void igMovieRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igMovieRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMovieRenderer_fieldTypes, 1);
    Meta::igObjectRefMetaField *movieManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    movieManagerField->_metaObject = igMovieManager_metaObject();
    movieManagerField->_persistent = false;
    meta_setupFields(meta, igMovieRenderer_fieldNames, igMovieRenderer_fieldStorage, igMovieRenderer_fieldOffsets, base);
}

}
#pragma pop
