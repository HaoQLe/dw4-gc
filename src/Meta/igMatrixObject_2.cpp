// igMatrixObject: Alchemy class registration (0x8021815C..0x80218300). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMatrixObject)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801285A0(void *);
void fn_80216620();
extern char igMatrixObject_fieldNames[4];
extern char igMatrixObject_fieldOffsets[4];
extern char igMatrixObject_fieldStorage[4];
extern char igMatrixObject_fieldTypes[4];
}

struct Instance_LigMatrixObject_0 : igObjectInstance {
    char unknown04[4];
    char unknown08[64];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixObject)

void *igMatrixObject_vtableRead()
{
    Instance_LigMatrixObject_0 object;
    object.__vtable = igMatrixObject_vtable;
    fn_801285A0(&object.unknown08);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixObject)

void igMatrixObject_register()
{
    fn_80216620();
    meta_registerClass(0, &igMatrixObject_meta, igObject_register,
                       fn_800237D0, igMatrixObject_getMetaCall,
                       igMatrixObject_className, 0x48,
                       igMatrixObject_vtableRead, igMatrixObject_fieldInit, 0, 0);
}

META_GET_META_CALL(igMatrixObject)

void igMatrixObject_fieldInit()
{
    Meta::igMetaObject *meta = igMatrixObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMatrixObject_fieldTypes, 1);
    meta_setupFields(meta, igMatrixObject_fieldNames, igMatrixObject_fieldStorage, igMatrixObject_fieldOffsets, base);
}

}
#pragma pop
