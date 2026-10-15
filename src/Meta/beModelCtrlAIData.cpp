// beModelCtrlAIData: Alchemy class registration (0x802CA918..0x802CAB3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlAIData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlAIData_fieldNames[];
extern char beModelCtrlAIData_fieldOffsets[];
extern char beModelCtrlAIData_fieldStorage[];
extern char beModelCtrlAIData_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlAIDataInstance : igNamedObjectInstance {
    char unknown0C[20];
    inline ~beModelCtrlAIDataInstance() { __vtable = beModelCtrlAIData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlAIData)

void *beModelCtrlAIData_vtableRead()
{
    beModelCtrlAIDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlAIData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlAIData)

void beModelCtrlAIData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlAIData_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlAIData_getMetaCall,
                       beModelCtrlAIData_className, 0x18,
                       beModelCtrlAIData_vtableRead, beModelCtrlAIData_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlAIData)

void beModelCtrlAIData_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlAIData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlAIData_fieldTypes, 0x3);
    meta_setupFields(meta, beModelCtrlAIData_fieldNames, beModelCtrlAIData_fieldStorage, beModelCtrlAIData_fieldOffsets, base);
}

}
#pragma pop
