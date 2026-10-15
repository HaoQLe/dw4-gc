// igAnimationHierarchy: Alchemy class registration (0x801CA4B4..0x801CA634). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(igAnimationHierarchy)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void *fn_8011EDB4();
void fn_801AA6DC();
extern char igAnimationHierarchy_fieldNames[4];
extern char igAnimationHierarchy_fieldOffsets[4];
extern char igAnimationHierarchy_fieldStorage[4];
extern char igAnimationHierarchy_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationHierarchy)

META_ARK_REGISTER(igAnimationHierarchy)

void igAnimationHierarchy_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igAnimationHierarchy_meta, igNamedObject_register,
                       fn_80023CF4, igAnimationHierarchy_getMetaCall,
                       igAnimationHierarchy_className, 0x10,
                       0, igAnimationHierarchy_fieldInit, 0, 0);
}

META_GET_META_CALL(igAnimationHierarchy)

void igAnimationHierarchy_fieldInit()
{
    Meta::igMetaObject *meta = igAnimationHierarchy_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAnimationHierarchy_fieldTypes, 1);
    Meta::igMemoryRefMetaField *boneTranslationArrayField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8011EDB4();
    boneTranslationArrayField->_memType = reinterpret_cast<Meta::igMetaField *>(value_value3);
    boneTranslationArrayField->_destruct = true;
    boneTranslationArrayField->_releaseOnCopy = true;
    boneTranslationArrayField->_releaseOnReset = true;
    meta_setupFields(meta, igAnimationHierarchy_fieldNames, igAnimationHierarchy_fieldStorage, igAnimationHierarchy_fieldOffsets, base);
}

}
#pragma pop
