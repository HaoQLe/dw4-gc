// beDemoManagerWork: Alchemy class registration (0x802DB62C..0x802DB904). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDemoManagerWork)
META_DECLARE(beDemoKeepMesList)
META_DECLARE(igObject)

extern "C" {
extern char beDemoManagerWork_dependencies[8];
extern char beDemoManagerWork_fieldNames[];
extern char beDemoManagerWork_fieldOffsets[];
extern char beDemoManagerWork_fieldStorage[];
extern char beDemoManagerWork_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beDemoManagerWorkInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _keepMesList;
    inline ~beDemoManagerWorkInstance() { __vtable = beDemoManagerWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beDemoManagerWork)

META_METAOBJECT(beDemoManagerWork)

META_GET_META(beDemoManagerWork)

void *beDemoManagerWork_vtableRead()
{
    beDemoManagerWorkInstance object;
    object.__vtable = beDemoManagerWork_vtable;
    object._keepMesList._value = 0;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beDemoManagerWork)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beDemoManagerWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDemoManagerWork_meta, igObject_register,
                       fn_800237D0, beDemoManagerWork_getMetaCall,
                       beDemoManagerWork_className, 0x10,
                       beDemoManagerWork_vtableRead, beDemoManagerWork_fieldInit, 0, beDemoManagerWork_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beDemoManagerWork)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beDemoManagerWork_fieldInit()
{
    Meta::igMetaObject *meta = beDemoManagerWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDemoManagerWork_fieldTypes, 2);
    Meta::igObjectRefMetaField *keepMesListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    keepMesListField->_metaObject = beDemoKeepMesList_metaObject();
    keepMesListField->_construct = true;
    meta_setupFields(meta, beDemoManagerWork_fieldNames, beDemoManagerWork_fieldStorage, beDemoManagerWork_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
