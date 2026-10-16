// igTransformRecorder: Alchemy class registration (0x801ABCF4..0x801ABFD8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformRecorder)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void *fn_8011148C();
void fn_801285A0(void *);
void fn_801AA6DC();
extern char igTransformRecorder_fieldNames[8];
extern char igTransformRecorder_fieldOffsets[8];
extern char igTransformRecorder_fieldStorage[8];
extern char igTransformRecorder_fieldTypes[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline igNamedObjectInstance()
    {
        __vtable = igNamedObject_vtable;
        _name._value = 0;
    }
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline igNodeInstance()
    {
        __vtable = igNode_vtable;
        _bound._value = 0;
        _parentList._value = 0;
    }
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igGroupInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _childList;
    inline igGroupInstance()
    {
        __vtable = igGroup_vtable;
        _childList._value = 0;
    }
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

struct igTransformRecorderInstance : igGroupInstance {
    char unknown20[64];
    char unknown60[64];
    inline igTransformRecorderInstance()
    {
        __vtable = igTransformRecorder_vtable;
        fn_801285A0(&unknown20);
        fn_801285A0(&unknown60);
    }
    inline ~igTransformRecorderInstance() { __vtable = igTransformRecorder_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransformRecorder)

void *igTransformRecorder_vtableRead()
{
    igTransformRecorderInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTransformRecorder)

void igTransformRecorder_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTransformRecorder_meta, igGroup_register,
                       fn_8011148C, igTransformRecorder_getMetaCall,
                       igTransformRecorder_className, 0xA0,
                       igTransformRecorder_vtableRead, igTransformRecorder_fieldInit, 0, 0);
}

META_GET_META_CALL(igTransformRecorder)

void igTransformRecorder_fieldInit()
{
    Meta::igMetaObject *meta = igTransformRecorder_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTransformRecorder_fieldTypes, 2);
    meta_setupFields(meta, igTransformRecorder_fieldNames, igTransformRecorder_fieldStorage, igTransformRecorder_fieldOffsets, base);
}

}
#pragma pop
