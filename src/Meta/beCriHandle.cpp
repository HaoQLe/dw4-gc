// beCriHandle: Alchemy class registration (0x802DED04..0x802DF094). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCriHandle)
META_DECLARE(beCriAudio)
META_DECLARE(beCriVolume)
META_DECLARE(igNamedObject)

extern "C" {
extern char beCriHandle_dependencies[12];
extern char beCriHandle_fieldNames[];
extern char beCriHandle_fieldOffsets[];
extern char beCriHandle_fieldStorage[];
extern char beCriHandle_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beCriHandleInstance : igNamedObjectInstance {
    igObjectRefMember _audio;
    igObjectRefMember _volume;
    char unknown14[20];
    inline ~beCriHandleInstance() { __vtable = beCriHandle_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beCriHandle)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beCriHandle)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beCriHandle)
#pragma pop

void *beCriHandle_vtableRead()
{
    beCriHandleInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beCriHandle_vtable;
    object._audio._value = 0;
    object._volume._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCriHandle)

void beCriHandle_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriHandle_meta, igNamedObject_register,
                       fn_80023CF4, beCriHandle_getMetaCall,
                       beCriHandle_className, 0x28,
                       beCriHandle_vtableRead, beCriHandle_fieldInit, 0, beCriHandle_dependencies);
}

META_GET_META_CALL(beCriHandle)

void beCriHandle_fieldInit()
{
    Meta::igMetaObject *meta = beCriHandle_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCriHandle_fieldTypes, 5);
    Meta::igObjectRefMetaField *audioField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    audioField->_metaObject = beCriAudio_metaObject();
    audioField->_construct = true;
    Meta::igObjectRefMetaField *volumeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    volumeField->_metaObject = beCriVolume_metaObject();
    volumeField->_construct = true;
    meta_setupFields(meta, beCriHandle_fieldNames, beCriHandle_fieldStorage, beCriHandle_fieldOffsets, base);
}

}
#pragma pop
