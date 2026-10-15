// beShadow01InfoList: Alchemy class registration (0x802B966C..0x802B983C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beShadow01InfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beShadow01InfoList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DB9D4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beShadow01InfoList)

META_GET_META(beShadow01InfoList)

void *beShadow01InfoList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DB9D4;
    object.__vtable = beShadow01InfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beShadow01InfoList)

void beShadow01InfoList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beShadow01InfoList_meta, igObjectList_register,
                       fn_80024180, beShadow01InfoList_getMetaCall,
                       beShadow01InfoList_className, 0x14,
                       beShadow01InfoList_vtableRead, 0, 0, beShadow01InfoList_dependencies);
}

META_GET_META_CALL(beShadow01InfoList)

}
#pragma pop
