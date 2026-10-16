// Written by tools/alchemymeta/poolsrc.py: units whose code addresses the data below from its start.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <unknownGen.h>
#include <meta/igIntMetaField.h>
#include <meta/igMemoryRefMetaField.h>
#include <meta/igUnsignedIntArrayMetaField.h>
#include <meta/igStringMetaField.h>

// The unit's data.
extern "C" {
void fn_80022A90();
void fn_800251EC();
void fn_8002879C();
void fn_8002E1AC();
void fn_80031378();
void fn_800385E0();
void igDataPumpInterface_arkRegister();
void igFloatMetaField_create();
void igLongMetaField_create();
void igMetaField_arkRegister();
void igObjectRefMetaField_arkRegister();
void igObjectStringMap_arkRegister();
void igObject_arkRegister();
extern char lbl_80560BA8[8];
extern char lbl_80560BB0[7];
extern char lbl_80560BB8[7];
extern char lbl_80560C0C[7];
extern char lbl_80560C90[5];
extern char lbl_805659F0[4];
extern char lbl_805659F4[4];
extern char lbl_805659F8[4];
extern char lbl_805659FC[4];
extern char lbl_80565A00[4];
extern char lbl_80565A0C[4];
extern char lbl_80565A10[4];
extern char lbl_80565A14[4];
extern char lbl_80565A40[4];
extern char lbl_80565A44[4];
extern char lbl_80565A48[4];
extern char lbl_80565A7C[4];
extern char lbl_80565A80[4];
extern char lbl_80565A84[4];
extern char lbl_80565A9C[4];
extern char lbl_80565AA0[4];
extern char lbl_80565AA4[4];
extern char lbl_80565AD0[4];
extern char lbl_80565AD4[4];
extern char lbl_80565AD8[4];
extern char lbl_80565ADC[4];
extern char lbl_80565AE0[4];
extern char lbl_80565B0C[4];
extern char lbl_80565B10[4];
extern char lbl_80565B14[4];
extern char lbl_80565B18[4];
extern char lbl_80565B1C[4];
char lbl_804BA240[] = "igNonRefCountedVec4fObjectList";
char lbl_804BA260[] = "igVec4fObjectList";
char lbl_804BA274[] = "igVec4fObject";
char lbl_804BA284[] = "igNonRefCountedVec3fObjectList";
char lbl_804BA2A4[] = "igVec3fObjectList";
char lbl_804BA2B8[] = "igVec3fObject";
char igLongStack_className[] = "igLongStack";
char lbl_804BA2D4[] = "igUnsignedLongStack";
char lbl_804BA2E8[] = "igDoubleStack";
char lbl_804BA2F8[] = "igUnsignedCharStack";
char lbl_804BA30C[] = "igIntStack";
char igHistogramBase_className[] = "igHistogramBase";
char igRandomNumber_className[] = "igRandomNumber";
char lbl_804BA338[] = "igObjectStack";
char igObjectRegistryMap_className[] = "igObjectRegistryMap";
void *igObjectRegistryMap_fieldTypes[5] = {(void *)fn_8002879C, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0, (void *)fn_800385E0};
char lbl_804BA370[] = "_loadedSymbols";
char lbl_804BA380[] = "_resolveSymbols";
char lbl_804BA390[] = "_forceReload";
char lbl_804BA3A0[] = "_processObjectRefFields";
char lbl_804BA3B8[] = "_setDefaultValue";
void *igObjectRegistryMap_fieldNames[5] = {(void *)lbl_804BA370, (void *)lbl_804BA380, (void *)lbl_804BA390, (void *)lbl_804BA3A0, (void *)lbl_804BA3B8};
void *igObjectRegistryMap_fieldStorage[5] = {(void *)lbl_805659F0, (void *)lbl_805659F4, (void *)lbl_805659F8, (void *)lbl_805659FC, (void *)lbl_80565A00};
void *igObjectRegistryMap_fieldOffsets[5] = {(void *)0x8, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF};
char igUnresolvedSymbolList_className[] = "igUnresolvedSymbolList";
void *igUnresolvedSymbol_dependencies[3] = {(void *)igObject_arkRegister, (void *)igObjectRefMetaField_arkRegister, 0};
char igUnresolvedSymbol_className[] = "igUnresolvedSymbol";
void *igUnresolvedSymbol_fieldTypes[3] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002E1AC};
void *igUnresolvedSymbol_fieldNames[3] = {(void *)lbl_80560BA8, (void *)lbl_80560BB0, (void *)lbl_80560BB8};
void *igUnresolvedSymbol_fieldStorage[3] = {(void *)lbl_80565A0C, (void *)lbl_80565A10, (void *)lbl_80565A14};
void *igUnresolvedSymbol_fieldOffsets[3] = {(void *)0x14, (void *)0xC, (void *)0x10};
void *igObjectRefResolver_dependencies[3] = {(void *)igObjectStringMap_arkRegister, (void *)igObject_arkRegister, 0};
char igObjectRefResolver_className[] = "igObjectRefResolver";
char lbl_804BA490[] = "_resolvedObject";
char lbl_804BA4A0[] = "igNonUniformIntHistogram";
char igNonRefCountedObjectStack_className[] = "igNonRefCountedObjectStack";
char lbl_804BA4D8[] = "constants";
char igMersenneTwisterRandomNumber_className[] = "igMersenneTwisterRandomNumber";
char igMeanAndStandardDeviation_className[] = "igMeanAndStandardDeviation";
void *igMeanAndStandardDeviation_fieldTypes[3] = {(void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)fn_80022A90};
char lbl_804BA52C[] = "_sigmaSq";
char lbl_804BA538[] = "_sampleCount";
void *igMeanAndStandardDeviation_fieldNames[3] = {(void *)lbl_80560C0C, (void *)lbl_804BA52C, (void *)lbl_804BA538};
void *igMeanAndStandardDeviation_fieldStorage[3] = {(void *)lbl_80565A40, (void *)lbl_80565A44, (void *)lbl_80565A48};
void *igMeanAndStandardDeviation_fieldOffsets[3] = {(void *)0x8, (void *)0xC, (void *)0x10};
char igMatrixStack_className[] = "igMatrixStack";
char lbl_804BA57C[] = "igNonRefCountedMatrixObjectListStack";
char igNonRefCountedMatrixObjectList_className[] = "igNonRefCountedMatrixObjectList";
char igMatrixObjectList_className[] = "igMatrixObjectList";
char igMatrixObject_className[] = "igMatrixObject";
char lbl_804BA5E8[] = "igNonRefCountedIntObjectList";
char lbl_804BA608[] = "igIntObjectList";
char igIntObject_className[] = "igIntObject";
char igIntHistogram_className[] = "igIntHistogram";
void *igIntHistogram_fieldTypes[3] = {(void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_8002E1AC};
char lbl_804BA640[] = "_minValueIgb";
char lbl_804BA650[] = "_maxValueIgb";
char lbl_804BA660[] = "_binWidthIgb";
void *igIntHistogram_fieldNames[3] = {(void *)lbl_804BA640, (void *)lbl_804BA650, (void *)lbl_804BA660};
void *igIntHistogram_fieldStorage[3] = {(void *)lbl_80565A7C, (void *)lbl_80565A80, (void *)lbl_80565A84};
void *igIntHistogram_fieldOffsets[3] = {(void *)0x18, (void *)0x1C, (void *)0x20};
char lbl_804BA694[] = "igNonRefCountedFloatObjectList";
char lbl_804BA6B4[] = "igFloatObjectList";
char igFloatObject_className[] = "igFloatObject";
char igFloatHistogram_className[] = "igFloatHistogram";
void *igFloatHistogram_fieldTypes[3] = {(void *)igFloatMetaField_create, (void *)igFloatMetaField_create, (void *)igFloatMetaField_create};
void *igFloatHistogram_fieldNames[3] = {(void *)lbl_804BA640, (void *)lbl_804BA650, (void *)lbl_804BA660};
void *igFloatHistogram_fieldStorage[3] = {(void *)lbl_80565A9C, (void *)lbl_80565AA0, (void *)lbl_80565AA4};
void *igFloatHistogram_fieldOffsets[3] = {(void *)0x18, (void *)0x1C, (void *)0x20};
char lbl_804BA71C[] = "igFieldRefResolver";
char lbl_804BA730[] = "igDataPumpVec4fSource";
char lbl_804BA748[] = "_v4fList";
char lbl_804BA754[] = "igDataPumpVec4fLinearInterface";
char lbl_804BA774[] = "igDataPumpVec4fBezierInterface";
char lbl_804BA794[] = "igDataPumpVec3fSource";
char lbl_804BA7AC[] = "_v3fList";
char lbl_804BA7B8[] = "igDataPumpVec3fLinearInterface";
char lbl_804BA7D8[] = "TIME_MODE_REPEAT";
char lbl_804BA7EC[] = "TIME_MODE_CLAMP";
char lbl_804BA7FC[] = "TIME_MODE_BOUNCE";
char lbl_804BA810[] = "TIME_MODE_LOOP";
void *lbl_804BA820[8] = {(void *)lbl_804BA7D8, (void *)lbl_804BA7EC, (void *)lbl_804BA7FC, (void *)lbl_804BA810, 0, (void *)0x1, (void *)0x2, (void *)0x3};
char lbl_804BA840[] = "TIME_MODE";
char lbl_804BA84C[] = "igDataPumpSource";
void *lbl_804BA860[5] = {(void *)fn_8002879C, (void *)igLongMetaField_create, (void *)fn_80031378, (void *)igLongMetaField_create, (void *)fn_8002E1AC};
char lbl_804BA874[] = "_timeList";
char lbl_804BA880[] = "_timeDuration";
char lbl_804BA890[] = "_timeMode";
char lbl_804BA89C[] = "_timeStart";
char lbl_804BA8A8[] = "_sourceCount";
void *lbl_804BA8B8[15] = {(void *)lbl_804BA874, (void *)lbl_804BA880, (void *)lbl_804BA890, (void *)lbl_804BA89C, (void *)lbl_804BA8A8, (void *)lbl_80565AD0, (void *)lbl_80565AD4, (void *)lbl_80565AD8, (void *)lbl_80565ADC, (void *)lbl_80565AE0, (void *)0x8, (void *)0x10, (void *)0x18, (void *)0x20, (void *)0x28};
char igDataPumpManager_className[] = "igDataPumpManager";
char lbl_804BA908[] = "_dataPumpList";
char igDataPumpList_className[] = "igDataPumpList";
char igDataPumpInterface_className[] = "igDataPumpInterface";
char igDataPumpInfo_className[] = "igDataPumpInfo";
char lbl_804BA94C[] = "igDataPumpFloatSource";
char lbl_804BA964[] = "_floatList";
char lbl_804BA970[] = "igDataPumpFloatLinearInterface";
void *igDataPump_dependencies[4] = {(void *)igObject_arkRegister, (void *)igMetaField_arkRegister, (void *)igDataPumpInterface_arkRegister, 0};
char igDataPump_className[] = "igDataPump";
void *igDataPump_fieldTypes[5] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_800251EC, (void *)fn_800251EC, (void *)fn_8002879C};
char lbl_804BA9C0[] = "_destObj";
char lbl_804BA9CC[] = "_destMeta";
char lbl_804BA9D8[] = "_destMetaClassName";
char lbl_804BA9EC[] = "_destMetaFieldName";
void *igDataPump_fieldNames[5] = {(void *)lbl_804BA9C0, (void *)lbl_804BA9CC, (void *)lbl_804BA9D8, (void *)lbl_804BA9EC, (void *)lbl_80560C90};
void *igDataPump_fieldStorage[5] = {(void *)lbl_80565B0C, (void *)lbl_80565B10, (void *)lbl_80565B14, (void *)lbl_80565B18, (void *)lbl_80565B1C};
void *igDataPump_fieldOffsets[5] = {(void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18};
}

