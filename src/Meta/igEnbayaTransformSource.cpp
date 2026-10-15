// igEnbayaTransformSource: Alchemy class registration (0x801C1544..0x801C179C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igEnbayaTransformSource)
META_DECLARE(igTransformSource)

extern "C" {
void fn_80053650(void *,int);
void fn_801AA6DC();
void *fn_801ABB34();
void *fn_801C1E2C();
extern char igEnbayaTransformSource_dependencies[8];
extern char igEnbayaTransformSource_fieldNames[8];
extern char igEnbayaTransformSource_fieldOffsets[8];
extern char igEnbayaTransformSource_fieldStorage[8];
extern char igEnbayaTransformSource_fieldTypes[8];
extern char lbl_804BA150[];
}

struct igEnbayaTransformSourceInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _enbayaAnimationSource;
    inline ~igEnbayaTransformSourceInstance() { __vtable = igEnbayaTransformSource_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igEnbayaTransformSource)

META_GET_META(igEnbayaTransformSource)

void *igEnbayaTransformSource_vtableRead()
{
    igEnbayaTransformSourceInstance object;
    object.__vtable = lbl_804BA150;
    object.__vtable = igEnbayaTransformSource_vtable;
    object._enbayaAnimationSource._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEnbayaTransformSource)

void igEnbayaTransformSource_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igEnbayaTransformSource_meta, igTransformSource_register,
                       fn_801ABB34, igEnbayaTransformSource_getMetaCall,
                       igEnbayaTransformSource_className, 0x10,
                       igEnbayaTransformSource_vtableRead, igEnbayaTransformSource_fieldInit, 0, igEnbayaTransformSource_dependencies);
}

META_GET_META_CALL(igEnbayaTransformSource)

void igEnbayaTransformSource_fieldInit()
{
    Meta::igMetaObject *meta = igEnbayaTransformSource_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igEnbayaTransformSource_fieldTypes, 2);
    Meta::igIntMetaField *trackIdField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(trackIdField, -1);
    Meta::igObjectRefMetaField *enbayaAnimationSourceField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_801C1E2C();
    enbayaAnimationSourceField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    meta_setupFields(meta, igEnbayaTransformSource_fieldNames, igEnbayaTransformSource_fieldStorage, igEnbayaTransformSource_fieldOffsets, base);
}

}
#pragma pop
