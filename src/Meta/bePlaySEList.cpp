// bePlaySEList: Alchemy class registration (0x802B928C..0x802B945C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(bePlaySEList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char bePlaySEList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DBB6C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(bePlaySEList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(bePlaySEList)
#pragma pop

void *bePlaySEList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DBB6C;
    object.__vtable = bePlaySEList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(bePlaySEList)

void bePlaySEList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &bePlaySEList_meta, igObjectList_register,
                       fn_80024180, bePlaySEList_getMetaCall,
                       bePlaySEList_className, 0x14,
                       bePlaySEList_vtableRead, 0, 0, bePlaySEList_dependencies);
}

META_GET_META_CALL(bePlaySEList)

}
#pragma pop