namespace igObjectRegistryMap_fieldInit {
// igObjectRegistryMap: Alchemy class registration (0x80216DB8..0x80216E70). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igObjectRegistryMap)

extern "C" {
void *fn_800284F4();
void fn_8003EC68(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

void igObjectRegistryMap_fieldInit()
{
    Meta::igMetaObject *meta = igObjectRegistryMap_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igObjectRegistryMap_fieldTypes, 5);
    Meta::igObjectRefMetaField *loadedSymbolsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800284F4();
    loadedSymbolsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    loadedSymbolsField->_construct = true;
    Meta::igBoolMetaField *resolveSymbolsField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(resolveSymbolsField, 1);
    Meta::igBoolMetaField *processObjectRefFieldsField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 3));
    fn_8003EC68(processObjectRefFieldsField, 1);
    meta_setupFields(meta, igObjectRegistryMap_fieldNames, igObjectRegistryMap_fieldStorage, igObjectRegistryMap_fieldOffsets, base);
}

}
#pragma pop
}

namespace igUnresolvedSymbolList {
// igUnresolvedSymbolList: Alchemy class registration (0x80216E70..0x80217008). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igUnresolvedSymbolList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80216620();
extern char igUnresolvedSymbolList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804BC8E4[];
}

struct Instance_80216EE4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUnresolvedSymbolList)

META_GET_META(igUnresolvedSymbolList)

void *igUnresolvedSymbolList_vtableRead()
{
    Instance_80216EE4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804BC8E4;
    object.__vtable = igUnresolvedSymbolList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnresolvedSymbolList)

void igUnresolvedSymbolList_register()
{
    fn_80216620();
    meta_registerClass(0, &igUnresolvedSymbolList_meta, igObjectList_register,
                       fn_80024180, igUnresolvedSymbolList_getMetaCall,
                       igUnresolvedSymbolList_className, 0x14,
                       igUnresolvedSymbolList_vtableRead, 0, 0, igUnresolvedSymbolList_dependencies);
}

META_GET_META_CALL(igUnresolvedSymbolList)

}
#pragma pop
}

namespace unknown80217008 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igNamedObject_register();
void igObjectList_register();
void igUnresolvedSymbol_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igUnresolvedSymbol_vtable[];
extern char igUnresolvedSymbolList_vtable[];
extern char lbl_804BC8E4[];
extern char igUnresolvedSymbolList_dependencies[8];
extern void *igUnresolvedSymbolList_meta;
extern void *igUnresolvedSymbol_meta;
void *igUnresolvedSymbolList_getMeta();
void *igUnresolvedSymbolList_vtableRead();
void igUnresolvedSymbolList_arkRegister();
void igUnresolvedSymbolList_register();
void *igUnresolvedSymbolList_getMetaCall();
void *igUnresolvedSymbol_getMeta();
void *igUnresolvedSymbol_vtableRead();
void igUnresolvedSymbol_arkRegister();
void igUnresolvedSymbol_register();
void *igUnresolvedSymbol_getMetaCall();
}
struct UnknownGenObject80216EE4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8021707C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021707C(){igObject_construct(this);}
};
struct UnknownGenObject8021707C_0 : UnknownGenRoot8021707C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021707C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8021707C : UnknownGenObject8021707C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8021707C(){unknown00=igUnresolvedSymbol_vtable;}
};
extern "C" {
void *igUnresolvedSymbol_create(void *object){
 igUnresolvedSymbol_arkRegister();
 return meta_createInstance(igUnresolvedSymbol_meta,object);
}
void *igUnresolvedSymbol_getMeta(){
 if(!igUnresolvedSymbol_meta || !(reinterpret_cast<unsigned int *>(igUnresolvedSymbol_meta)[0x24/4]&4)) igUnresolvedSymbol_arkRegister();
 return igUnresolvedSymbol_meta;
}
void *igUnresolvedSymbol_vtableRead(){
 UnknownGenObject8021707C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igUnresolvedSymbol_vtable;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnresolvedSymbol_arkRegister(){
 meta_registerNow((int)igUnresolvedSymbol_register);
}
void igUnresolvedSymbol_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igUnresolvedSymbol_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igUnresolvedSymbol_getMetaCall,(int)igUnresolvedSymbol_className,24,(int)igUnresolvedSymbol_vtableRead,(int)igUnresolvedSymbol_fieldInit,0,(int)igUnresolvedSymbol_dependencies);
}
void *igUnresolvedSymbol_getMetaCall(){return igUnresolvedSymbol_getMeta();}
}
#pragma pop
}

namespace igUnresolvedSymbol_fieldInit {
// igUnresolvedSymbol: Alchemy class registration (0x80217254..0x802172F0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igUnresolvedSymbol)
META_DECLARE(igObject)

extern "C" {
void *fn_800288BC();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igUnresolvedSymbol_fieldInit()
{
    Meta::igMetaObject *meta = igUnresolvedSymbol_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igUnresolvedSymbol_fieldTypes, 3);
    Meta::igObjectRefMetaField *fieldField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    fieldField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    Meta::igIntMetaField *indexField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    void *value_v3 = fn_800288BC();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(indexField) + 0x38) = value_v3;
    meta_setupFields(meta, igUnresolvedSymbol_fieldNames, igUnresolvedSymbol_fieldStorage, igUnresolvedSymbol_fieldOffsets, base);
}

}
#pragma pop
}

