// beSaveIntfComMdlData: Alchemy class registration (0x80335388..0x803355E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSaveIntfComMdlData)
META_DECLARE(igObject)

extern "C" {
extern char beSaveIntfComMdlData_fieldNames[];
extern char beSaveIntfComMdlData_fieldOffsets[];
extern char beSaveIntfComMdlData_fieldStorage[];
extern char beSaveIntfComMdlData_fieldTypes[];
void *fn_800237D0();
void fn_803250AC();
}

struct beSaveIntfComMdlDataInstance : igObjectInstance {
    char unknown04[8];
    igStringMember _openSQ;
    igStringMember _infoName;
    char unknown14[12];
    inline ~beSaveIntfComMdlDataInstance() { __vtable = beSaveIntfComMdlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSaveIntfComMdlData)

void *beSaveIntfComMdlData_vtableRead()
{
    beSaveIntfComMdlDataInstance object;
    object.__vtable = beSaveIntfComMdlData_vtable;
    object._openSQ._value = 0;
    object._infoName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSaveIntfComMdlData)

void beSaveIntfComMdlData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beSaveIntfComMdlData_meta, igObject_register,
                       fn_800237D0, beSaveIntfComMdlData_getMetaCall,
                       beSaveIntfComMdlData_className, 0x14,
                       beSaveIntfComMdlData_vtableRead, beSaveIntfComMdlData_fieldInit, 0, 0);
}

META_GET_META_CALL(beSaveIntfComMdlData)

void beSaveIntfComMdlData_fieldInit()
{
    Meta::igMetaObject *meta = beSaveIntfComMdlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSaveIntfComMdlData_fieldTypes, 0x3);
    meta_setupFields(meta, beSaveIntfComMdlData_fieldNames, beSaveIntfComMdlData_fieldStorage, beSaveIntfComMdlData_fieldOffsets, base);
}

}
#pragma pop
