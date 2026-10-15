// beAction2InfoList: Alchemy class registration (0x802E5CD8..0x802E5E54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2InfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beAction2InfoList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D3B44[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beAction2InfoList)
#pragma pop

void *beAction2InfoList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D3B44;
    object.__vtable = beAction2InfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beAction2InfoList)

void beAction2InfoList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2InfoList_meta, igObjectList_register,
                       fn_80024180, beAction2InfoList_getMetaCall,
                       beAction2InfoList_className, 0x14,
                       beAction2InfoList_vtableRead, 0, 0, beAction2InfoList_dependencies);
}

META_GET_META_CALL(beAction2InfoList)

}
#pragma pop