namespace igObjectRefResolver {
// igObjectRefResolver: Alchemy class registration (0x802172F0..0x802175A8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igObjectRefResolver)
META_DECLARE(igNamedObject)
META_DECLARE(igObject)

extern "C" {
void *fn_80023CF4();
void *fn_800284F4();
void fn_80216620();
extern char igObjectRefResolver_fieldNames[8];
extern char igObjectRefResolver_fieldOffsets[8];
extern char igObjectRefResolver_fieldStorage[8];
extern char igObjectRefResolver_fieldTypes[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igObjectRefResolverInstance : igNamedObjectInstance {
    igObjectRefMember _loadedSymbols;
    igObjectRefMember _resolvedObject;
    char unknown14[4];
    inline ~igObjectRefResolverInstance() { __vtable = igObjectRefResolver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectRefResolver)

void *igObjectRefResolver_vtableRead()
{
    igObjectRefResolverInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igObjectRefResolver_vtable;
    object._loadedSymbols._value = 0;
    object._resolvedObject._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectRefResolver)

void igObjectRefResolver_register()
{
    fn_80216620();
    meta_registerClass(0, &igObjectRefResolver_meta, igNamedObject_register,
                       fn_80023CF4, igObjectRefResolver_getMetaCall,
                       igObjectRefResolver_className, 0x14,
                       igObjectRefResolver_vtableRead, igObjectRefResolver_fieldInit, 0, igObjectRefResolver_dependencies);
}

META_GET_META_CALL(igObjectRefResolver)

void igObjectRefResolver_fieldInit()
{
    Meta::igMetaObject *meta = igObjectRefResolver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igObjectRefResolver_fieldTypes, 2);
    Meta::igObjectRefMetaField *loadedSymbolsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800284F4();
    loadedSymbolsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    loadedSymbolsField->_persistent = false;
    Meta::igObjectRefMetaField *resolvedObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    resolvedObjectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    resolvedObjectField->_persistent = false;
    meta_setupFields(meta, igObjectRefResolver_fieldNames, igObjectRefResolver_fieldStorage, igObjectRefResolver_fieldOffsets, base);
}

}
#pragma pop
}

namespace igNonRefCountedObjectStack {
// igNonRefCountedObjectStack: Alchemy class registration (0x802175A8..0x802176F4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igNonRefCountedObjectStack)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_80216620();
void fn_802176F4();
extern char lbl_80480B58[];
}

struct Instance_802175E4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedObjectStack)

void *igNonRefCountedObjectStack_vtableRead()
{
    Instance_802175E4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80480B58;
    object.__vtable = igNonRefCountedObjectStack_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedObjectStack)

void igNonRefCountedObjectStack_register()
{
    fn_80216620();
    meta_registerClass(0, &igNonRefCountedObjectStack_meta, igDataList_register,
                       fn_80024D1C, igNonRefCountedObjectStack_getMetaCall,
                       igNonRefCountedObjectStack_className, 0x14,
                       igNonRefCountedObjectStack_vtableRead, fn_802176F4, 0, 0);
}

META_GET_META_CALL(igNonRefCountedObjectStack)

}
#pragma pop
}

namespace fn_802176F4 {
// igNonRefCountedObjectStack: Alchemy class registration (0x802176F4..0x802177B4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igNonRefCountedObjectStack)

extern "C" {
void *fn_80028BFC();
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
extern char lbl_80560B70[6];
extern char lbl_80565A2C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void fn_802176F4()
{
    Meta::igMetaObject *meta = igNonRefCountedObjectStack_meta;
    Meta::igMemoryRefMetaField *dataField = static_cast<Meta::igMemoryRefMetaField *>(fn_800658F8(meta, lbl_80560B70));   // "_data"
    int dataIndex = fn_80053998(meta->_metaFields, dataField);
    dataField = static_cast<Meta::igMemoryRefMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(dataField)->virtual54(1));   // a copy of it
    void *value_v2 = fn_80028BFC();
    dataField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v2);
    dataField->_memSize = 0;
    dataField->_refCounted = false;
    dataField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80565A2C);
    fn_8006588C(meta, dataIndex, dataField);
    meta_release(dataField);
}

}
#pragma pop
}

namespace igMersenneTwisterRandomNumber_2 {
// igMersenneTwisterRandomNumber: Alchemy class registration (0x802177B4..0x802178D4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMersenneTwisterRandomNumber)
META_DECLARE(igRandomNumber)

extern "C" {
void fn_80216620();
void *igMersenneTwisterRandomNumber_parentMeta();
extern char lbl_804BC590[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMersenneTwisterRandomNumber)

void *igMersenneTwisterRandomNumber_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[2516];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804BC590;
    object.__vtable = igMersenneTwisterRandomNumber_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMersenneTwisterRandomNumber)

void igMersenneTwisterRandomNumber_register()
{
    fn_80216620();
    meta_registerClass(0, &igMersenneTwisterRandomNumber_meta, igRandomNumber_register,
                       igMersenneTwisterRandomNumber_parentMeta, igMersenneTwisterRandomNumber_getMetaCall,
                       igMersenneTwisterRandomNumber_className, 0x9CC,
                       igMersenneTwisterRandomNumber_vtableRead, igMersenneTwisterRandomNumber_fieldInit, 0, 0);
}

}
#pragma pop
}

namespace unknown802178D4 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igMeanAndStandardDeviation_fieldInit();
void *igMersenneTwisterRandomNumber_getMetaCall();
void igObject_register();
void igRandomNumber_register();
extern char igMersenneTwisterRandomNumber_vtable[];
extern char igMeanAndStandardDeviation_vtable[];
extern char lbl_804BC590[];
extern char igMersenneTwisterRandomNumber_fieldTypes[8];
extern char igMersenneTwisterRandomNumber_fieldNames[8];
extern char igMersenneTwisterRandomNumber_fieldStorage[8];
extern char igMersenneTwisterRandomNumber_fieldOffsets[8];
extern void *igRandomNumber_meta;
extern void *igMersenneTwisterRandomNumber_meta;
extern void *igMeanAndStandardDeviation_meta;
void *igMersenneTwisterRandomNumber_vtableRead();
void igMersenneTwisterRandomNumber_arkRegister();
void igMersenneTwisterRandomNumber_register();
void *igMersenneTwisterRandomNumber_parentMeta();
void igMersenneTwisterRandomNumber_fieldInit();
void *igMeanAndStandardDeviation_getMeta();
void *igMeanAndStandardDeviation_vtableRead();
void igMeanAndStandardDeviation_arkRegister();
void igMeanAndStandardDeviation_register();
void *igMeanAndStandardDeviation_getMetaCall();
}
struct UnknownGenObject802177F0_0 {
 void *unknown00;
 char unknown04[2516];
};
struct UnknownGenObject80217994_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igMersenneTwisterRandomNumber_parentMeta(){return igRandomNumber_meta;}
}
#pragma pop
}

