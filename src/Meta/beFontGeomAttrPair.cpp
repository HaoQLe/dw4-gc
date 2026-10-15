// beFontGeomAttrPair: Alchemy class registration (0x802DA1C8..0x802DA490). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beFontGeomAttrPair)
META_DECLARE(igObject)

extern "C" {
extern char beFontGeomAttrPair_dependencies[8];
extern char beFontGeomAttrPair_fieldNames[];
extern char beFontGeomAttrPair_fieldOffsets[];
extern char beFontGeomAttrPair_fieldStorage[];
extern char beFontGeomAttrPair_fieldTypes[];
void *fn_800237D0();
void *fn_800BAC98();
void fn_802B1AC8();
}

struct beFontGeomAttrPairInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _category;
    igStringMember _panel;
    igObjectRefMember _geomAttrs;
    char unknown14[4];
    inline ~beFontGeomAttrPairInstance() { __vtable = beFontGeomAttrPair_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beFontGeomAttrPair)
#pragma pop

void *beFontGeomAttrPair_vtableRead()
{
    beFontGeomAttrPairInstance object;
    object.__vtable = beFontGeomAttrPair_vtable;
    object._category._value = 0;
    object._panel._value = 0;
    object._geomAttrs._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beFontGeomAttrPair)

void beFontGeomAttrPair_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFontGeomAttrPair_meta, igObject_register,
                       fn_800237D0, beFontGeomAttrPair_getMetaCall,
                       beFontGeomAttrPair_className, 0x14,
                       beFontGeomAttrPair_vtableRead, beFontGeomAttrPair_fieldInit, 0, beFontGeomAttrPair_dependencies);
}

META_GET_META_CALL(beFontGeomAttrPair)

void beFontGeomAttrPair_fieldInit()
{
    Meta::igMetaObject *meta = beFontGeomAttrPair_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beFontGeomAttrPair_fieldTypes, 3);
    Meta::igObjectRefMetaField *geomAttrsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value3 = fn_800BAC98();
    geomAttrsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    geomAttrsField->_construct = true;
    meta_setupFields(meta, beFontGeomAttrPair_fieldNames, beFontGeomAttrPair_fieldStorage, beFontGeomAttrPair_fieldOffsets, base);
}

}
#pragma pop
