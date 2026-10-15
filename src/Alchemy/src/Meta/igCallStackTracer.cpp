// igCallStackTracer: Alchemy class registration (0x80038198..0x800382FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCallStackTracer)
META_DECLARE(igDataList)
META_DECLARE(igUnsignedIntList)
META_DECLARE(igUnsignedIntListNoClean)

extern "C" {
void fn_80021B94();
void fn_80038304();
void *igCallStackTracer_parentMeta();
extern char lbl_80474900[];
}

struct Instance_800381D4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCallStackTracer)

void *igCallStackTracer_vtableRead()
{
    Instance_800381D4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474900;
    object.__vtable = igUnsignedIntList_vtable;
    object.__vtable = igUnsignedIntListNoClean_vtable;
    object.__vtable = igCallStackTracer_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCallStackTracer)

void igCallStackTracer_register()
{
    fn_80021B94();
    meta_registerClass(0, &igCallStackTracer_meta, igUnsignedIntListNoClean_register,
                       igCallStackTracer_parentMeta, igCallStackTracer_getMetaCall,
                       igCallStackTracer_className, 0x14,
                       igCallStackTracer_vtableRead, fn_80038304, 0, 0);
}

META_GET_META_CALL(igCallStackTracer)

}
#pragma pop
