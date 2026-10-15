// beSvPs2McImage128k: Alchemy class registration (0x802BCEF0..0x802BD0E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(beSvPs2McImage128k)
META_DECLARE(igObject)

extern "C" {
extern char beSvPs2McImage128k_fieldNames[];
extern char beSvPs2McImage128k_fieldOffsets[];
extern char beSvPs2McImage128k_fieldStorage[];
extern char beSvPs2McImage128k_fieldTypes[];
void *fn_800237D0();
void *fn_80037E48();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beSvPs2McImage128k)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beSvPs2McImage128k_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = beSvPs2McImage128k_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSvPs2McImage128k)

void beSvPs2McImage128k_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSvPs2McImage128k_meta, igObject_register,
                       fn_800237D0, beSvPs2McImage128k_getMetaCall,
                       beSvPs2McImage128k_className, 0x10,
                       beSvPs2McImage128k_vtableRead, beSvPs2McImage128k_fieldInit, 0, 0);
}

META_GET_META_CALL(beSvPs2McImage128k)

void beSvPs2McImage128k_fieldInit()
{
    Meta::igMetaObject *meta = beSvPs2McImage128k_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvPs2McImage128k_fieldTypes, 2);
    Meta::igIntMetaField *dataSizeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_80037E48();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(dataSizeField) + 0x3C) = value_value3;
    meta_setupFields(meta, beSvPs2McImage128k_fieldNames, beSvPs2McImage128k_fieldStorage, beSvPs2McImage128k_fieldOffsets, base);
}

}
#pragma pop
