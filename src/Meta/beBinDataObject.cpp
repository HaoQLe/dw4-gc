// beBinDataObject: Alchemy class registration (0x802B866C..0x802B8770). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beBinDataObject)
META_DECLARE(beBaseInfoData)

extern "C" {
void fn_802B1AC8();
void *fn_802B8770();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beBinDataObject)

META_ARK_REGISTER(beBinDataObject)

void beBinDataObject_register()
{
    fn_802B1AC8();
    meta_registerClass(1, &beBinDataObject_meta, beBaseInfoData_register,
                       fn_802B8770, beBinDataObject_getMetaCall,
                       beBinDataObject_className, 0x18,
                       0, beBinDataObject_fieldInit, 0, 0);
}

META_GET_META_CALL(beBinDataObject)

}
#pragma pop
