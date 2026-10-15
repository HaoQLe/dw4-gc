// beCriSndf: Alchemy class registration (0x802DF8D0..0x802DFB34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCriSndf)
META_DECLARE(igObject)

extern "C" {
extern char beCriSndf_fieldNames[];
extern char beCriSndf_fieldOffsets[];
extern char beCriSndf_fieldStorage[];
extern char beCriSndf_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beCriSndf)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beCriSndf)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beCriSndf)
#pragma pop

void *beCriSndf_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = beCriSndf_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCriSndf)

void beCriSndf_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriSndf_meta, igObject_register,
                       fn_800237D0, beCriSndf_getMetaCall,
                       beCriSndf_className, 0x20,
                       beCriSndf_vtableRead, beCriSndf_fieldInit, 0, 0);
}

META_GET_META_CALL(beCriSndf)

void beCriSndf_fieldInit()
{
    Meta::igMetaObject *meta = beCriSndf_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCriSndf_fieldTypes, 0x3);
    meta_setupFields(meta, beCriSndf_fieldNames, beCriSndf_fieldStorage, beCriSndf_fieldOffsets, base);
}

}
#pragma pop
