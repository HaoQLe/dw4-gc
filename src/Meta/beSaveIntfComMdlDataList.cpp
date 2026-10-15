// beSaveIntfComMdlDataList: Alchemy class registration (0x803351B8..0x80335388). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSaveIntfComMdlDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beSaveIntfComMdlDataList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E65DC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beSaveIntfComMdlDataList)

META_GET_META(beSaveIntfComMdlDataList)

void *beSaveIntfComMdlDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E65DC;
    object.__vtable = beSaveIntfComMdlDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSaveIntfComMdlDataList)

void beSaveIntfComMdlDataList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beSaveIntfComMdlDataList_meta, igObjectList_register,
                       fn_80024180, beSaveIntfComMdlDataList_getMetaCall,
                       beSaveIntfComMdlDataList_className, 0x14,
                       beSaveIntfComMdlDataList_vtableRead, 0, 0, beSaveIntfComMdlDataList_dependencies);
}

META_GET_META_CALL(beSaveIntfComMdlDataList)

}
#pragma pop
