// igTransformStack: Alchemy class registration (0x801AC4AC..0x801AC60C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformStack)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectStack)

extern "C" {
void *fn_800CB530();
void fn_801AA6DC();
extern char igTransformStack_dependencies[8];
extern char lbl_80480B58[];
extern char lbl_804B9BB8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransformStack)

void *igTransformStack_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80480B58;
    object.__vtable = igNonRefCountedObjectStack_vtable;
    object.__vtable = lbl_804B9BB8;
    object.__vtable = igTransformStack_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTransformStack)

void igTransformStack_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTransformStack_meta, igNonRefCountedObjectStack_register,
                       fn_800CB530, igTransformStack_getMetaCall,
                       igTransformStack_className, 0x14,
                       igTransformStack_vtableRead, 0, 0, igTransformStack_dependencies);
}

META_GET_META_CALL(igTransformStack)

}
#pragma pop
