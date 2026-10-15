// bePlaySE: Alchemy class registration (0x802B945C..0x802B966C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(bePlaySE)
META_DECLARE(igObject)

extern "C" {
extern char bePlaySE_fieldNames[];
extern char bePlaySE_fieldOffsets[];
extern char bePlaySE_fieldStorage[];
extern char bePlaySE_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(bePlaySE)

META_GET_META(bePlaySE)

void *bePlaySE_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = bePlaySE_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(bePlaySE)

void bePlaySE_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &bePlaySE_meta, igObject_register,
                       fn_800237D0, bePlaySE_getMetaCall,
                       bePlaySE_className, 0x18,
                       bePlaySE_vtableRead, bePlaySE_fieldInit, 0, 0);
}

META_GET_META_CALL(bePlaySE)

void bePlaySE_fieldInit()
{
    Meta::igMetaObject *meta = bePlaySE_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, bePlaySE_fieldTypes, 0x2);
    meta_setupFields(meta, bePlaySE_fieldNames, bePlaySE_fieldStorage, bePlaySE_fieldOffsets, base);
}

}
#pragma pop
