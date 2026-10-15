// beBaseInfoData: Alchemy class registration (0x802E4088..0x802E420C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beBaseInfoData_fieldNames[];
extern char beBaseInfoData_fieldOffsets[];
extern char beBaseInfoData_fieldStorage[];
extern char beBaseInfoData_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beBaseInfoData)

META_ARK_REGISTER(beBaseInfoData)

void beBaseInfoData_register()
{
    fn_802B1AC8();
    meta_registerClass(1, &beBaseInfoData_meta, igNamedObject_register,
                       fn_80023CF4, beBaseInfoData_getMetaCall,
                       beBaseInfoData_className, 0x10,
                       0, beBaseInfoData_fieldInit, 0, 0);
}

META_GET_META_CALL(beBaseInfoData)

void beBaseInfoData_fieldInit()
{
    Meta::igMetaObject *meta = beBaseInfoData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beBaseInfoData_fieldTypes, 0x1);
    meta_setupFields(meta, beBaseInfoData_fieldNames, beBaseInfoData_fieldStorage, beBaseInfoData_fieldOffsets, base);
}

}
#pragma pop
