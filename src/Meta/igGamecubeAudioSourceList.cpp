// igGamecubeAudioSourceList: Alchemy class registration (0x800C7460..0x800C75A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeAudioSourceList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_800C6F28();
extern char lbl_8047EB58[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeAudioSourceList)

void *igGamecubeAudioSourceList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8047EB58;
    object.__vtable = igGamecubeAudioSourceList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeAudioSourceList)

void igGamecubeAudioSourceList_register()
{
    fn_800C6F28();
    meta_registerClass(0, &igGamecubeAudioSourceList_meta, igDataList_register,
                       fn_80024D1C, igGamecubeAudioSourceList_getMetaCall,
                       igGamecubeAudioSourceList_className, 0x14,
                       igGamecubeAudioSourceList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGamecubeAudioSourceList)

}
#pragma pop
