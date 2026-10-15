// beCriVolume: Alchemy class registration (0x802DE694..0x802DE8B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCriVolume)
META_DECLARE(igObject)

extern "C" {
extern char beCriVolume_fieldNames[];
extern char beCriVolume_fieldOffsets[];
extern char beCriVolume_fieldStorage[];
extern char beCriVolume_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beCriVolume)

META_GET_META(beCriVolume)

void *beCriVolume_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = beCriVolume_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCriVolume)

void beCriVolume_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriVolume_meta, igObject_register,
                       fn_800237D0, beCriVolume_getMetaCall,
                       beCriVolume_className, 0x20,
                       beCriVolume_vtableRead, beCriVolume_fieldInit, 0, 0);
}

META_GET_META_CALL(beCriVolume)

void beCriVolume_fieldInit()
{
    Meta::igMetaObject *meta = beCriVolume_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCriVolume_fieldTypes, 0x6);
    meta_setupFields(meta, beCriVolume_fieldNames, beCriVolume_fieldStorage, beCriVolume_fieldOffsets, base);
}

}
#pragma pop
