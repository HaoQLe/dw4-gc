// igGamecubeCallStackTracer: Alchemy class registration (0x8003BD20..0x8003BE70). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeCallStackTracer)
META_DECLARE(igCallStackTracer)
META_DECLARE(igDataList)
META_DECLARE(igUnsignedIntList)
META_DECLARE(igUnsignedIntListNoClean)

extern "C" {
void fn_80021B94();
void fn_8003BE78();
void *igGamecubeCallStackTracer_parentMeta();
extern char lbl_80474900[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeCallStackTracer)

void *igGamecubeCallStackTracer_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474900;
    object.__vtable = igUnsignedIntList_vtable;
    object.__vtable = igUnsignedIntListNoClean_vtable;
    object.__vtable = igCallStackTracer_vtable;
    object.__vtable = igGamecubeCallStackTracer_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeCallStackTracer)

void igGamecubeCallStackTracer_register()
{
    fn_80021B94();
    meta_registerClass(0, &igGamecubeCallStackTracer_meta, igCallStackTracer_register,
                       igGamecubeCallStackTracer_parentMeta, igGamecubeCallStackTracer_getMetaCall,
                       igGamecubeCallStackTracer_className, 0x14,
                       igGamecubeCallStackTracer_vtableRead, fn_8003BE78, 0, 0);
}

}
#pragma pop