namespace igMersenneTwisterRandomNumber_3 {
// igMersenneTwisterRandomNumber: Alchemy class registration (0x802178DC..0x80217958). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMersenneTwisterRandomNumber)

extern "C" {
extern char igMersenneTwisterRandomNumber_fieldNames[8];
extern char igMersenneTwisterRandomNumber_fieldOffsets[8];
extern char igMersenneTwisterRandomNumber_fieldStorage[8];
extern char igMersenneTwisterRandomNumber_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMersenneTwisterRandomNumber_fieldInit()
{
    Meta::igMetaObject *meta = igMersenneTwisterRandomNumber_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMersenneTwisterRandomNumber_fieldTypes, 2);
    Meta::igUnsignedIntArrayMetaField *mtField = static_cast<Meta::igUnsignedIntArrayMetaField *>(meta_field(meta, base + 1));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(mtField) + 0x34) = (void *)624;
    meta_setupFields(meta, igMersenneTwisterRandomNumber_fieldNames, igMersenneTwisterRandomNumber_fieldStorage, igMersenneTwisterRandomNumber_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80217958 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igMeanAndStandardDeviation_fieldInit();
void *igMersenneTwisterRandomNumber_getMetaCall();
void igObject_register();
void igRandomNumber_register();
extern char igMersenneTwisterRandomNumber_vtable[];
extern char igMeanAndStandardDeviation_vtable[];
extern char lbl_804BC590[];
extern char igMersenneTwisterRandomNumber_fieldTypes[8];
extern char igMersenneTwisterRandomNumber_fieldNames[8];
extern char igMersenneTwisterRandomNumber_fieldStorage[8];
extern char igMersenneTwisterRandomNumber_fieldOffsets[8];
extern void *igRandomNumber_meta;
extern void *igMersenneTwisterRandomNumber_meta;
extern void *igMeanAndStandardDeviation_meta;
void *igMersenneTwisterRandomNumber_vtableRead();
void igMersenneTwisterRandomNumber_arkRegister();
void igMersenneTwisterRandomNumber_register();
void *igMersenneTwisterRandomNumber_parentMeta();
void igMersenneTwisterRandomNumber_fieldInit();
void *igMeanAndStandardDeviation_getMeta();
void *igMeanAndStandardDeviation_vtableRead();
void igMeanAndStandardDeviation_arkRegister();
void igMeanAndStandardDeviation_register();
void *igMeanAndStandardDeviation_getMetaCall();
}
struct UnknownGenObject802177F0_0 {
 void *unknown00;
 char unknown04[2516];
};
struct UnknownGenObject80217994_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igMeanAndStandardDeviation_getMeta(){
 if(!igMeanAndStandardDeviation_meta || !(reinterpret_cast<unsigned int *>(igMeanAndStandardDeviation_meta)[0x24/4]&4)) igMeanAndStandardDeviation_arkRegister();
 return igMeanAndStandardDeviation_meta;
}
void *igMeanAndStandardDeviation_vtableRead(){
 UnknownGenObject80217994_0 object;
 igObject_construct(&object);
 object.unknown00=igMeanAndStandardDeviation_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMeanAndStandardDeviation_arkRegister(){
 meta_registerNow((int)igMeanAndStandardDeviation_register);
}
void igMeanAndStandardDeviation_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igMeanAndStandardDeviation_meta,(int)igObject_register,(int)fn_800237D0,(int)igMeanAndStandardDeviation_getMetaCall,(int)igMeanAndStandardDeviation_className,20,(int)igMeanAndStandardDeviation_vtableRead,(int)igMeanAndStandardDeviation_fieldInit,0,0);
}
void *igMeanAndStandardDeviation_getMetaCall(){return igMeanAndStandardDeviation_getMeta();}
}
#pragma pop
}

namespace igMeanAndStandardDeviation_fieldInit {
// igMeanAndStandardDeviation: Alchemy class registration (0x80217A8C..0x80217AFC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMeanAndStandardDeviation)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMeanAndStandardDeviation_fieldInit()
{
    Meta::igMetaObject *meta = igMeanAndStandardDeviation_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMeanAndStandardDeviation_fieldTypes, 3);
    meta_setupFields(meta, igMeanAndStandardDeviation_fieldNames, igMeanAndStandardDeviation_fieldStorage, igMeanAndStandardDeviation_fieldOffsets, base);
}

}
#pragma pop
}

namespace igMatrixStack {
// igMatrixStack: Alchemy class registration (0x80217AFC..0x80217B34). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMatrixStack)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMatrixStack)

}
#pragma pop
}

namespace unknown80217B34 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011FFD8();
void fn_80216620();
void igMatrixObject_arkRegister();
void igDataList_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMatrixObjectList_vtable[];
extern char lbl_804BC288[];
extern char igNonRefCountedMatrixObjectList_vtable[];
extern char lbl_804BC350[];
extern char igMatrixStack_vtable[];
extern char lbl_804BC4D4[];
extern char lbl_80560B70[6];
extern char igNonRefCountedMatrixObjectList_dependencies[8];
extern char igMatrixObjectList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMatrixStack_meta;
extern char lbl_80565A50[4];
extern void *igNonRefCountedMatrixObjectList_meta;
extern void *igMatrixObjectList_meta;
extern void *igMatrixObject_meta;
void *igMatrixStack_getMeta();
void *igMatrixStack_vtableRead();
void igMatrixStack_arkRegister();
void igMatrixStack_register();
void *igMatrixStack_getMetaCall();
void fn_80217CBC();
void *igNonRefCountedMatrixObjectList_getMeta();
void *igNonRefCountedMatrixObjectList_vtableRead();
void igNonRefCountedMatrixObjectList_arkRegister();
void igNonRefCountedMatrixObjectList_register();
void *igNonRefCountedMatrixObjectList_getMetaCall();
void *igMatrixObjectList_getMeta();
void *igMatrixObjectList_vtableRead();
void igMatrixObjectList_arkRegister();
void igMatrixObjectList_register();
void *igMatrixObjectList_getMetaCall();
}
struct UnknownGenObject80217BAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217DF0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217FC4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80217B34(){
 if(!igMatrixStack_meta) igMatrixStack_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixStack_meta;
}
}
#pragma pop
}

namespace igMatrixStack_2 {
// igMatrixStack: Alchemy class registration (0x80217B70..0x80217CBC). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMatrixStack)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_80216620();
void fn_80217CBC();
extern char lbl_804BC4D4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixStack)

void *igMatrixStack_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_804BC4D4;
    object.__vtable = igMatrixStack_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixStack)

void igMatrixStack_register()
{
    fn_80216620();
    meta_registerClass(0, &igMatrixStack_meta, igDataList_register,
                       fn_80024D1C, igMatrixStack_getMetaCall,
                       igMatrixStack_className, 0x14,
                       igMatrixStack_vtableRead, fn_80217CBC, 0, 0);
}

META_GET_META_CALL(igMatrixStack)

}
#pragma pop
}

namespace unknown80217CBC {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011FFD8();
void fn_80216620();
void igMatrixObject_arkRegister();
void igDataList_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMatrixObjectList_vtable[];
extern char lbl_804BC288[];
extern char igNonRefCountedMatrixObjectList_vtable[];
extern char lbl_804BC350[];
extern char igMatrixStack_vtable[];
extern char lbl_804BC4D4[];
extern char lbl_80560B70[6];
extern char igNonRefCountedMatrixObjectList_dependencies[8];
extern char igMatrixObjectList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMatrixStack_meta;
extern char lbl_80565A50[4];
extern void *igNonRefCountedMatrixObjectList_meta;
extern void *igMatrixObjectList_meta;
extern void *igMatrixObject_meta;
void *igMatrixStack_getMeta();
void *igMatrixStack_vtableRead();
void igMatrixStack_arkRegister();
void igMatrixStack_register();
void *igMatrixStack_getMetaCall();
void fn_80217CBC();
void *igNonRefCountedMatrixObjectList_getMeta();
void *igNonRefCountedMatrixObjectList_vtableRead();
void igNonRefCountedMatrixObjectList_arkRegister();
void igNonRefCountedMatrixObjectList_register();
void *igNonRefCountedMatrixObjectList_getMetaCall();
void *igMatrixObjectList_getMeta();
void *igMatrixObjectList_vtableRead();
void igMatrixObjectList_arkRegister();
void igMatrixObjectList_register();
void *igMatrixObjectList_getMetaCall();
}
struct UnknownGenObject80217BAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217DF0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217FC4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_80217CBC(){
 void *meta=igMatrixStack_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560B70));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8011FFD8();
 field->unknown38=0;
 field->unknown1C=lbl_80565A50;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_80217D78(){
 if(!igNonRefCountedMatrixObjectList_meta) igNonRefCountedMatrixObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedMatrixObjectList_meta;
}
}
#pragma pop
}

namespace igNonRefCountedMatrixObjectList {
// igNonRefCountedMatrixObjectList: Alchemy class registration (0x80217DB4..0x80217F14). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igNonRefCountedMatrixObjectList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_80216620();
extern char igNonRefCountedMatrixObjectList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804BC350[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedMatrixObjectList)

void *igNonRefCountedMatrixObjectList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804BC350;
    object.__vtable = igNonRefCountedMatrixObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedMatrixObjectList)

void igNonRefCountedMatrixObjectList_register()
{
    fn_80216620();
    meta_registerClass(0, &igNonRefCountedMatrixObjectList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedMatrixObjectList_getMetaCall,
                       igNonRefCountedMatrixObjectList_className, 0x14,
                       igNonRefCountedMatrixObjectList_vtableRead, 0, 0, igNonRefCountedMatrixObjectList_dependencies);
}

META_GET_META_CALL(igNonRefCountedMatrixObjectList)

}
#pragma pop
}

namespace igMatrixObjectList {
// igMatrixObjectList: Alchemy class registration (0x80217F14..0x80217F4C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMatrixObjectList)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMatrixObjectList)

}
#pragma pop
}

