// igOptVisitObject: Alchemy class registration (0x8013A814..0x8013A988). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igOptVisitObject)
META_DECLARE(igOptBase)

extern "C" {
void *fn_80029F84();
void fn_8012FC48();
void *fn_801308D0();
extern char igOptVisitObject_dependencies[8];
extern char igOptVisitObject_fieldNames[4];
extern char igOptVisitObject_fieldOffsets[4];
extern char igOptVisitObject_fieldStorage[4];
extern char igOptVisitObject_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOptVisitObject)

META_ARK_REGISTER(igOptVisitObject)

void igOptVisitObject_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igOptVisitObject_meta, igOptBase_register,
                       fn_801308D0, igOptVisitObject_getMetaCall,
                       igOptVisitObject_className, 0x2C,
                       0, igOptVisitObject_fieldInit, 0, igOptVisitObject_dependencies);
}

META_GET_META_CALL(igOptVisitObject)

void igOptVisitObject_fieldInit()
{
    Meta::igMetaObject *meta = igOptVisitObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igOptVisitObject_fieldTypes, 1);
    Meta::igObjectRefMetaField *visitedMetaObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029F84();
    visitedMetaObjectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igOptVisitObject_fieldNames, igOptVisitObject_fieldStorage, igOptVisitObject_fieldOffsets, base);
}

}
#pragma pop
