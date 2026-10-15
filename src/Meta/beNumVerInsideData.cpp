// beNumVerInsideData: Alchemy class registration (0x802C38C0..0x802C3AD0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNumVerInsideData)
META_DECLARE(igObject)

extern "C" {
extern char beNumVerInsideData_fieldNames[];
extern char beNumVerInsideData_fieldOffsets[];
extern char beNumVerInsideData_fieldStorage[];
extern char beNumVerInsideData_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNumVerInsideData)

META_GET_META(beNumVerInsideData)

void *beNumVerInsideData_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = beNumVerInsideData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNumVerInsideData)

void beNumVerInsideData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumVerInsideData_meta, igObject_register,
                       fn_800237D0, beNumVerInsideData_getMetaCall,
                       beNumVerInsideData_className, 0x10,
                       beNumVerInsideData_vtableRead, beNumVerInsideData_fieldInit, 0, 0);
}

META_GET_META_CALL(beNumVerInsideData)

void beNumVerInsideData_fieldInit()
{
    Meta::igMetaObject *meta = beNumVerInsideData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNumVerInsideData_fieldTypes, 0x2);
    meta_setupFields(meta, beNumVerInsideData_fieldNames, beNumVerInsideData_fieldStorage, beNumVerInsideData_fieldOffsets, base);
}

}
#pragma pop