namespace unknown80217F4C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011FFD8();
void fn_80216620();
void igMatrixObject_arkRegister();
void igDataList_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMatrixObjectList_vtable[];
extern char lbl_804BC288[];
extern char igNonRefCountedMatrixObjectList_vtable[];
extern char lbl_804BC350[];
extern char igMatrixStack_vtable[];
extern char lbl_804BC4D4[];
extern char lbl_80560B70[6];
extern char igNonRefCountedMatrixObjectList_dependencies[8];
extern char igMatrixObjectList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMatrixStack_meta;
extern char lbl_80565A50[4];
extern void *igNonRefCountedMatrixObjectList_meta;
extern void *igMatrixObjectList_meta;
extern void *igMatrixObject_meta;
void *igMatrixStack_getMeta();
void *igMatrixStack_vtableRead();
void igMatrixStack_arkRegister();
void igMatrixStack_register();
void *igMatrixStack_getMetaCall();
void fn_80217CBC();
void *igNonRefCountedMatrixObjectList_getMeta();
void *igNonRefCountedMatrixObjectList_vtableRead();
void igNonRefCountedMatrixObjectList_arkRegister();
void igNonRefCountedMatrixObjectList_register();
void *igNonRefCountedMatrixObjectList_getMetaCall();
void *igMatrixObjectList_getMeta();
void *igMatrixObjectList_vtableRead();
void igMatrixObjectList_arkRegister();
void igMatrixObjectList_register();
void *igMatrixObjectList_getMetaCall();
}
struct UnknownGenObject80217BAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217DF0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217FC4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80217F4C(){
 if(!igMatrixObjectList_meta) igMatrixObjectList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixObjectList_meta;
}
}
#pragma pop
}

namespace igMatrixObjectList_2 {
// igMatrixObjectList: Alchemy class registration (0x80217F88..0x802180E8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMatrixObjectList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80216620();
extern char igMatrixObjectList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804BC288[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixObjectList)

void *igMatrixObjectList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804BC288;
    object.__vtable = igMatrixObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixObjectList)

void igMatrixObjectList_register()
{
    fn_80216620();
    meta_registerClass(0, &igMatrixObjectList_meta, igObjectList_register,
                       fn_80024180, igMatrixObjectList_getMetaCall,
                       igMatrixObjectList_className, 0x14,
                       igMatrixObjectList_vtableRead, 0, 0, igMatrixObjectList_dependencies);
}

META_GET_META_CALL(igMatrixObjectList)

}
#pragma pop
}

namespace igMatrixObject {
// igMatrixObject: Alchemy class registration (0x802180E8..0x80218120). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igMatrixObject)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMatrixObject)

}
#pragma pop
}

namespace unknown80218120 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011FFD8();
void fn_80216620();
void igMatrixObject_arkRegister();
void igDataList_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMatrixObjectList_vtable[];
extern char lbl_804BC288[];
extern char igNonRefCountedMatrixObjectList_vtable[];
extern char lbl_804BC350[];
extern char igMatrixStack_vtable[];
extern char lbl_804BC4D4[];
extern char lbl_80560B70[6];
extern char igNonRefCountedMatrixObjectList_dependencies[8];
extern char igMatrixObjectList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMatrixStack_meta;
extern char lbl_80565A50[4];
extern void *igNonRefCountedMatrixObjectList_meta;
extern void *igMatrixObjectList_meta;
extern void *igMatrixObject_meta;
void *igMatrixStack_getMeta();
void *igMatrixStack_vtableRead();
void igMatrixStack_arkRegister();
void igMatrixStack_register();
void *igMatrixStack_getMetaCall();
void fn_80217CBC();
void *igNonRefCountedMatrixObjectList_getMeta();
void *igNonRefCountedMatrixObjectList_vtableRead();
void igNonRefCountedMatrixObjectList_arkRegister();
void igNonRefCountedMatrixObjectList_register();
void *igNonRefCountedMatrixObjectList_getMetaCall();
void *igMatrixObjectList_getMeta();
void *igMatrixObjectList_vtableRead();
void igMatrixObjectList_arkRegister();
void igMatrixObjectList_register();
void *igMatrixObjectList_getMetaCall();
}
struct UnknownGenObject80217BAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217DF0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217FC4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80218120(){
 if(!igMatrixObject_meta) igMatrixObject_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMatrixObject_meta;
}
}
#pragma pop
}

namespace igMatrixObject_2 {
// igMatrixObject: Alchemy class registration (0x8021815C..0x80218300). Written by tools/alchemymeta/metasrc.py.

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
}

namespace igIntObject {
// igIntObject: Alchemy class registration (0x80218300..0x8021849C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igIntObject)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
extern char igIntObject_fieldNames[4];
extern char igIntObject_fieldOffsets[4];
extern char igIntObject_fieldStorage[4];
extern char igIntObject_fieldTypes[4];
}

struct Instance_8021833C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIntObject)

void *igIntObject_vtableRead()
{
    Instance_8021833C_0 object;
    igObject_construct(&object);
    object.__vtable = igIntObject_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntObject)

void igIntObject_register()
{
    fn_80216620();
    meta_registerClass(0, &igIntObject_meta, igObject_register,
                       fn_800237D0, igIntObject_getMetaCall,
                       igIntObject_className, 0xC,
                       igIntObject_vtableRead, igIntObject_fieldInit, 0, 0);
}

META_GET_META_CALL(igIntObject)

void igIntObject_fieldInit()
{
    Meta::igMetaObject *meta = igIntObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igIntObject_fieldTypes, 1);
    meta_setupFields(meta, igIntObject_fieldNames, igIntObject_fieldStorage, igIntObject_fieldOffsets, base);
}

}
#pragma pop
}

namespace igIntHistogram {
// igIntHistogram: Alchemy class registration (0x8021849C..0x80218670). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igIntHistogram)
META_DECLARE(igHistogramBase)

extern "C" {
void fn_80216620();
void *fn_80218670();
extern char lbl_804BC70C[];
}

struct igHistogramBaseInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _bins;
    inline ~igHistogramBaseInstance() { __vtable = igHistogramBase_vtable; }
};

struct Instance_804BC70C : igHistogramBaseInstance {
    inline ~Instance_804BC70C() { __vtable = lbl_804BC70C; }
};

struct igIntHistogramInstance : Instance_804BC70C {
    char unknown0C[36];
    inline ~igIntHistogramInstance() { __vtable = igIntHistogram_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIntHistogram)

META_GET_META(igIntHistogram)

void *igIntHistogram_vtableRead()
{
    igIntHistogramInstance object;
    object.__vtable = igHistogramBase_vtable;
    object._bins._value = 0;
    object.__vtable = lbl_804BC70C;
    object.__vtable = igIntHistogram_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntHistogram)

void igIntHistogram_register()
{
    fn_80216620();
    meta_registerClass(0, &igIntHistogram_meta, igHistogramBase_register,
                       fn_80218670, igIntHistogram_getMetaCall,
                       igIntHistogram_className, 0x24,
                       igIntHistogram_vtableRead, igIntHistogram_fieldInit, 0, 0);
}

META_GET_META_CALL(igIntHistogram)

}
#pragma pop
}

namespace unknown80218670 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igHistogramBase_register();
void igIntHistogram_fieldInit();
void *igMatrixObject_getMeta();
void igMatrixObject_vtableRead();
void igObject_register();
extern char igIntObject_vtable[];
extern char igIntHistogram_vtable[];
extern char lbl_804BC70C[];
extern char igHistogramBase_vtable[];
extern char igMatrixObject_fieldTypes[4];
extern char igMatrixObject_fieldNames[4];
extern char igMatrixObject_fieldStorage[4];
extern char igMatrixObject_fieldOffsets[4];
extern char igIntObject_fieldTypes[4];
extern char igIntObject_fieldNames[4];
extern char igIntObject_fieldStorage[4];
extern char igIntObject_fieldOffsets[4];
extern void *igHistogramBase_meta;
extern void *igMatrixObject_meta;
extern void *igIntObject_meta;
extern void *igIntHistogram_meta;
void igMatrixObject_register();
void *igMatrixObject_getMetaCall();
void igMatrixObject_fieldInit();
void *igIntObject_getMeta();
void *igIntObject_vtableRead();
void igIntObject_arkRegister();
void igIntObject_register();
void *igIntObject_getMetaCall();
void igIntObject_fieldInit();
void *igIntHistogram_getMeta();
void *igIntHistogram_vtableRead();
void igIntHistogram_arkRegister();
void igIntHistogram_register();
void *igIntHistogram_getMetaCall();
void *fn_80218670();
}
struct UnknownGenObject8021833C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80218510 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218510(){igObject_construct(this);}
};
struct UnknownGenObject80218510_0 : UnknownGenRoot80218510 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80218510_0(){unknown00=igHistogramBase_vtable;}
};
struct UnknownGenObject80218510_1 : UnknownGenObject80218510_0 {
 inline ~UnknownGenObject80218510_1(){unknown00=lbl_804BC70C;}
};
struct UnknownGenObject80218510 : UnknownGenObject80218510_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80218510(){unknown00=igIntHistogram_vtable;}
};
extern "C" {
void *fn_80218670(){return igHistogramBase_meta;}
}
#pragma pop
}

