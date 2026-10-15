// beLoadIntf2ComMdlData: Alchemy class registration (0x803416AC..0x80341944). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLoadIntf2ComMdlData)
META_DECLARE(igObject)

extern "C" {
extern char beLoadIntf2ComMdlData_fieldNames[];
extern char beLoadIntf2ComMdlData_fieldOffsets[];
extern char beLoadIntf2ComMdlData_fieldStorage[];
extern char beLoadIntf2ComMdlData_fieldTypes[];
void *fn_800237D0();
void fn_803250AC();
}

struct beLoadIntf2ComMdlDataInstance : igObjectInstance {
    char unknown04[8];
    igStringMember _openSQ;
    igStringMember _infoName;
    char unknown14[12];
    inline ~beLoadIntf2ComMdlDataInstance() { __vtable = beLoadIntf2ComMdlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beLoadIntf2ComMdlData)

META_GET_META(beLoadIntf2ComMdlData)

void *beLoadIntf2ComMdlData_vtableRead()
{
    beLoadIntf2ComMdlDataInstance object;
    object.__vtable = beLoadIntf2ComMdlData_vtable;
    object._openSQ._value = 0;
    object._infoName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLoadIntf2ComMdlData)

void beLoadIntf2ComMdlData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beLoadIntf2ComMdlData_meta, igObject_register,
                       fn_800237D0, beLoadIntf2ComMdlData_getMetaCall,
                       beLoadIntf2ComMdlData_className, 0x14,
                       beLoadIntf2ComMdlData_vtableRead, beLoadIntf2ComMdlData_fieldInit, 0, 0);
}

META_GET_META_CALL(beLoadIntf2ComMdlData)

void beLoadIntf2ComMdlData_fieldInit()
{
    Meta::igMetaObject *meta = beLoadIntf2ComMdlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLoadIntf2ComMdlData_fieldTypes, 0x3);
    meta_setupFields(meta, beLoadIntf2ComMdlData_fieldNames, beLoadIntf2ComMdlData_fieldStorage, beLoadIntf2ComMdlData_fieldOffsets, base);
}

}
#pragma pop
