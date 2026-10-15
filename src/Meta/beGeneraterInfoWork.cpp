// beGeneraterInfoWork: Alchemy class registration (0x802D6970..0x802D6C8C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beGeneraterInfoWork)
META_DECLARE(beBaseInfoRamList)
META_DECLARE(igObject)

extern "C" {
extern char beGeneraterInfoWork_dependencies[8];
extern char beGeneraterInfoWork_fieldNames[];
extern char beGeneraterInfoWork_fieldOffsets[];
extern char beGeneraterInfoWork_fieldStorage[];
extern char beGeneraterInfoWork_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beGeneraterInfoWorkInstance : igObjectInstance {
    char unknown04[16];
    igObjectRefMember _enemyRamList;
    char unknown18[4];
    igStringMember _geneEnemyName;
    char unknown20[16];
    inline ~beGeneraterInfoWorkInstance() { __vtable = beGeneraterInfoWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beGeneraterInfoWork)

META_METAOBJECT(beGeneraterInfoWork)

META_GET_META(beGeneraterInfoWork)

void *beGeneraterInfoWork_vtableRead()
{
    beGeneraterInfoWorkInstance object;
    object.__vtable = beGeneraterInfoWork_vtable;
    object._enemyRamList._value = 0;
    object._geneEnemyName._value = 0;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beGeneraterInfoWork)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beGeneraterInfoWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterInfoWork_meta, igObject_register,
                       fn_800237D0, beGeneraterInfoWork_getMetaCall,
                       beGeneraterInfoWork_className, 0x28,
                       beGeneraterInfoWork_vtableRead, beGeneraterInfoWork_fieldInit, 0, beGeneraterInfoWork_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beGeneraterInfoWork)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beGeneraterInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beGeneraterInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beGeneraterInfoWork_fieldTypes, 9);
    Meta::igObjectRefMetaField *enemyRamListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    enemyRamListField->_metaObject = beBaseInfoRamList_metaObject();
    enemyRamListField->_construct = true;
    meta_setupFields(meta, beGeneraterInfoWork_fieldNames, beGeneraterInfoWork_fieldStorage, beGeneraterInfoWork_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