namespace igIntHistogram_fieldInit {
// igIntHistogram: Alchemy class registration (0x80218678..0x802186E8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igIntHistogram)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igIntHistogram_fieldInit()
{
    Meta::igMetaObject *meta = igIntHistogram_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igIntHistogram_fieldTypes, 3);
    meta_setupFields(meta, igIntHistogram_fieldNames, igIntHistogram_fieldStorage, igIntHistogram_fieldOffsets, base);
}

}
#pragma pop
}

namespace igFloatObject {
// igFloatObject: Alchemy class registration (0x802186E8..0x80218884). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFloatObject)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
extern char igFloatObject_fieldNames[4];
extern char igFloatObject_fieldOffsets[4];
extern char igFloatObject_fieldStorage[4];
extern char igFloatObject_fieldTypes[4];
}

struct Instance_80218724_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFloatObject)

void *igFloatObject_vtableRead()
{
    Instance_80218724_0 object;
    igObject_construct(&object);
    object.__vtable = igFloatObject_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFloatObject)

void igFloatObject_register()
{
    fn_80216620();
    meta_registerClass(0, &igFloatObject_meta, igObject_register,
                       fn_800237D0, igFloatObject_getMetaCall,
                       igFloatObject_className, 0xC,
                       igFloatObject_vtableRead, igFloatObject_fieldInit, 0, 0);
}

META_GET_META_CALL(igFloatObject)

void igFloatObject_fieldInit()
{
    Meta::igMetaObject *meta = igFloatObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFloatObject_fieldTypes, 1);
    meta_setupFields(meta, igFloatObject_fieldNames, igFloatObject_fieldStorage, igFloatObject_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80218884 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void *fn_80218670();
void igFloatHistogram_fieldInit();
void igHistogramBase_register();
void igObject_register();
extern char igFloatHistogram_vtable[];
extern char lbl_804BBD94[];
extern char igFloatObject_vtable[];
extern char igHistogramBase_vtable[];
extern char igFloatObject_fieldTypes[4];
extern char igFloatObject_fieldNames[4];
extern char igFloatObject_fieldStorage[4];
extern char igFloatObject_fieldOffsets[4];
extern void *igFloatObject_meta;
extern void *igFloatHistogram_meta;
void *igFloatObject_getMeta();
void *igFloatObject_vtableRead();
void igFloatObject_arkRegister();
void igFloatObject_register();
void *igFloatObject_getMetaCall();
void igFloatObject_fieldInit();
void *igFloatHistogram_getMeta();
void *igFloatHistogram_vtableRead();
void igFloatHistogram_arkRegister();
void igFloatHistogram_register();
void *igFloatHistogram_getMetaCall();
}
struct UnknownGenObject80218724_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot802188C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802188C0(){igObject_construct(this);}
};
struct UnknownGenObject802188C0_0 : UnknownGenRoot802188C0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802188C0_0(){unknown00=igHistogramBase_vtable;}
};
struct UnknownGenObject802188C0_1 : UnknownGenObject802188C0_0 {
 inline ~UnknownGenObject802188C0_1(){unknown00=lbl_804BBD94;}
};
struct UnknownGenObject802188C0 : UnknownGenObject802188C0_1 {
 char unknown0C[36];
 inline ~UnknownGenObject802188C0(){unknown00=igFloatHistogram_vtable;}
};
extern "C" {
void *igFloatHistogram_getMeta(){
 if(!igFloatHistogram_meta || !(reinterpret_cast<unsigned int *>(igFloatHistogram_meta)[0x24/4]&4)) igFloatHistogram_arkRegister();
 return igFloatHistogram_meta;
}
void *igFloatHistogram_vtableRead(){
 UnknownGenObject802188C0 object;
 object.unknown00=igHistogramBase_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804BBD94;
 object.unknown00=igFloatHistogram_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFloatHistogram_arkRegister(){
 meta_registerNow((int)igFloatHistogram_register);
}
void igFloatHistogram_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igFloatHistogram_meta,(int)igHistogramBase_register,(int)fn_80218670,(int)igFloatHistogram_getMetaCall,(int)igFloatHistogram_className,36,(int)igFloatHistogram_vtableRead,(int)igFloatHistogram_fieldInit,0,0);
}
void *igFloatHistogram_getMetaCall(){return igFloatHistogram_getMeta();}
}
#pragma pop
}

namespace igFloatHistogram_fieldInit {
// igFloatHistogram: Alchemy class registration (0x80218A20..0x80218A90). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igFloatHistogram)

extern "C" {
}

#pragma push
#pragma auto_inline off
extern "C" {

void igFloatHistogram_fieldInit()
{
    Meta::igMetaObject *meta = igFloatHistogram_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFloatHistogram_fieldTypes, 3);
    meta_setupFields(meta, igFloatHistogram_fieldNames, igFloatHistogram_fieldStorage, igFloatHistogram_fieldOffsets, base);
}

}
#pragma pop
}

namespace igDataPumpManager {
// igDataPumpManager: Alchemy class registration (0x80218A90..0x80218AC8). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDataPumpManager)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igDataPumpManager)

}
#pragma pop
}

namespace unknown80218AC8 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igDataPump_fieldInit();
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igDataPump_vtable[];
extern char igDataPumpInfo_vtable[];
extern char igDataPumpList_vtable[];
extern char lbl_804BBB00[];
extern char igDataPumpManager_vtable[];
extern char igDataPumpManager_dependencies[8];
extern char igDataPumpManager_fieldTypes[4];
extern char igDataPumpManager_fieldNames[4];
extern char igDataPumpManager_fieldStorage[4];
extern char igDataPumpManager_fieldOffsets[4];
extern char igDataPumpList_dependencies[8];
extern char igDataPumpInfo_dependencies[8];
extern char igDataPumpInfo_fieldTypes[4];
extern char igDataPumpInfo_fieldNames[4];
extern char igDataPumpInfo_fieldStorage[4];
extern char igDataPumpInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igDataPumpManager_meta;
extern void *igDataPumpList_meta;
extern void *igDataPumpInterface_meta;
extern void *igDataPumpInfo_meta;
extern void *igDataPump_meta;
void *igDataPumpManager_getMeta();
void *igDataPumpManager_vtableRead();
void igDataPumpManager_arkRegister();
void igDataPumpManager_register();
void *igDataPumpManager_getMetaCall();
void igDataPumpManager_fieldInit();
void *fn_80218D14();
void *igDataPumpList_getMeta();
void *igDataPumpList_vtableRead();
void igDataPumpList_arkRegister();
void igDataPumpList_register();
void *igDataPumpList_getMetaCall();
void *igDataPumpInterface_getMeta();
void igDataPumpInterface_arkRegister();
void igDataPumpInterface_register();
void *igDataPumpInterface_getMetaCall();
void *igDataPumpInfo_getMeta();
void *igDataPumpInfo_vtableRead();
void igDataPumpInfo_arkRegister();
void igDataPumpInfo_register();
void *igDataPumpInfo_getMetaCall();
void igDataPumpInfo_fieldInit();
void *igDataPump_getMeta();
void *igDataPump_vtableRead();
void igDataPump_arkRegister();
void igDataPump_register();
void *igDataPump_getMetaCall();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){igObject_construct(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=igDataPumpManager_vtable;}
};
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80219084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219084(){igObject_construct(this);}
};
struct UnknownGenObject80219084_0 : UnknownGenRoot80219084 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80219084_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80219084_1 : UnknownGenObject80219084_0 {
 inline ~UnknownGenObject80219084_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80219084 : UnknownGenObject80219084_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80219084(){unknown00=igDataPumpInfo_vtable;}
};
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){igObject_construct(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=igDataPump_vtable;}
};
extern "C" {
void *fn_80218AC8(){
 if(!igDataPumpManager_meta) igDataPumpManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpManager_meta;
}
}
#pragma pop
}

namespace igDataPumpManager_2 {
// igDataPumpManager: Alchemy class registration (0x80218B04..0x80218D14). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDataPumpManager)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
void *fn_80218D14();
extern char igDataPumpManager_dependencies[8];
extern char igDataPumpManager_fieldNames[4];
extern char igDataPumpManager_fieldOffsets[4];
extern char igDataPumpManager_fieldStorage[4];
extern char igDataPumpManager_fieldTypes[4];
}

struct igDataPumpManagerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _dataPumpList;
    char unknown0C[4];
    inline ~igDataPumpManagerInstance() { __vtable = igDataPumpManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpManager)

