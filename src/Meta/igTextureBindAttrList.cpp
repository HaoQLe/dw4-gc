// igTextureBindAttrList: Alchemy class registration (0x802AC4C0..0x802AC6D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureBindAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_802AA788();
extern char igTextureBindAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CE054[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureBindAttrList)

META_METAOBJECT(igTextureBindAttrList)

META_GET_META(igTextureBindAttrList)

void *igTextureBindAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CE054;
    object.__vtable = igTextureBindAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureBindAttrList)

void igTextureBindAttrList_register()
{
    fn_802AA788();
    meta_registerClass(0, &igTextureBindAttrList_meta, igObjectList_register,
                       fn_80024180, igTextureBindAttrList_getMetaCall,
                       igTextureBindAttrList_className, 0x14,
                       igTextureBindAttrList_vtableRead, 0, 0, igTextureBindAttrList_dependencies);
}

META_GET_META_CALL(igTextureBindAttrList)

}
#pragma pop
