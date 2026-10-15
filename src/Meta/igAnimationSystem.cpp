// igAnimationSystem: Alchemy class registration (0x801C934C..0x801C94C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igAnimationSystem)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_801AA6DC();
void *fn_801CA478();
extern char igAnimationSystem_dependencies[8];
extern char igAnimationSystem_fieldNames[4];
extern char igAnimationSystem_fieldOffsets[4];
extern char igAnimationSystem_fieldStorage[4];
extern char igAnimationSystem_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationSystem)

META_ARK_REGISTER(igAnimationSystem)

void igAnimationSystem_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igAnimationSystem_meta, igNamedObject_register,
                       fn_80023CF4, igAnimationSystem_getMetaCall,
                       igAnimationSystem_className, 0x10,
                       0, igAnimationSystem_fieldInit, 0, igAnimationSystem_dependencies);
}

META_GET_META_CALL(igAnimationSystem)

void igAnimationSystem_fieldInit()
{
    Meta::igMetaObject *meta = igAnimationSystem_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAnimationSystem_fieldTypes, 1);
    Meta::igObjectRefMetaField *animHierarchyField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801CA478();
    animHierarchyField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igAnimationSystem_fieldNames, igAnimationSystem_fieldStorage, igAnimationSystem_fieldOffsets, base);
}

}
#pragma pop
