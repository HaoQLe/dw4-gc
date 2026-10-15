// igAttr: Alchemy class registration (0x800BB7F4..0x800BB970). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igShortMetaField.h>

META_DECLARE(igAttr)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800711A8(void *,int);
void fn_800ABC8C();
void fn_800BB970();
extern char igAttr_fieldNames[8];
extern char igAttr_fieldOffsets[8];
extern char igAttr_fieldStorage[8];
extern char igAttr_fieldTypes[8];
extern char lbl_8055E6F0[7];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttr)

META_ARK_REGISTER(igAttr)

void igAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igAttr_meta, igObject_register,
                       fn_800237D0, igAttr_getMetaCall,
                       lbl_8055E6F0, 0xC,
                       0, igAttr_fieldInit, fn_800BB970, 0);
}

META_GET_META_CALL(igAttr)

void igAttr_fieldInit()
{
    Meta::igMetaObject *meta = igAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAttr_fieldTypes, 2);
    Meta::igShortMetaField *cachedUnitIDField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 1));
    fn_800711A8(cachedUnitIDField, -1);
    cachedUnitIDField->_persistent = false;
    meta_setupFields(meta, igAttr_fieldNames, igAttr_fieldStorage, igAttr_fieldOffsets, base);
}

}
#pragma pop
