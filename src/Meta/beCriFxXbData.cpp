// beCriFxXbData: Alchemy class registration (0x802DF3C0..0x802DF5E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCriFxXbData)
META_DECLARE(igObject)

extern "C" {
extern char beCriFxXbData_fieldNames[];
extern char beCriFxXbData_fieldOffsets[];
extern char beCriFxXbData_fieldStorage[];
extern char beCriFxXbData_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beCriFxXbData)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beCriFxXbData)
#pragma pop

void *beCriFxXbData_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[52];
    } object;
    igObject_construct(&object);
    object.__vtable = beCriFxXbData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCriFxXbData)

void beCriFxXbData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriFxXbData_meta, igObject_register,
                       fn_800237D0, beCriFxXbData_getMetaCall,
                       beCriFxXbData_className, 0x38,
                       beCriFxXbData_vtableRead, beCriFxXbData_fieldInit, 0, 0);
}

META_GET_META_CALL(beCriFxXbData)

void beCriFxXbData_fieldInit()
{
    Meta::igMetaObject *meta = beCriFxXbData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCriFxXbData_fieldTypes, 0xC);
    meta_setupFields(meta, beCriFxXbData_fieldNames, beCriFxXbData_fieldStorage, beCriFxXbData_fieldOffsets, base);
}

}
#pragma pop
