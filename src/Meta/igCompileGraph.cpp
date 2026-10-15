// igCompileGraph: Alchemy class registration (0x8014EB5C..0x8014EE0C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igCompileGraph)
META_DECLARE(igOptBase)

extern "C" {
void fn_80046E58(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8014EB10();
extern char igCompileGraph_fieldNames[8];
extern char igCompileGraph_fieldOffsets[8];
extern char igCompileGraph_fieldStorage[8];
extern char igCompileGraph_fieldTypes[8];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055FC80[4];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct igCompileGraphInstance : Instance_804A4A04 {
    char unknown28[4];
    igStringMember _nodeName;
    char unknown30[8];
    inline ~igCompileGraphInstance() { __vtable = igCompileGraph_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCompileGraph)

void *igCompileGraph_vtableRead()
{
    igCompileGraphInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igCompileGraph_vtable;
    object._nodeName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCompileGraph)

void igCompileGraph_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCompileGraph_meta, igOptBase_register,
                       fn_801308D0, igCompileGraph_getMetaCall,
                       igCompileGraph_className, 0x30,
                       igCompileGraph_vtableRead, igCompileGraph_fieldInit, 0, 0);
}

META_GET_META_CALL(igCompileGraph)

void igCompileGraph_fieldInit()
{
    Meta::igMetaObject *meta = igCompileGraph_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCompileGraph_fieldTypes, 2);
    Meta::igEnumMetaField *priorStateUsageField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(priorStateUsageField, lbl_8055FC80);
    priorStateUsageField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_8014EB10);
    meta_setupFields(meta, igCompileGraph_fieldNames, igCompileGraph_fieldStorage, igCompileGraph_fieldOffsets, base);
}

}
#pragma pop
