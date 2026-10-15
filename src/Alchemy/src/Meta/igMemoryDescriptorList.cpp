// igMemoryDescriptorList: Alchemy class registration (0x80039F58..0x8003A0A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryDescriptorList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_8003A0A4();
extern char lbl_80473730[];
}

struct Instance_80039F94_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMemoryDescriptorList)

void *igMemoryDescriptorList_vtableRead()
{
    Instance_80039F94_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80473730;
    object.__vtable = igMemoryDescriptorList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMemoryDescriptorList)

void igMemoryDescriptorList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMemoryDescriptorList_meta, igDataList_register,
                       fn_80024D1C, igMemoryDescriptorList_getMetaCall,
                       igMemoryDescriptorList_className, 0x14,
                       igMemoryDescriptorList_vtableRead, fn_8003A0A4, 0, 0);
}

META_GET_META_CALL(igMemoryDescriptorList)

}
#pragma pop
