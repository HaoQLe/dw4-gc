// igCollisionGridHelper: Alchemy class registration (0x8028D4F0..0x8028D75C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igCollisionGridHelper)
META_DECLARE(igCollisionGroup)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_80029F84();
void fn_8006A540(void *, void *);
void fn_8028C93C();
void *fn_8028D794();
extern char igCollisionGridHelper_dependencies[12];
extern char igCollisionGridHelper_fieldNames[8];
extern char igCollisionGridHelper_fieldOffsets[8];
extern char igCollisionGridHelper_fieldStorage[8];
extern char igCollisionGridHelper_fieldTypes[8];
}

struct igCollisionGridHelperInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _grid;
    igObjectRefMember _staticGroupType;
    inline ~igCollisionGridHelperInstance() { __vtable = igCollisionGridHelper_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollisionGridHelper)

void *igCollisionGridHelper_vtableRead()
{
    igCollisionGridHelperInstance object;
    object.__vtable = igCollisionGridHelper_vtable;
    object._grid._value = 0;
    object._staticGroupType._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollisionGridHelper)

void igCollisionGridHelper_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igCollisionGridHelper_meta, igObject_register,
                       fn_800237D0, igCollisionGridHelper_getMetaCall,
                       igCollisionGridHelper_className, 0x10,
                       igCollisionGridHelper_vtableRead, igCollisionGridHelper_fieldInit, 0, igCollisionGridHelper_dependencies);
}

META_GET_META_CALL(igCollisionGridHelper)

void igCollisionGridHelper_fieldInit()
{
    Meta::igMetaObject *meta = igCollisionGridHelper_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollisionGridHelper_fieldTypes, 2);
    Meta::igObjectRefMetaField *gridField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8028D794();
    gridField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *staticGroupTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_80029F84();
    staticGroupTypeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    fn_8006A540(staticGroupTypeField, igCollisionGroup_getMeta());
    meta_setupFields(meta, igCollisionGridHelper_fieldNames, igCollisionGridHelper_fieldStorage, igCollisionGridHelper_fieldOffsets, base);
}

}
#pragma pop
