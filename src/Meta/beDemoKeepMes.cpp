// beDemoKeepMes: Alchemy class registration (0x802DBAD4..0x802DBDEC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDemoKeepMes)
META_DECLARE(igObject)

extern "C" {
extern char beDemoKeepMes_fieldNames[];
extern char beDemoKeepMes_fieldOffsets[];
extern char beDemoKeepMes_fieldStorage[];
extern char beDemoKeepMes_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beDemoKeepMesInstance : igObjectInstance {
    char unknown04[20];
    igStringMember _groupName;
    igStringMember _infoName;
    char unknown20[4];
    igStringMember _message;
    igStringMember _mesParam;
    char unknown2C[12];
    inline ~beDemoKeepMesInstance() { __vtable = beDemoKeepMes_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beDemoKeepMes)

META_GET_META(beDemoKeepMes)

#pragma push
#pragma optimize_for_size off
void *beDemoKeepMes_vtableRead()
{
    beDemoKeepMesInstance object;
    object.__vtable = beDemoKeepMes_vtable;
    object._groupName._value = 0;
    object._infoName._value = 0;
    object._message._value = 0;
    object._mesParam._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beDemoKeepMes)

void beDemoKeepMes_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDemoKeepMes_meta, igObject_register,
                       fn_800237D0, beDemoKeepMes_getMetaCall,
                       beDemoKeepMes_className, 0x30,
                       beDemoKeepMes_vtableRead, beDemoKeepMes_fieldInit, 0, 0);
}

META_GET_META_CALL(beDemoKeepMes)

void beDemoKeepMes_fieldInit()
{
    Meta::igMetaObject *meta = beDemoKeepMes_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDemoKeepMes_fieldTypes, 0x7);
    meta_setupFields(meta, beDemoKeepMes_fieldNames, beDemoKeepMes_fieldStorage, beDemoKeepMes_fieldOffsets, base);
}

}
#pragma pop
