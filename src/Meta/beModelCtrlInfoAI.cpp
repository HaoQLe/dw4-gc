// beModelCtrlInfoAI: Alchemy class registration (0x802C7D94..0x802C803C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlInfoAI)
META_DECLARE(igObject)

extern "C" {
extern char beModelCtrlInfoAI_fieldNames[];
extern char beModelCtrlInfoAI_fieldOffsets[];
extern char beModelCtrlInfoAI_fieldStorage[];
extern char beModelCtrlInfoAI_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beModelCtrlInfoAIInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _seqName;
    char unknown0C[36];
    inline ~beModelCtrlInfoAIInstance() { __vtable = beModelCtrlInfoAI_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beModelCtrlInfoAI)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beModelCtrlInfoAI)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beModelCtrlInfoAI)
#pragma pop

void *beModelCtrlInfoAI_vtableRead()
{
    beModelCtrlInfoAIInstance object;
    object.__vtable = beModelCtrlInfoAI_vtable;
    object._seqName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlInfoAI)

void beModelCtrlInfoAI_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoAI_meta, igObject_register,
                       fn_800237D0, beModelCtrlInfoAI_getMetaCall,
                       beModelCtrlInfoAI_className, 0x24,
                       beModelCtrlInfoAI_vtableRead, beModelCtrlInfoAI_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlInfoAI)

void beModelCtrlInfoAI_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoAI_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoAI_fieldTypes, 0x5);
    meta_setupFields(meta, beModelCtrlInfoAI_fieldNames, beModelCtrlInfoAI_fieldStorage, beModelCtrlInfoAI_fieldOffsets, base);
}

}
#pragma pop
