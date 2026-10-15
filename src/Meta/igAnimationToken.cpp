// igAnimationToken: Alchemy class registration (0x801CA1EC..0x801CA478). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igAnimationToken)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_80071694(void *,void *);
void fn_801AA6DC();
void *fn_801AB2B4();
extern char igAnimationToken_dependencies[8];
extern char igAnimationToken_fieldNames[8];
extern char igAnimationToken_fieldOffsets[8];
extern char igAnimationToken_fieldStorage[8];
extern char igAnimationToken_fieldTypes[8];
}

struct igAnimationTokenInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _transformName;
    igObjectRefMember _source;
    inline ~igAnimationTokenInstance() { __vtable = igAnimationToken_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAnimationToken)

META_GET_META(igAnimationToken)

void *igAnimationToken_vtableRead()
{
    igAnimationTokenInstance object;
    object.__vtable = igAnimationToken_vtable;
    object._transformName._value = 0;
    object._source._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationToken)

void igAnimationToken_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationToken_meta, igObject_register,
                       fn_800237D0, igAnimationToken_getMetaCall,
                       igAnimationToken_className, 0x10,
                       igAnimationToken_vtableRead, igAnimationToken_fieldInit, 0, igAnimationToken_dependencies);
}

META_GET_META_CALL(igAnimationToken)

void igAnimationToken_fieldInit()
{
    Meta::igMetaObject *meta = igAnimationToken_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAnimationToken_fieldTypes, 2);
    Meta::igStringMetaField *transformNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(transformNameField, (void *)0);
    Meta::igObjectRefMetaField *sourceField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_801AB2B4();
    sourceField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    meta_setupFields(meta, igAnimationToken_fieldNames, igAnimationToken_fieldStorage, igAnimationToken_fieldOffsets, base);
}

}
#pragma pop