void *igDataPumpManager_vtableRead()
{
    igDataPumpManagerInstance object;
    object.__vtable = igDataPumpManager_vtable;
    object._dataPumpList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDataPumpManager)

void igDataPumpManager_register()
{
    fn_80216620();
    meta_registerClass(0, &igDataPumpManager_meta, igObject_register,
                       fn_800237D0, igDataPumpManager_getMetaCall,
                       igDataPumpManager_className, 0xC,
                       igDataPumpManager_vtableRead, igDataPumpManager_fieldInit, 0, igDataPumpManager_dependencies);
}

META_GET_META_CALL(igDataPumpManager)

void igDataPumpManager_fieldInit()
{
    Meta::igMetaObject *meta = igDataPumpManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDataPumpManager_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataPumpListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80218D14();
    dataPumpListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataPumpListField->_construct = true;
    dataPumpListField->_persistent = false;
    meta_setupFields(meta, igDataPumpManager_fieldNames, igDataPumpManager_fieldStorage, igDataPumpManager_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown80218D14 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igDataPump_fieldInit();
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igDataPump_vtable[];
extern char igDataPumpInfo_vtable[];
extern char igDataPumpList_vtable[];
extern char lbl_804BBB00[];
extern char igDataPumpManager_vtable[];
extern char igDataPumpManager_dependencies[8];
extern char igDataPumpManager_fieldTypes[4];
extern char igDataPumpManager_fieldNames[4];
extern char igDataPumpManager_fieldStorage[4];
extern char igDataPumpManager_fieldOffsets[4];
extern char igDataPumpList_dependencies[8];
extern char igDataPumpInfo_dependencies[8];
extern char igDataPumpInfo_fieldTypes[4];
extern char igDataPumpInfo_fieldNames[4];
extern char igDataPumpInfo_fieldStorage[4];
extern char igDataPumpInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igDataPumpManager_meta;
extern void *igDataPumpList_meta;
extern void *igDataPumpInterface_meta;
extern void *igDataPumpInfo_meta;
extern void *igDataPump_meta;
void *igDataPumpManager_getMeta();
void *igDataPumpManager_vtableRead();
void igDataPumpManager_arkRegister();
void igDataPumpManager_register();
void *igDataPumpManager_getMetaCall();
void igDataPumpManager_fieldInit();
void *fn_80218D14();
void *igDataPumpList_getMeta();
void *igDataPumpList_vtableRead();
void igDataPumpList_arkRegister();
void igDataPumpList_register();
void *igDataPumpList_getMetaCall();
void *igDataPumpInterface_getMeta();
void igDataPumpInterface_arkRegister();
void igDataPumpInterface_register();
void *igDataPumpInterface_getMetaCall();
void *igDataPumpInfo_getMeta();
void *igDataPumpInfo_vtableRead();
void igDataPumpInfo_arkRegister();
void igDataPumpInfo_register();
void *igDataPumpInfo_getMetaCall();
void igDataPumpInfo_fieldInit();
void *igDataPump_getMeta();
void *igDataPump_vtableRead();
void igDataPump_arkRegister();
void igDataPump_register();
void *igDataPump_getMetaCall();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){igObject_construct(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=igDataPumpManager_vtable;}
};
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80219084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219084(){igObject_construct(this);}
};
struct UnknownGenObject80219084_0 : UnknownGenRoot80219084 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80219084_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80219084_1 : UnknownGenObject80219084_0 {
 inline ~UnknownGenObject80219084_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80219084 : UnknownGenObject80219084_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80219084(){unknown00=igDataPumpInfo_vtable;}
};
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){igObject_construct(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=igDataPump_vtable;}
};
extern "C" {
void *fn_80218D14(){
 if(!igDataPumpList_meta) igDataPumpList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpList_meta;
}
}
#pragma pop
}

namespace igDataPumpList {
// igDataPumpList: Alchemy class registration (0x80218D50..0x80218EB0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDataPumpList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80216620();
extern char igDataPumpList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804BBB00[];
}

struct Instance_80218D8C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpList)

void *igDataPumpList_vtableRead()
{
    Instance_80218D8C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804BBB00;
    object.__vtable = igDataPumpList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDataPumpList)

void igDataPumpList_register()
{
    fn_80216620();
    meta_registerClass(0, &igDataPumpList_meta, igObjectList_register,
                       fn_80024180, igDataPumpList_getMetaCall,
                       igDataPumpList_className, 0x14,
                       igDataPumpList_vtableRead, 0, 0, igDataPumpList_dependencies);
}

META_GET_META_CALL(igDataPumpList)

}
#pragma pop
}

namespace unknown80218EB0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igDataPump_fieldInit();
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igDataPump_vtable[];
extern char igDataPumpInfo_vtable[];
extern char igDataPumpList_vtable[];
extern char lbl_804BBB00[];
extern char igDataPumpManager_vtable[];
extern char igDataPumpManager_dependencies[8];
extern char igDataPumpManager_fieldTypes[4];
extern char igDataPumpManager_fieldNames[4];
extern char igDataPumpManager_fieldStorage[4];
extern char igDataPumpManager_fieldOffsets[4];
extern char igDataPumpList_dependencies[8];
extern char igDataPumpInfo_dependencies[8];
extern char igDataPumpInfo_fieldTypes[4];
extern char igDataPumpInfo_fieldNames[4];
extern char igDataPumpInfo_fieldStorage[4];
extern char igDataPumpInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igDataPumpManager_meta;
extern void *igDataPumpList_meta;
extern void *igDataPumpInterface_meta;
extern void *igDataPumpInfo_meta;
extern void *igDataPump_meta;
void *igDataPumpManager_getMeta();
void *igDataPumpManager_vtableRead();
void igDataPumpManager_arkRegister();
void igDataPumpManager_register();
void *igDataPumpManager_getMetaCall();
void igDataPumpManager_fieldInit();
void *fn_80218D14();
void *igDataPumpList_getMeta();
void *igDataPumpList_vtableRead();
void igDataPumpList_arkRegister();
void igDataPumpList_register();
void *igDataPumpList_getMetaCall();
void *igDataPumpInterface_getMeta();
void igDataPumpInterface_arkRegister();
void igDataPumpInterface_register();
void *igDataPumpInterface_getMetaCall();
void *igDataPumpInfo_getMeta();
void *igDataPumpInfo_vtableRead();
void igDataPumpInfo_arkRegister();
void igDataPumpInfo_register();
void *igDataPumpInfo_getMetaCall();
void igDataPumpInfo_fieldInit();
void *igDataPump_getMeta();
void *igDataPump_vtableRead();
void igDataPump_arkRegister();
void igDataPump_register();
void *igDataPump_getMetaCall();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){igObject_construct(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=igDataPumpManager_vtable;}
};
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80219084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219084(){igObject_construct(this);}
};
struct UnknownGenObject80219084_0 : UnknownGenRoot80219084 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80219084_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80219084_1 : UnknownGenObject80219084_0 {
 inline ~UnknownGenObject80219084_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80219084 : UnknownGenObject80219084_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80219084(){unknown00=igDataPumpInfo_vtable;}
};
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){igObject_construct(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=igDataPump_vtable;}
};
extern "C" {
void *fn_80218EB0(){
 if(!igDataPumpInterface_meta) igDataPumpInterface_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpInterface_meta;
}
}
#pragma pop
}

namespace igDataPumpInterface {
// igDataPumpInterface: Alchemy class registration (0x80218EEC..0x80218FD4). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDataPumpInterface)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpInterface)

META_ARK_REGISTER(igDataPumpInterface)

void igDataPumpInterface_register()
{
    fn_80216620();
    meta_registerClass(1, &igDataPumpInterface_meta, igObject_register,
                       fn_800237D0, igDataPumpInterface_getMetaCall,
                       igDataPumpInterface_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igDataPumpInterface)

}
#pragma pop
}

namespace igDataPumpInfo {
// igDataPumpInfo: Alchemy class registration (0x80218FD4..0x8021900C). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDataPumpInfo)

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igDataPumpInfo)

}
#pragma pop
}

