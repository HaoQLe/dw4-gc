// beSvSlotData: Alchemy class registration (0x802BFE80..0x802C0004). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSvSlotData)
META_DECLARE(igObject)

extern "C" {
extern char beSvSlotData_fieldNames[];
extern char beSvSlotData_fieldOffsets[];
extern char beSvSlotData_fieldStorage[];
extern char beSvSlotData_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSvSlotData)

META_ARK_REGISTER(beSvSlotData)

void beSvSlotData_register()
{
    fn_802B1AC8();
    meta_registerClass(1, &beSvSlotData_meta, igObject_register,
                       fn_800237D0, beSvSlotData_getMetaCall,
                       beSvSlotData_className, 0x18,
                       0, beSvSlotData_fieldInit, 0, 0);
}

META_GET_META_CALL(beSvSlotData)

void beSvSlotData_fieldInit()
{
    Meta::igMetaObject *meta = beSvSlotData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSvSlotData_fieldTypes, 0x5);
    meta_setupFields(meta, beSvSlotData_fieldNames, beSvSlotData_fieldStorage, beSvSlotData_fieldOffsets, base);
}

}
#pragma pop