namespace unknown8021900C {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igDataPump_fieldInit();
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igDataPump_vtable[];
extern char igDataPumpInfo_vtable[];
extern char igDataPumpList_vtable[];
extern char lbl_804BBB00[];
extern char igDataPumpManager_vtable[];
extern char igDataPumpManager_dependencies[8];
extern char igDataPumpManager_fieldTypes[4];
extern char igDataPumpManager_fieldNames[4];
extern char igDataPumpManager_fieldStorage[4];
extern char igDataPumpManager_fieldOffsets[4];
extern char igDataPumpList_dependencies[8];
extern char igDataPumpInfo_dependencies[8];
extern char igDataPumpInfo_fieldTypes[4];
extern char igDataPumpInfo_fieldNames[4];
extern char igDataPumpInfo_fieldStorage[4];
extern char igDataPumpInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igDataPumpManager_meta;
extern void *igDataPumpList_meta;
extern void *igDataPumpInterface_meta;
extern void *igDataPumpInfo_meta;
extern void *igDataPump_meta;
void *igDataPumpManager_getMeta();
void *igDataPumpManager_vtableRead();
void igDataPumpManager_arkRegister();
void igDataPumpManager_register();
void *igDataPumpManager_getMetaCall();
void igDataPumpManager_fieldInit();
void *fn_80218D14();
void *igDataPumpList_getMeta();
void *igDataPumpList_vtableRead();
void igDataPumpList_arkRegister();
void igDataPumpList_register();
void *igDataPumpList_getMetaCall();
void *igDataPumpInterface_getMeta();
void igDataPumpInterface_arkRegister();
void igDataPumpInterface_register();
void *igDataPumpInterface_getMetaCall();
void *igDataPumpInfo_getMeta();
void *igDataPumpInfo_vtableRead();
void igDataPumpInfo_arkRegister();
void igDataPumpInfo_register();
void *igDataPumpInfo_getMetaCall();
void igDataPumpInfo_fieldInit();
void *igDataPump_getMeta();
void *igDataPump_vtableRead();
void igDataPump_arkRegister();
void igDataPump_register();
void *igDataPump_getMetaCall();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){igObject_construct(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=igDataPumpManager_vtable;}
};
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80219084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219084(){igObject_construct(this);}
};
struct UnknownGenObject80219084_0 : UnknownGenRoot80219084 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80219084_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80219084_1 : UnknownGenObject80219084_0 {
 inline ~UnknownGenObject80219084_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80219084 : UnknownGenObject80219084_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80219084(){unknown00=igDataPumpInfo_vtable;}
};
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){igObject_construct(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=igDataPump_vtable;}
};
extern "C" {
void *fn_8021900C(){
 if(!igDataPumpInfo_meta) igDataPumpInfo_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpInfo_meta;
}
}
#pragma pop
}

namespace igDataPumpInfo_2 {
// igDataPumpInfo: Alchemy class registration (0x80219048..0x802192C0). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDataPumpInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_800284EC();
void fn_80216620();
void *fn_80218D14();
extern char igDataPumpInfo_dependencies[8];
extern char igDataPumpInfo_fieldNames[4];
extern char igDataPumpInfo_fieldOffsets[4];
extern char igDataPumpInfo_fieldStorage[4];
extern char igDataPumpInfo_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igDataPumpInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _dataPumpList;
    char unknown18[8];
    inline ~igDataPumpInfoInstance() { __vtable = igDataPumpInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpInfo)

void *igDataPumpInfo_vtableRead()
{
    igDataPumpInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igDataPumpInfo_vtable;
    object._dataPumpList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDataPumpInfo)

void igDataPumpInfo_register()
{
    fn_80216620();
    meta_registerClass(0, &igDataPumpInfo_meta, igInfo_register,
                       fn_800284EC, igDataPumpInfo_getMetaCall,
                       igDataPumpInfo_className, 0x18,
                       igDataPumpInfo_vtableRead, igDataPumpInfo_fieldInit, 0, igDataPumpInfo_dependencies);
}

META_GET_META_CALL(igDataPumpInfo)

void igDataPumpInfo_fieldInit()
{
    Meta::igMetaObject *meta = igDataPumpInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDataPumpInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataPumpListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80218D14();
    dataPumpListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataPumpListField->_construct = true;
    meta_setupFields(meta, igDataPumpInfo_fieldNames, igDataPumpInfo_fieldStorage, igDataPumpInfo_fieldOffsets, base);
}

}
#pragma pop
}

namespace unknown802192C0 {
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igDataPump_fieldInit();
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igDataPump_vtable[];
extern char igDataPumpInfo_vtable[];
extern char igDataPumpList_vtable[];
extern char lbl_804BBB00[];
extern char igDataPumpManager_vtable[];
extern char igDataPumpManager_dependencies[8];
extern char igDataPumpManager_fieldTypes[4];
extern char igDataPumpManager_fieldNames[4];
extern char igDataPumpManager_fieldStorage[4];
extern char igDataPumpManager_fieldOffsets[4];
extern char igDataPumpList_dependencies[8];
extern char igDataPumpInfo_dependencies[8];
extern char igDataPumpInfo_fieldTypes[4];
extern char igDataPumpInfo_fieldNames[4];
extern char igDataPumpInfo_fieldStorage[4];
extern char igDataPumpInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igDataPumpManager_meta;
extern void *igDataPumpList_meta;
extern void *igDataPumpInterface_meta;
extern void *igDataPumpInfo_meta;
extern void *igDataPump_meta;
void *igDataPumpManager_getMeta();
void *igDataPumpManager_vtableRead();
void igDataPumpManager_arkRegister();
void igDataPumpManager_register();
void *igDataPumpManager_getMetaCall();
void igDataPumpManager_fieldInit();
void *fn_80218D14();
void *igDataPumpList_getMeta();
void *igDataPumpList_vtableRead();
void igDataPumpList_arkRegister();
void igDataPumpList_register();
void *igDataPumpList_getMetaCall();
void *igDataPumpInterface_getMeta();
void igDataPumpInterface_arkRegister();
void igDataPumpInterface_register();
void *igDataPumpInterface_getMetaCall();
void *igDataPumpInfo_getMeta();
void *igDataPumpInfo_vtableRead();
void igDataPumpInfo_arkRegister();
void igDataPumpInfo_register();
void *igDataPumpInfo_getMetaCall();
void igDataPumpInfo_fieldInit();
void *igDataPump_getMeta();
void *igDataPump_vtableRead();
void igDataPump_arkRegister();
void igDataPump_register();
void *igDataPump_getMetaCall();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){igObject_construct(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=igDataPumpManager_vtable;}
};
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80219084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219084(){igObject_construct(this);}
};
struct UnknownGenObject80219084_0 : UnknownGenRoot80219084 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80219084_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80219084_1 : UnknownGenObject80219084_0 {
 inline ~UnknownGenObject80219084_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80219084 : UnknownGenObject80219084_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80219084(){unknown00=igDataPumpInfo_vtable;}
};
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){igObject_construct(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=igDataPump_vtable;}
};
extern "C" {
void *igDataPump_create(void *object){
 igDataPump_arkRegister();
 return meta_createInstance(igDataPump_meta,object);
}
void *igDataPump_getMeta(){
 if(!igDataPump_meta || !(reinterpret_cast<unsigned int *>(igDataPump_meta)[0x24/4]&4)) igDataPump_arkRegister();
 return igDataPump_meta;
}
void *igDataPump_vtableRead(){
 UnknownGenObject80219334 object;
 object.unknown00=igDataPump_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDataPump_arkRegister(){
 meta_registerNow((int)igDataPump_register);
}
void igDataPump_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igDataPump_meta,(int)igObject_register,(int)fn_800237D0,(int)igDataPump_getMetaCall,(int)igDataPump_className,28,(int)igDataPump_vtableRead,(int)igDataPump_fieldInit,0,(int)igDataPump_dependencies);
}
void *igDataPump_getMetaCall(){return igDataPump_getMeta();}
}
#pragma pop
}

namespace igDataPump_fieldInit {
// igDataPump: Alchemy class registration (0x80219564..0x80219650). Written by tools/alchemymeta/metasrc.py.

META_DECLARE(igDataPump)
META_DECLARE(igObject)

extern "C" {
void *fn_8002A638();
void fn_80071694(void *, int);
void *fn_80218EB0();
}

#pragma push
#pragma auto_inline off
extern "C" {

void igDataPump_fieldInit()
{
    Meta::igMetaObject *meta = igDataPump_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDataPump_fieldTypes, 5);
    Meta::igObjectRefMetaField *destObjField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    destObjField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    destObjField->_construct = true;
    Meta::igObjectRefMetaField *destMetaField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v3 = fn_8002A638();
    destMetaField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v3);
    destMetaField->_persistent = false;
    Meta::igStringMetaField *destMetaClassNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 2));
    fn_80071694(destMetaClassNameField, 0);
    Meta::igStringMetaField *destMetaFieldNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 3));
    fn_80071694(destMetaFieldNameField, 0);
    Meta::igObjectRefMetaField *dpiField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_v7 = fn_80218EB0();
    dpiField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v7);
    meta_setupFields(meta, igDataPump_fieldNames, igDataPump_fieldStorage, igDataPump_fieldOffsets, base);
}

}
#pragma pop
}
